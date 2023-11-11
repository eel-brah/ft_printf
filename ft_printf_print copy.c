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

#include "ft_printf.h"

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
	}
	if (ft_putnbr_2(nb, fd) == -1)
		return (-1);
	return (1);
}

int	ft_putstr_fd_2(char *str, int fd, int len)
{
	if (!str)
	{
		if (len > 6)
			len = 6;
		if (write(fd, "(null)", len) == -1)
			return (-1);
	}
	else if (*str)
	{
		if (write(fd, str, len) == -1)
			return (-1);
	}
	return (1);
}

int	ft_printf_putchar(va_list args, t_format format, int w, char no)
{
	int	print;
	int	padding;
	char c;
	char *str;
	//int	precision;

	//precision = 0;
	c = 0;
	if (w == 1)
	{
		str = va_arg(args, char *);
		if (str)
			print = ft_strlen(str);
		else 
			print = 6;
	}
	else if (w == 0)
	{
		c = va_arg(args, int);
		print = 1;
	}
	else
	{
		c = no;
		print = 1;
	}
	int tmp = 0;
	if (w == 1 && format.flags & 1 << 6)
	{
		if (format.precision < print)
			print = format.precision;
	}
	if (format.flags & 1 << 2) // lmochkil y9d yd5l w hiy d - sghr mn print
	{
		if (w == 1)
		{
			if (ft_putstr_fd_2(str, 1, print) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar_fd_2(c, 1) == -1)
				return (-1);
		}
		padding = format.hyphen_nmb;
		if (padding == 0)
		{
			if (format.nmb > format.zero_nmb)
				padding = format.nmb;
			else
				padding = format.zero_nmb;
		}
		if (padding > print)
		{
			padding -= print;
			print += padding;
			while(padding)
			{
				if (ft_putchar_fd_2(' ', 1) == -1)
					return (-1);
				padding--;
			}
		}
		//}
		
	}
	else if (format.flags & 1 && format.zero_nmb > print)
	{
		padding = format.zero_nmb - print;
		tmp = print + padding;
		while(padding)
		{
			if (ft_putchar_fd_2('0', 1) == -1)
				return (-1);
			padding--;
		}
		if (w == 1)
		{
			if (ft_putstr_fd_2(str, 1, print) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar_fd_2(c, 1) == -1)
				return (-1);
		}
		print = tmp;
	}
	else if (format.nmb && format.zero_nmb == 0 && format.nmb > print) // change
	{
		padding = format.nmb - print;
		tmp = print + padding;
		while(padding)
		{
			if (ft_putchar_fd_2(' ', 1) == -1)
				return (-1);
			padding--;
		}
		if (w == 1)
		{
			if (ft_putstr_fd_2(str, 1, print) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar_fd_2(c, 1) == -1)
				return (-1);
		}
		print = tmp;
	}
	else
	{
		if (w == 1)
		{
			if (ft_putstr_fd_2(str, 1, print) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar_fd_2(c, 1) == -1)
				return (-1);
		}
	}
	return (print);
}

int	ft_printf_putstr(va_list args, t_format format)
{
	int print = ft_printf_putchar(args, format, 1, 0);
	if (print == -1)
		return (-1);
	return (print);
}

int	ft_printf_adrs(va_list args, t_format format)
{
	unsigned long	p;
	char			*hex;
	int				print;

	hex = "0123456789abcdef";
	p = (unsigned long)va_arg(args, void *);
	print = ft_printf_adrs_minimum_width(p, format, hex);
	if (print == -1)
		return (-1);
	return (print);
}

