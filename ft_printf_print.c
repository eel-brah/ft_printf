/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-brah <eel-brah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:51:14 by eel-brah          #+#    #+#             */
/*   Updated: 2023/11/06 21:28:07 by eel-brah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar_fd_2(char c, int fd)
{
	return (write (fd, &c, 1));
}

// int	ft_

int	ft_puthex(unsigned long p, int fd, char *hex, int *printed)
{
	if (p < 16)
	{
		if (ft_putchar_fd_2(hex[p], fd) == -1)
			return (-1);
		(*printed)++;
		return (1);
	}
	if (ft_puthex(p / 16, fd, hex, printed) == -1)
		return (-1);
	if (ft_putchar_fd_2(hex[p % 16], fd) == -1)
		return (-1);
	(*printed)++;
	return (1);
}

int	ft_putnbr_2(unsigned int nb, int fd)
{
	if (nb < 10)
	{
		if (ft_putchar_fd_2 (nb + 48, fd) == -1)
			return (-1);
		return (1);
	}
	if (ft_putnbr_2 (nb / 10, fd) == -1)
		return (-1);
	if (ft_putchar_fd_2 (nb % 10 + 48, fd) == -1)
		return (-1);
	return (1);
}

int	ft_putnbr_fd_2(int n, char u, int fd)
{
	unsigned int	nb;

	nb = n;
	if (!u && n < 0)
	{
		nb *= -1;
		if (ft_putchar_fd_2('-', fd) == -1)
			return (-1);
	}
	if (ft_putnbr_2(nb, fd) == -1)
		return (-1);
	return (1);
}

int	ft_putstr_fd_2(char *str, int fd)
{
	if (!str)
	{
		if (write(fd, "(null)", 6) == -1)
			return (-1);
	}
	else if (*str)
	{
		if (write(fd, str, ft_strlen(str)) == -1)
			return (-1);
	}
	return (1);
}

int	ft_printf_putchar(va_list args, int fd, int *printed)
{
	if (ft_putchar_fd_2(va_arg(args, int), fd) == -1)
		return (-1);
	(*printed)++;
	return (1);
}

int	ft_printf_putstr(va_list args, int fd, int *printed)
{
	char	*s;

	s = va_arg(args, char *);
	if (ft_putstr_fd_2(s, fd) == -1)
		return (-1);
	if (s)
		(*printed) += ft_strlen(s);
	else 
		(*printed) += 6;
	return (1);
}

int	ft_printf_adrs(va_list args, int fd, int *printed)
{
	unsigned long	p;
	char			*hex;

	hex = "0123456789abcdef";
	p = (unsigned long)va_arg(args, void *);
	if (ft_putstr_fd_2("0x", fd) == -1)
		return (-1);
	(*printed) += 2;
	if (ft_puthex(p, fd, hex, printed) == -1)
		return (-1);
	return (1);
}

int	ft_itoa_count(int n)
{
	unsigned int	nb;
	int	len;

	len = 0;
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_printf_int_minimum_width(int i, int *print, t_format format)
{
	int	padding;

	padding = 0;
	*print += ft_itoa_count(i);
	if (format.nmb > *print)
	{
		padding = format.nmb - *print;
		*print += padding;
		while (padding)
		{
			if (ft_putchar_fd_2(' ', 1) == -1)
				return (-1);
			padding--;
		}
	}
	return (0);
}

int	ft_printf_int(va_list args, int fd, int *printed, char c, t_format format)
{
	int				i;
	unsigned int	u;
	int				print;
	char			p;

	print = 0;
	p = 0;
	if (c == 0)// if va_arg retrun NULL if faild
	{//-0.
		i = va_arg(args, int);
		if (format.flags & 1 << 3 && i > 0)
		{
			p = '+';
			print++;
		}
		else if (format.flags & 1 << 4 && i > 0)
		{
			p = ' ';
			print++;
		}
		if (ft_printf_int_minimum_width(i, &print, format) == -1)
			return (-1);
		if (p && ft_putchar_fd_2(p, fd) == -1)
			return (-1);
		if (ft_putnbr_fd_2(i, c, fd) == -1)
			return (-1);
	}
	else if (c == 1)
	{
		u = va_arg(args, unsigned int);
		if (ft_putnbr_fd_2(u, 1, fd) == -1)
			return (-1);
	}
	*printed += print;
	return (1);
}

int	ft_printf_int_in_hex(va_list args, int fd, int *printed, char c, t_format format)
{
	char	*hex;
	char	*hex_upper;
	int		i;

	(void)format;
	hex = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (format.flags & 1 << 5)
	{
		if (ft_putstr_fd_2("0x", fd) == -1)
			return (-1);
		(*printed) += 2;
	}
	i = va_arg(args, int);
	if (c == 'x')
	{
		if (ft_puthex((unsigned int)i, fd, hex, printed) == -1)
			return (-1);
	}
	else
	{
		if (ft_puthex((unsigned int)i, fd, hex_upper, printed) == -1)
			return (-1);
	}
	return (1);
}
