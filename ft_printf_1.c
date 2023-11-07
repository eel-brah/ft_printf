/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-brah <eel-brah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:45:07 by eel-brah          #+#    #+#             */
/*   Updated: 2023/11/06 14:27:09 by eel-brah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft_printf.h"

static int	ft_putchar_fd(char c, int fd)
{
	return (write (fd, &c, 1));
}


int	ft_printf_formating_2(const char *str, int fd, va_list args, int printed)
{
	if (*str == 'u')
	{
		if (ft_printf_int(args, fd, &printed, 1) == -1)
			return (-1);
	}
	else if (*str == 'x' || *str == 'X')
	{
		if (ft_printf_int_in_hex(args, fd, &printed, *str) == -1)
			return (-1);
	}
	else if (*str == '%')
	{
		if (ft_putchar_fd('%', fd) == -1)
			return (-1);
		printed++;
	}
	else if (*str)
	{
		if (ft_putchar_fd(*str, 1) == -1)
			return (-1);
		printed++;
	}
	return (printed);
}

int	ft_printf_formating(const char *str, int fd, va_list args, int printed)
{
	if (*str == 'c')
	{
		if (ft_printf_putchar(args, fd, &printed) == -1)
			return (-1);
	}
	else if (*str == 's')
	{
		if (ft_printf_putstr(args, fd, &printed) == -1)
			return (-1);
	}
	else if (*str == 'p')
	{
		if (ft_printf_adrs(args, fd, &printed) == -1)
			return (-1);
	}
	else if (*str == 'd' || *str == 'i')
	{
		if (ft_printf_int(args, fd, &printed, 0) == -1)
			return (-1);
	}
	else
		printed = ft_printf_formating_2(str, fd, args, printed);
	return (printed);
}

int	ft_printf_iter(va_list args, const char *str, int fd)
{
	int	printed;

	printed = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			printed = ft_printf_formating(str, fd, args, printed);
			if (printed == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar_fd(*str, 1) == -1)
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
// int main()
// {
// 	//char c = '0';
// 	//ft_printf("%s to %c-%d\nGo to %p\n----Loading %i%%\nTest: %u\nBegin at: %X\n", "Welcome", 'w', 69, &c, 98, 4196699669, 28045);
	
// 	printf("%i\n", ft_printf("he%s", "33"));
// 	//for (int i = 0; i <= 100; i++)
// 	printf("%i\n", ft_printf("he%s", "33"));
	
// }