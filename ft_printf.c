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

int	ft_printf_formating(va_list args, t_format format)
{
	int	tmp;

	tmp = 0;
	if (format.specifier == 'c')
		tmp = ft_printf_print_chars_formats(args, format);
	else if (format.specifier == 's')
		tmp = ft_printf_print_chars_formats(args, format);
	else if (format.specifier == 'p')
		tmp = ft_printf_print_adrs_format(args, format);
	else if (format.specifier == 'd' || format.specifier == 'i')
		tmp = ft_printf_ints(args, format);
	else if (format.specifier == 'u')
		tmp = ft_printf_ints(args, format);
	else if (format.specifier == 'x' || format.specifier == 'X')
		tmp = ft_printf_ints(args, format);
	else if (format.specifier)
		tmp = ft_printf_print_chars_formats(args, format);
	return (tmp);
}

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
			tmp = ft_printf_format(&str, &format, args);
			if (tmp == -1)
				return (-1);
			printed += tmp;
		}
		else
		{
			if (ft_putchar_fd_r(*str, 1) == -1)
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