int	ft_int_len(int n, char c)
{
	unsigned int	nb;
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	nb = n;
	if (!c && n < 0)
	{
		nb *= -1;
		//len++;
	}
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int ft_hex_len(unsigned long p)
{
	int	len;

	len = 0;
	if (p == 0)
		return (1);
	while (p > 0)
	{
		p /= 16;
		len++;
	}
	return (len);
}

int	ft_printf_adrs_minimum_width(unsigned long p, t_format format, char *hex)
{
	int print;
	int	padding;
	int precision;

	padding = 0;
	precision = 0;
	print = ft_hex_len(p) + 2;
	if (format.precision > print)
		precision = format.precision - print + 2;
	print += precision; 
	int tmp = 0;
	if ((format.flags & 1 << 2 && (precision == 0 || format.hyphen_nmb > print - precision)))
	{
		if ((format.hyphen_nmb == 1 ) || (format.hyphen_nmb == 0 && format.nmb == 0 && format.zero_nmb == 0))
		{
				if (ft_putstr_fd_2("0x", 1, 2) == -1)
					return (-1);
				if (ft_puthex(p, 1, hex, &tmp) == -1)
					return (-1);
		}
		else
		{
			padding = format.hyphen_nmb;
			if (padding == 0)
			{
				padding = format.nmb;
				if (padding == 0)
					padding = format.zero_nmb;
			}
			padding = padding - print;
			if (padding > 0)
				print += padding;
			if (ft_putstr_fd_2("0x", 1, 2) == -1)
				return (-1);
			while (precision)
			{
				if (ft_putchar_fd_2('0', 1) == -1)
					return (-1);
				precision--;
			}
			if (ft_puthex(p, 1, hex, &tmp) == -1)
				return (-1);
			while (padding > 0)
			{
				if (ft_putchar_fd_2(' ', 1) == -1)
					return (-1);
				padding--;
			}
		}
	}
	else if (format.flags & 1 << 6 && precision)
	{
		if (format.zero_nmb > print)
		{
			if (!(format.flags & 1 << 2))
			{
				padding = format.zero_nmb - print;
				print += padding;
				while (padding)
				{
					if (ft_putchar_fd_2(' ', 1) == -1)
						return (-1);
					padding--;
				}
			}
		}
		if (ft_putstr_fd_2("0x", 1, 2) == -1)
			return (-1);

		while (precision)
		{
			if (ft_putchar_fd_2('0', 1) == -1)
				return (-1);
			precision--;
		}
		if (ft_puthex(p, 1, hex, &tmp) == -1)
			return (-1);
		if (format.flags & 1 << 2 && format.hyphen_nmb == 0 && format.zero_nmb > print)
		{
			padding = format.zero_nmb - print;
			print += padding;
			while (padding)
			{
				if (ft_putchar_fd_2(' ', 1) == -1)
					return (-1);
				padding--;
			}
		}
	}
	else if (format.flags & 1 && format.zero_nmb > print)
	{
		padding = format.zero_nmb - print;
		print += padding;
		if (ft_putstr_fd_2("0x", 1, 2) == -1)
			return (-1);
		while (padding)
		{
			if (ft_putchar_fd_2('0', 1) == -1)
				return (-1);
			padding--;
		}
		if (ft_puthex(p, 1, hex, &tmp) == -1)
			return (-1);
	}
	else if (format.nmb > print && format.zero_nmb == 0 && format.nmb > print)
	{
		padding = format.nmb - print;
		print += padding;
		while (padding)
		{
			if (ft_putchar_fd_2(' ', 1) == -1)
				return (-1);
			padding--;
		}
		if (ft_putstr_fd_2("0x", 1, 2) == -1)
			return (-1);
		if (ft_puthex(p, 1, hex, &tmp) == -1)
			return (-1);
	}
	else
	{
		if (ft_putstr_fd_2("0x", 1, 2) == -1)
			return (-1);
		if (ft_puthex(p, 1, hex, &tmp) == -1)
			return (-1);
	}
	return (print);
}


int	ft_printf_int_minimum_width(int i, t_format format, char c)
{
	int print;
	int	padding;
	char o;
	char *p;
	int precision;
	char	*hex_lower;
	char	*hex_upper;
	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	char	*hex = hex_upper;
	if (format.specifier == 'x')
		hex = hex_lower;
	int tmp = 0;

	padding = 0;
	precision = 0;
	o = 0;
	p = NULL;
	if (c == 'h' || c == 'H')
		print = ft_hex_len(i);
	else 
		print = ft_int_len(i, c);
	if (i == 0 && format.flags & 1 << 6 && format.precision == 0)
		print = 0;
	if (format.precision > print)
		precision = format.precision - print;
	print += precision;
	if (c == 0 && format.flags & 1 << 3 && i >= 0)
	{
		o = '+';
		print++;
	}
	else if (c == 0 && format.flags & 1 << 4 && i >= 0)
	{
		o = ' ';
		print++;
	}
	else if (c == 0 && i < 0)
	{
		o = '-';
		print++;
	}
	else if ((c == 'h' || c == 'H') && format.flags & 1 << 5)
	{
		p = "0x";
		print += 2;
	}

	if ((format.flags & 1 << 2 && (precision == 0 || format.hyphen_nmb > print - precision)))
	{
		if ((format.hyphen_nmb == 1 && i != 0) || (format.hyphen_nmb == 0 && format.nmb == 0 && format.zero_nmb == 0))
		{
			if (c == 'h' || c == 'H')
			{
				if (p && ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
					return (-1);
				if (ft_puthex(i, 1, hex, &tmp) == -1)
					return (-1);
			}
			else 
			{
				if (o && ft_putchar_fd_2(o, 1) == -1)
					return (-1);
				if (!(i == 0 && format.flags & 1 << 6 && format.precision == 0))
					if (ft_putnbr_fd_2(i, c, 1) == -1)
					return (-1);
			}
		}
		else
		{
			padding = format.hyphen_nmb;
			if (padding == 0)
			{
				padding = format.nmb;
				if (padding == 0)
					padding = format.zero_nmb;
			}
			padding = padding - print;
			if (padding > 0)
				print += padding;
			if (c == 'h' || c == 'H')
			{
				if (p == ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
					return (-1);
			}
			else
			{
				if (o && ft_putchar_fd_2(o, 1) == -1)
					return (-1);
			}
			while (precision)
			{
				if (ft_putchar_fd_2('0', 1) == -1)
					return (-1);
				precision--;
			}
			if (!(i == 0 && format.flags & 1 << 6 && format.precision == 0))
			{
				if (c == 'h' || c == 'H')
				{
					if (ft_puthex(i, 1, hex, &tmp) == -1)
						return (-1);
				}
				else
				{
					if (ft_putnbr_fd_2(i, c, 1) == -1)
						return (-1);
				}
			}
			while (padding > 0)
			{
				if (ft_putchar_fd_2(' ', 1) == -1)
					return (-1);
				padding--;
			}
		}
	}
	else if (format.flags & 1 << 6)
	{
		if (format.zero_nmb > print || format.nmb > print)
		{
			if (!(format.flags & 1 << 2))
			{
				if (format.zero_nmb > format.nmb)
					padding = format.zero_nmb - print;
				else
					padding = format.nmb - print;
				print += padding;
				while (padding)
				{
					if (ft_putchar_fd_2(' ', 1) == -1)
						return (-1);
					padding--;
				}
			}
		}
		if ((c == 'h' || c == 'H') && p && ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
			return (-1);
		else if (o && ft_putchar_fd_2(o, 1) == -1)
			return (-1);
		while (precision)
		{
			if (ft_putchar_fd_2('0', 1) == -1)
				return (-1);
			precision--;
		}
		if (!(i == 0 && format.flags & 1 << 6 && format.precision == 0))
		{	
			if (c == 'h' || c == 'H')
			{
				if (ft_puthex(i, 1, hex, &tmp) == -1)
					return (-1);
			}
			else 
			{
				if (ft_putnbr_fd_2(i, c, 1) == -1)
					return (-1);
			}
		}
		if (format.flags & 1 << 2 && format.hyphen_nmb == 0 && format.zero_nmb > print)
		{
			padding = format.zero_nmb - print;
			print += padding;
			while (padding)
			{
				if (ft_putchar_fd_2(' ', 1) == -1)
					return (-1);
				padding--;
			}
		}
	}
	else if (format.flags & 1 && format.zero_nmb > print)
	{
		padding = format.zero_nmb - print;
		print += padding;
		if (c == 'h' || c == 'H')
		{
			if (p && ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
				return (-1);
		}
		else
		{
			if (o && ft_putchar_fd_2(o, 1) == -1)
				return (-1);
		}
		while (padding)
		{
			if (ft_putchar_fd_2('0', 1) == -1)
				return (-1);
			padding--;
		}
		if (!(i == 0 && format.flags & 1 << 6 && format.precision == 0))
		{
			if (c == 'h' || c == 'H')
			{
				if (ft_puthex(i, 1, hex, &tmp) == -1)
					return (-1);
			}
			else
			{
				if (ft_putnbr_fd_2(i, c, 1) == -1)
					return (-1);
			}
		}
	}
	else if (format.nmb > print && format.zero_nmb == 0 && format.nmb > print)
	{
		padding = format.nmb - print;
		print += padding;
		while (padding)
		{
			if (ft_putchar_fd_2(' ', 1) == -1)
				return (-1);
			padding--;
		}
		if (c == 'h' || c == 'H')
		{
			if (p && ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
				return (-1);
			if (ft_puthex(i, 1, hex, &tmp) == -1)
				return (-1);
		}
		else 
		{
			if (o && ft_putchar_fd_2(o, 1) == -1)
				return (-1);
			if (!(i == 0 && format.flags & 1 << 6 && format.precision == 0))
				if (ft_putnbr_fd_2(i, c, 1) == -1)
					return (-1);
		}
	}
	else
	{
		if (c == 'h' || c == 'H')
		{
			if (p && ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
				return (-1);
			if (ft_puthex(i, 1, hex, &tmp) == -1)
				return (-1);
		}
		else 
		{
			if (o && ft_putchar_fd_2(o, 1) == -1)
				return (-1);
			if (!(i == 0 && format.flags & 1 << 6 && format.precision == 0))
				if (ft_putnbr_fd_2(i, c, 1) == -1)
					return (-1);
		}
	}
	return (print);
}

int	ft_printf_hex_minimum_width(unsigned int i, t_format format)
{
	int print;
	int	padding;
	char *p;
	int precision;
	char	*hex_lower;
	char	*hex_upper;
	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	char	*hex = hex_upper;
	if (format.specifier == 'x')
		hex = hex_lower;
	int tmp = 0;

	padding = 0;
	precision = 0;
	p = NULL;
	print = ft_hex_len(i);
	if (format.precision > print)
		precision = format.precision - print;
	print += precision; 
	if (format.flags & 1 << 5)
	{
		p = "0x";
		print += 2;
	}
	if ((format.flags & 1 << 2 && (precision == 0 || format.hyphen_nmb > print - precision)))
	{
		if ((format.hyphen_nmb == 1 ) || (format.hyphen_nmb == 0 && format.nmb == 0 && format.zero_nmb == 0))
		{
			if (p)
				if (ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
					return (-1);
			if (ft_puthex(i, 1, hex, &tmp) == -1)
					return (-1);
		}
		else
		{
			padding = format.hyphen_nmb;
			if (padding == 0)
			{
				padding = format.nmb;
				if (padding == 0)
					padding = format.zero_nmb;
			}
			padding = padding - print;
			if (padding > 0)
				print += padding;
			if (p)
				if (ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
					return (-1);
			while (precision)
			{
				if (ft_putchar_fd_2('0', 1) == -1)
					return (-1);
				precision--;
			}
			if (ft_puthex(i, 1, hex, &tmp) == -1)
					return (-1);
			while (padding > 0)
			{
				if (ft_putchar_fd_2(' ', 1) == -1)
					return (-1);
				padding--;
			}
		}
	}
	else if (format.flags & 1 << 6 && precision)
	{
		if (format.zero_nmb > print)
		{
			if (!(format.flags & 1 << 2))
			{
				padding = format.zero_nmb - print;
				print += padding;
				while (padding)
				{
					if (ft_putchar_fd_2(' ', 1) == -1)
						return (-1);
					padding--;
				}
			}
		}
		if (p)
			if (ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
				return (-1);
		while (precision)
		{
			if (ft_putchar_fd_2('0', 1) == -1)
				return (-1);
			precision--;
		}
		if (ft_puthex(i, 1, hex, &tmp) == -1)
			return (-1);
		if (format.flags & 1 << 2 && format.hyphen_nmb == 0 && format.zero_nmb > print)
		{
			padding = format.zero_nmb - print;
			print += padding;
			while (padding)
			{
				if (ft_putchar_fd_2(' ', 1) == -1)
					return (-1);
				padding--;
			}
		}
	}
	else if (format.flags & 1 && format.zero_nmb > print)
	{
		padding = format.zero_nmb - print;
		print += padding;
		if (p)
			if (ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
				return (-1);
		while (padding)
		{
			if (ft_putchar_fd_2('0', 1) == -1)
				return (-1);
			padding--;
		}
		if (ft_puthex(i, 1, hex, &tmp) == -1)
			return (-1);
	}
	else if (format.nmb > print && format.zero_nmb == 0 && format.nmb > print)
	{
		padding = format.nmb - print;
		print += padding;
		while (padding)
		{
			if (ft_putchar_fd_2(' ', 1) == -1)
				return (-1);
			padding--;
		}
		if (p)
			if (ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
				return (-1);
		if (ft_puthex(i, 1, hex, &tmp) == -1)
			return (-1);
	}
	else
	{
		if (p)
			if (ft_putstr_fd_2(p, 1, ft_strlen(p)) == -1)
				return (-1);
		if (ft_puthex(i, 1, hex, &tmp) == -1)
			return (-1);
	}
	return (print);
}

int	ft_printf_int(va_list args, char c, t_format format)
{
	int				i;
	unsigned int	u;
	int				print;

	print = 0;
	if (c == 0)// if va_arg retrun NULL if faild
	{//-0.
		i = va_arg(args, int);
		print = ft_printf_int_minimum_width(i, format, c);
		if (print == -1)
			return (-1);
	}
	else if (c == 1)
	{
		u = va_arg(args, unsigned int);
		print = ft_printf_int_minimum_width(u, format, c);
		if (print == -1)
			return (-1);
		// if (ft_putnbr_fd_2(u, 1, 1) == -1)
		// 	return (-1);
	}
	return (print);
}

int	ft_printf_int_in_hex(va_list args, t_format format)
{

	int		i;
	int		print;

	i = va_arg(args, int);
	print = ft_printf_int_minimum_width(i, format, 'h');
	//print = ft_printf_hex_minimum_width(i, format);
	if (print == -1)
		return (-1);
	return (print);
}
