/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-brah <eel-brah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:45:07 by eel-brah          #+#    #+#             */
/*   Updated: 2023/11/06 21:49:09 by eel-brah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf_formating_2(int fd, va_list args, int printed, t_format format)
{
	if (format.specifier == 'u')
	{
		if (ft_printf_int(args, &printed, 1, format) == -1)
			return (-1);
	}
	else if (format.specifier == 'x' || format.specifier == 'X')
	{
		if (ft_printf_int_in_hex(args, fd, &printed, format.specifier, format) == -1)
			return (-1);
	}
	else if (format.specifier == '%')
	{
		if (ft_putchar_fd_2('%', fd) == -1)
			return (-1);
		printed++;
	}
	else if (format.specifier)
	{
		if (ft_putchar_fd_2(format.specifier, 1) == -1)
			return (-1);
		printed++;
	}
	return (printed);
}

int	ft_printf_formating(int fd, va_list args, int printed, t_format format)
{
	if (format.specifier == 'c')
	{
		if (ft_printf_putchar(args, &printed, format) == -1)
			return (-1);
	}
	else if (format.specifier == 's')
	{
		if (ft_printf_putstr(args, fd, &printed) == -1)
			return (-1);
	}
	else if (format.specifier == 'p')
	{
		if (ft_printf_adrs(args, &printed, format) == -1)
			return (-1);
	}
	else if (format.specifier == 'd' || format.specifier == 'i')
	{
		if (ft_printf_int(args, &printed, 0, format) == -1)
			return (-1);
	}
	else
		printed = ft_printf_formating_2(fd, args, printed, format);
	return (printed);
}

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	if (*ptr == (unsigned char)c)
		return (ptr);
	return (NULL);
}

char	*ft_get_format(const char *str)
{
	char	*ptr;
	char	*flags;
	int 	i;

	i = 0;
	flags = "-0.# +123456789";
	ptr = flags;
	while (*(str + i) && ptr)
		ptr = ft_strchr(flags, *(str + i++));
	if (!ptr && i > 0)
	{
		ptr = ft_substr(str, 0, i);
		if (!ptr)
			return ((void *)-1);
		return (ptr);
	}
	else 
		return (NULL);
}

int	ft_to_skip(char *formats)
{
	char	*ptr;
	int		skp;
	char	*to_skep;

	to_skep = "+ #";
	ptr = to_skep;
	skp = 0;
	while (ptr)
		ptr = ft_strchr(to_skep, *(formats + skp++));
	if (skp)
		skp--;
	return (skp);

}

// int ft_to_skip_v2(char *ptr)
// {
// 	char	*nmb;
// 	int		skp;

// 	nmb = "123456789";
// 	ptr = NULL;
// 	skp = 0;
// 	while (!ptr)
// 		ptr = ft_strchr(nmb, *(ptr + skp++));
// }

t_format	ft_format_genarator(char *formats)
{
	char	*ptr;
	char 		*format_set = "-+ #.";
	int 		i;
	t_format	format;
	char		*format_specifier;

	format_specifier = "cspdiuxX%";
	i = 0;
	int skp = 0;
	int skp2 = 0;
	format.flags = 0;
	format.nmb = 0; 
	format.specifier = formats[ft_strlen(formats)-1];
	format.precision = 0;
	format.width = 0;
	format.hyphen_nmb = 0;
	format.zero_nmb = 0;
	// fix how you git 0/zero_nmb and format.nmb 
	skp = ft_to_skip(formats);
	if (*(formats + skp) == '0')
	{
		format.flags = 1;
		skp2 = ft_to_skip(formats + skp + 1);
		format.zero_nmb = ft_atoi(formats + skp + skp2 + 1);
	}
	else
		format.nmb = ft_atoi(formats + skp);
	while (*(format_set + i))
	{
		ptr = ft_strrchr(formats, *(format_set + i++));
		skp = 0;
		if (ptr)
		{
			if (*ptr == '-')
			{
				format.flags = format.flags | 1 << 2;
				skp = ft_to_skip(ptr+1);
				format.hyphen_nmb = ft_atoi(ptr+skp+1);
			}
			else if (*ptr == '+')
				format.flags = format.flags | 1 << 3;
			else if (*ptr == ' ')
				format.flags = format.flags | 1 << 4;
			else if (*ptr == '#')
				format.flags = format.flags | 1 << 5;
			else if (*ptr == '.')
			{
				format.flags = format.flags | 1 << 6;
				skp = ft_to_skip(ptr+1);
				format.precision = ft_atoi(ptr+skp+1);
			}
		}
	}	
	return (format);
}

void	ft_print_formats_stuct(t_format format)
{
	if (format.flags & 1)
		printf("%c: %i\n", '0', format.zero_nmb);
	if (format.flags & 1 << 2)
		printf("%c: %i\n", '-', format.hyphen_nmb);
	if (format.flags & 1 << 3)
		printf("%c\n", '+');
	if (format.flags & 1 << 4)
		printf("%c\n", ' ');
	if (format.flags & 1 << 5)
		printf("%c\n", '#');
	if (format.precision)
		printf("%i\n", format.precision);
	if (format.specifier)
		printf("%c\n", format.specifier);
}

int	ft_printf_iter(va_list args, const char *str, int fd)
{
	int	printed;
	t_format format;

	printed = 0;
	char *formats;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str)
			{
				formats = ft_get_format(str);
				if (formats == (void*)-1)
					return (-1);
				else if (!formats)
					return (0);
				(void)formats;
				format = ft_format_genarator(formats);
				//ft_print_formats_stuct(format);
				// str += ft_strlen(formats) - 1;
				str += ft_strlen(formats) - 1;
				printed = ft_printf_formating(fd, args, printed, format);
				free(formats);
				if (printed == -1)
					return (-1);
			}
		}
		else
		{
			if (ft_putchar_fd_2(*str, 1) == -1)
				return (-1);
			printed++;
		}
		if (*str)
			str++;
	}
	return (printed);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	int				fd;
	int				printed;

	fd = 1;
	va_start (args, str);
	printed = ft_printf_iter(args, str, fd);
	va_end(args);
	return (printed);
}
