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

#include "ft_printf.h"


int	ft_atoi_2(const char *str)
{
	int		sign;
	int		nb;

	sign = 1;
	nb = 0;
	//while (ft_isspace(*str))
	//	str++;
	// if (*str == '-' || *str == '+')
	// 	if (*str++ == '-')
	// 		sign = -1;
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + (*str++ - '0');
	return (nb * sign);
}

int	ft_printf_formating(va_list args, t_format format)
{
	int	tmp;

	tmp = 0;
	if (format.specifier == 'c')
		tmp = ft_printf_print_chars_formats(args, format);
	else if (format.specifier == 's')
		tmp = ft_printf_putstr(args, format);
	else if (format.specifier == 'p')
		tmp = ft_printf_adrs(args, format);
	else if (format.specifier == 'd' || format.specifier == 'i')
		tmp = ft_printf_int(args, format);
	else if (format.specifier == 'u')
		tmp = ft_printf_int(args, format);
	else if (format.specifier == 'x' || format.specifier == 'X')
		tmp = ft_printf_int_in_hex(args, format);
	else if (format.specifier)
		tmp = ft_printf_print_chars_formats(args, format);
	return (tmp);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	char	*ptr;

// 	ptr = (char *)s;
// 	while (*ptr)
// 	{
// 		if (*ptr == (unsigned char)c)
// 			return (ptr);
// 		ptr++;
// 	}
// 	if (*ptr == (unsigned char)c)
// 		return (ptr);
// 	return (NULL);
// }

char	*ft_get_format(const char *str)
{
	char	*ptr;
	char	*flags;
	int		i;

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
	while (ptr && *(formats + skp))
		ptr = ft_strchr(to_skep, *(formats + skp++));
	if (skp)
		skp--;
	return (skp);
}

int	ft_to_skip_digit(char *formats)
{
	char	*ptr;
	int		skp;
	char	*to_skep;

	to_skep = "0123456789";
	ptr = to_skep;
	skp = 0;
	while (ptr && *(formats + skp))
		ptr = ft_strchr(to_skep, *(formats + skp++));
	if (skp)
		skp--;
	return (skp);
}

void	ft_get_zero_flag_nmb_helper(char *tmp, t_format *format)
{
	int	skp;

	skp = ft_to_skip(tmp);
	if (ft_isdigit(*(tmp + skp))) // && *(tmp + skp) != 48 // why kont drt hadi
		format->zero_nmb = ft_atoi_2(tmp + skp);
	else if (format->zero_nmb == 0)
		format->zero_nmb = format->nmb;
	tmp += skp;
	tmp += ft_to_skip_digit(tmp);
	skp = ft_to_skip(tmp);
	while (skp > 0)
	{
		if (ft_isdigit(*(tmp + skp)) && *(tmp + skp) != 48)
			format->zero_nmb = ft_atoi_2(tmp + skp);
		tmp += skp;
		tmp += ft_to_skip_digit(tmp);
		skp = ft_to_skip(tmp);
	}
}

void	ft_get_zero_flag_nmb(char *formats, t_format *format)
{
	int		skp;
	char	*tmp;

	skp = ft_to_skip(formats);
	if (*(formats + skp) == '0')
	{
		format->flags = format->flags | 1;
		tmp = formats + skp + 1;
		ft_get_zero_flag_nmb_helper (tmp, format);
		if (format->zero_nmb != 0)
			format->hyphen_nmb = format->zero_nmb;
	}
	else if (ft_isdigit(*(formats + skp)))
	{
		format->nmb = ft_atoi_2(formats + skp);
		if (format->nmb != 0)
		{
			format->hyphen_nmb = format->nmb;
			format->zero_nmb = format->nmb;
		}
	}
}

void	ft_format_hyphen(t_format *format, char *tmp)
{
	int	nmb;
	int	skp;

	nmb = 0;
	format->flags = format->flags | 1 << 2;
	nmb = ft_atoi_2(tmp);
	if (nmb > 0)
		format->hyphen_nmb = nmb;	
	tmp += ft_to_skip_digit(tmp);
	skp = ft_to_skip(tmp);
	while (skp > 0)
	{
		if (ft_isdigit(*(tmp + skp)) && *(tmp + skp) != 48)
			format->hyphen_nmb = ft_atoi_2(tmp + skp);
		tmp += skp;
		tmp += ft_to_skip_digit(tmp);
		skp = ft_to_skip(tmp);
	}
	// if (format->hyphen_nmb == 0)
	// {
	// 	format->hyphen_nmb
	// 	if ()
	// }
}

void	ft_format_initialization(t_format *format, char *formats)
{
	format->flags = 0;
	format->nmb = 0; 
	format->specifier = formats[ft_strlen(formats)-1];
	format->precision = 0;
	format->width = 0;
	format->hyphen_nmb = 0;
	format->zero_nmb = 0;
}

void	ft_format_iter(char c, t_format *format, char *formats)
{
	//int	skp;

	if (c == '-')
		ft_format_hyphen(format, formats + 1);
	else if (c == '+')
	{
		format->flags = format->flags | 1 << 3;
		ft_get_zero_flag_nmb(formats, format);
		int i = ft_atoi_2(formats+1);
		if (i != 0)
			format->hyphen_nmb = i;
	}
	else if (c == ' ')
	{
		format->flags = format->flags | 1 << 4;
		ft_get_zero_flag_nmb(formats, format);
		int i = ft_atoi_2(formats+1);
		if (i != 0)
			format->hyphen_nmb = i;
		
	}
	else if (c == '#')
	{
		format->flags = format->flags | 1 << 5;
		ft_get_zero_flag_nmb (formats, format);
		int i = ft_atoi_2(formats+1);
		if (i != 0)
			format->hyphen_nmb = i;
	}
	else if (c == '.')
	{
		format->flags = format->flags | 1 << 6;
		//skp = ft_to_skip(formats + 1);
		format->precision = ft_atoi_2(formats+1);
		//printf("\n%i=============\n", format->precision);
	}
}

t_format	ft_format_genarator(char *formats)
{
	char		*ptr;
	char		*format_set;
	int			index;
	t_format	format;

	index = 0;
	format_set = "-+ #.";
	ft_format_initialization(&format, formats);
	ft_get_zero_flag_nmb(formats, &format);
	while (*(formats + index))
	{
		ptr = ft_strchr(format_set, *(formats + index));
		if (ptr)
			ft_format_iter(*ptr, &format, formats + index);
		index++;
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

int	ft_printf_format(const char **str, t_format *format, va_list args)
{
	char	*formats;
	int		printed;

	printed = 0;
	if (!*str)
		return (0);
	formats = ft_get_format(*str);
	if (formats == (void *)-1)
		return (-1);
	else if (!formats)
		return (0);
	*format = ft_format_genarator(formats);
	printed = ft_printf_formating(args, *format);
	*str += ft_strlen(formats) - 1;
	free(formats);
	if (printed == -1)
		return (-1);
	return (printed);
}

int	ft_printf_iter(va_list args, const char *str)
{
	int			printed;
	t_format	format;
	int			tmp;

	printed = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			tmp = ft_printf_format(&str, &format, args);// mand5lch printed hna
			if (tmp == -1)
				return (-1);
			printed += tmp;
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
	int				printed;

	va_start (args, str);
	printed = ft_printf_iter(args, str);
	va_end(args);
	return (printed);
}
