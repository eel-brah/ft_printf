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

int	ft_putchar_fd_r(char c, int fd)
{
	return (write (fd, &c, 1));
}

int	ft_puthex(unsigned long p, char *hex)
{
	if (p < 16)
		return (ft_putchar_fd_r(hex[p], 1));
	if (ft_puthex(p / 16, hex) == -1)
		return (-1);
	return (ft_putchar_fd_r(hex[p % 16], 1));
}

int	ft_putnbr_r(unsigned int nb, int fd)
{
	if (nb < 10)
		return (ft_putchar_fd_r (nb + 48, fd));
	if (ft_putnbr_r (nb / 10, fd) == -1)
		return (-1);
	return (ft_putchar_fd_r (nb % 10 + 48, fd));
}

int	ft_putnbr_fd_r(int n, char c, int fd)
{
	unsigned int	nb;

	nb = n;
	if (c != 'u' && n < 0)
		nb *= -1;
	return (ft_putnbr_r(nb, fd));
}

int	ft_putstr_fd_r(char *str, int fd, int len)
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

int	ft_printf_get_padding(int nmb, int print)
{
	int	padding;

	padding = nmb;
	if (padding > print)
		return (padding - print);
	else
		return (0);
}

int	ft_printf_print_paddings(int pad, char c)
{
	while (pad > 0)
	{
		if (ft_putchar_fd_r(c, 1) == -1)
			return (-1);
		pad--;
	}
	return (0);
}

int	ft_printf_print_chars(char x, int print, char *str, char c)
{
	if (x == 's')
	{
		if (ft_putstr_fd_r(str, 1, print) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar_fd_r(c, 1) == -1)
			return (-1);
	}
	return (0);
}

int	ft_printf_print_char_hyphen(t_format format, int *print, char *str, char c)
{
	int	padding;

	if (ft_printf_print_chars(format.specifier, *print, str, c) == -1)
		return (-1);
	padding = ft_printf_get_padding(format.hyphen_nmb, *print);
	*print += padding;
	if (ft_printf_print_paddings(padding, ' ') == -1)
		return (-1);
	return (0);
}

int	ft_printf_print_char_zero(t_format format, int *print, char *str, char c)
{
	int	padding;

	padding = ft_printf_get_padding(format.zero_nmb, *print);
	if (ft_printf_print_paddings(padding, '0') == -1)
		return (-1);
	if (ft_printf_print_chars(format.specifier, *print, str, c) == -1)
		return (-1);
	*print += padding;
	return (0);
}

int	ft_printf_print_char_nmb(t_format format, int *print, char *str, char c)
{
	int	padding;

	padding = ft_printf_get_padding(format.nmb, *print);
	if (ft_printf_print_paddings(padding, ' ') == -1)
		return (-1);
	if (ft_printf_print_chars(format.specifier, *print, str, c) == -1)
		return (-1);
	*print += padding;
	return (0);
}

int	ft_printf_print_chars_helper(t_format format,
								va_list args, char **str, char *c)
{
	int	print;

	if (format.specifier == 's')
	{
		*str = va_arg(args, char *);
		if (*str)
			print = ft_strlen(*str);
		else 
			print = 6;
	}
	else if (format.specifier == 'c')
	{
		*c = va_arg(args, int);
		print = 1;
	}
	else
	{
		*c = format.specifier;
		print = 1;
	}
	if (format.specifier == 's' && format.flags & 1 << 6)
		if (format.precision < print)
			print = format.precision;
	return (print);
}

int	ft_printf_print_chars_formats(va_list args, t_format format)
{
	int		print;
	char	c;
	char	*str;
	int		tmp;

	c = 0;
	str = NULL;
	print = 0;
	print = ft_printf_print_chars_helper(format, args, &str, &c);
	if (format.flags & 1 << 2)
		tmp = ft_printf_print_char_hyphen(format, &print, str, c);
	else if (format.flags & 1)
		tmp = ft_printf_print_char_zero(format, &print, str, c);
	else if (format.nmb && format.nmb > print)
		tmp = ft_printf_print_char_nmb(format, &print, str, c);
	else
		tmp = ft_printf_print_chars(format.specifier, print, str, c);
	if (tmp == -1)
		return (-1);
	return (print);
}

int	ft_printf_putstr(va_list args, t_format format)
{
	return (ft_printf_print_chars_formats(args, format));
}

int	ft_printf_adrs(va_list args, t_format format)
{
	unsigned long	p;

	p = (unsigned long)va_arg(args, void *);
	return (ft_printf_print_adrs_format(p, format));
}

int	ft_int_len(int n, char c)
{
	unsigned int	nb;
	int				len;

	len = 0;
	if (n == 0)
		return (1);
	nb = n;
	if (c != 'u' && n < 0)
		nb *= -1;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_hex_len(unsigned long p)
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

int	ft_printf_get_print(t_format format, unsigned long i, int *precision)
{
	int	print;

	print = 0;
	if (format.specifier == 'x' || format.specifier == 'X')
		print = ft_hex_len((unsigned int)i);
	else if (format.specifier == 'p')
		print = ft_hex_len(i);
	else
		print = ft_int_len((int)i, format.specifier);
	if (i == 0 && format.flags & 1 << 6 && format.precision == 0)
		print = 0;
	if (format.specifier == 'p')
	{
		print += 2;
		if (format.precision > print)
			*precision = format.precision - print + 2;
	}
	else
		if (format.precision > print)
			*precision = format.precision - print;
	return (print + *precision);
}

int	ft_pirntf_padding_s1(t_format format, int *print)
{
	int	padding;

	padding = 0;
	if (format.zero_nmb > *print || format.nmb > *print)
	{
		if (!(format.flags & 1 << 2))
		{
			if (format.zero_nmb > format.nmb)
				padding = format.zero_nmb - *print;
			else
				padding = format.nmb - *print;
			*print += padding;
			if (ft_printf_print_paddings(padding, ' ') == -1)
				return (-1);
		}
	}
	return (0);
}

int	ft_printf_adrs_print_hyphen(t_format format,
								unsigned long p, int *print, int precision)
{
	int		padding;
	char	*hex;

	hex = "0123456789abcdef";
	padding = ft_printf_get_padding(format.hyphen_nmb, *print);
	*print += padding;
	if (ft_putstr_fd_r("0x", 1, 2) == -1)
		return (-1);
	if (ft_printf_print_paddings(precision, '0') == -1)
		return (-1);
	if (!(p == 0 && format.flags & 1 << 6 && format.precision == 0))
		if (ft_puthex(p, hex) == -1)
			return (-1);
	if (ft_printf_print_paddings(padding, ' ') == -1)
		return (-1);
	return (0);
}

int	ft_printf_adrs_print_precision(t_format format,
									unsigned long p, int *print, int precision)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (ft_pirntf_padding_s1(format, print) == -1)
		return (-1);
	if (ft_putstr_fd_r("0x", 1, 2) == -1)
		return (-1);
	if (ft_printf_print_paddings(precision, '0') == -1)
		return (-1);
	if (!(p == 0 && format.flags & 1 << 6 && format.precision == 0))
		if (ft_puthex(p, hex) == -1)
			return (-1);
	return (0);
}

int	ft_printf_adrs_print_zero(t_format format, unsigned long p, int *print)
{
	int		padding;
	char	*hex;

	hex = "0123456789abcdef";
	padding = ft_printf_get_padding(format.zero_nmb, *print);
	*print += padding;
	if (ft_putstr_fd_r("0x", 1, 2) == -1)
		return (-1);
	if (ft_printf_print_paddings(padding, '0') == -1)
		return (-1);
	if (!(p == 0 && format.flags & 1 << 6 && format.precision == 0))
		if (ft_puthex(p, hex) == -1)
			return (-1);
	return (0);
}

int	ft_printf_adrs_print_nmb(t_format format, unsigned long p, int *print)
{
	int		padding;
	char	*hex;

	hex = "0123456789abcdef";
	padding = ft_printf_get_padding(format.nmb, *print);
	*print += padding;
	if (ft_printf_print_paddings(padding, ' ') == -1)
		return (-1);
	if (ft_putstr_fd_r("0x", 1, 2) == -1)
		return (-1);
	if (!(p == 0 && format.flags & 1 << 6 && format.precision == 0))
		if (ft_puthex(p, hex) == -1)
			return (-1);
	return (0);
}

int	ft_printf_adrs_print_non(t_format format, unsigned long p)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (ft_putstr_fd_r("0x", 1, 2) == -1)
		return (-1);
	if (!(p == 0 && format.flags & 1 << 6 && format.precision == 0))
		if (ft_puthex(p, hex) == -1)
			return (-1);
	return (0);
}

int	ft_printf_print_adrs_format(unsigned long p, t_format format)
{
	int	print;
	int	precision;
	int	tmp;

	precision = 0;
	print = ft_printf_get_print(format, p, &precision);
	if ((format.flags & 1 << 2
			&& (precision == 0 || format.hyphen_nmb > print - precision)))
		tmp = ft_printf_adrs_print_hyphen(format, p, &print, precision);
	else if (format.flags & 1 << 6)
		tmp = ft_printf_adrs_print_precision(format, p, &print, precision);
	else if (format.flags & 1)
		tmp = ft_printf_adrs_print_zero(format, p, &print);
	else if (format.nmb > print && format.nmb > print)
		tmp = ft_printf_adrs_print_nmb(format, p, &print);
	else
		tmp = ft_printf_adrs_print_non(format, p);
	if (tmp == -1)
		return (-1);
	return (print);
}

int	ft_printf_print_hex(t_format format, int i)
{
	char	*hex_lower;
	char	*hex_upper;
	char	*hex;

	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	hex = hex_upper;
	if (format.specifier == 'x')
		hex = hex_lower;
	if (ft_puthex((unsigned int)i, hex) == -1)
		return (-1);
	return (0);
}

int	ft_printf_print_s2(t_format format, int i)
{
	if (!(i == 0 && format.flags & 1 << 6 && format.precision == 0))
	{
		if (format.specifier == 'x' || format.specifier == 'X')
		{
			if (ft_printf_print_hex(format, i) == -1)
				return (-1);
		}
		else 
		{
			if (ft_putnbr_fd_r(i, format.specifier, 1) == -1)
				return (-1);
		}
	}
	return (0);
}

int	ft_printf_print_s3(t_format format, char *pres, int i)
{
	if (format.specifier == 'x' || format.specifier == 'X')
	{
		if (pres && i != 0 && ft_putstr_fd_r(pres, 1, ft_strlen(pres)) == -1)
			return (-1);
	}
	else
	{
		if (pres && ft_putchar_fd_r(*pres, 1) == -1)
			return (-1);
	}
	return (0);
}

int	ft_printf_print_s1(t_format format, char *pres, int i)
{
	if (ft_printf_print_s3(format, pres, i) == -1)
		return (-1);
	if (ft_printf_print_s2(format, i) == -1)
		return (-1);
	return (0);
}

int	ft_printf_get_pres(t_format format, int i, char **pres)
{
	int	print;

	print = 0;
	if (format.specifier == 'i' || format.specifier == 'd')
	{
		if (format.flags & 1 << 3 && i >= 0)
			*pres = "+";
		else if (format.flags & 1 << 4 && i >= 0)
			*pres = " ";
		else if (i < 0)
			*pres = "-";
		if (*pres)
			print++;
	}
	else if ((format.specifier == 'x' || format.specifier == 'X')
		&& i != 0 && format.flags & 1 << 5)
	{
		if (format.specifier == 'x')
			*pres = "0x";
		else
			*pres = "0X";
		print += 2;
	}
	return (print);
}

int	ft_printf_print_format_hyphen(t_format format, int i,
									int precision, int *print)
{
	int	padding;

	padding = ft_printf_get_padding(format.hyphen_nmb, *print);
	if (ft_printf_print_paddings(precision, '0') == -1)
		return (-1);
	if (ft_printf_print_s2(format, i) == -1)
		return (-1);
	if (ft_printf_print_paddings(padding, ' ') == -1)
		return (-1);
	*print += padding;
	return (0);
}

int	ft_printf_print_format_prcs(t_format format, int i,
								int precision, char *pres)
{
	if (ft_printf_print_s3(format, pres, i) == -1)
		return (-1);
	if (ft_printf_print_paddings(precision, '0') == -1)
		return (-1);
	if (ft_printf_print_s2(format, i) == -1)
		return (-1);
	return (0);
}

int	ft_printf_print_format_zero(t_format format, int *print, int i, char *pres)
{
	int	padding;

	padding = ft_printf_get_padding(format.zero_nmb, *print);
	*print += padding;
	if (ft_printf_print_s3(format, pres, i) == -1)
		return (-1);
	if (ft_printf_print_paddings(padding, '0') == -1)
		return (-1);
	if (ft_printf_print_s2(format, i) == -1)
		return (-1);
	return (0);
}

int	ft_printf_print_format_nmb(t_format format, int *print, int i, char *pres)
{
	int	padding;

	padding = ft_printf_get_padding(format.nmb, *print);
	*print += padding;
	if (ft_printf_print_paddings(padding, ' ') == -1)
		return (-1);
	if (ft_printf_print_s1(format, pres, i) == -1)
		return (-1);
	return (0);
}

int	ft_printf_get_print_pres(t_format format, int i,
								int *precision, char **pres)
{
	int	print;

	print = ft_printf_get_print(format, i, precision);
	return (print + ft_printf_get_pres(format, i, pres));
}

int	ft_printf_print_format_helper(t_format format, int *print,
									int i, char *pres)
{
	int	tmp;

	if (format.flags & 1)
		tmp = ft_printf_print_format_zero(format, print, i, pres);
	else if (format.nmb > *print && format.nmb > *print)
		tmp = ft_printf_print_format_nmb(format, print, i, pres);
	else
		tmp = ft_printf_print_s1(format, pres, i);
	return (tmp);
}

int	ft_printf_pirnt_format(int i, t_format format)
{
	int		print;
	char	*pres;
	int		precision;
	int		tmp;

	precision = 0;
	pres = NULL;
	print = ft_printf_get_print_pres(format, i, &precision, &pres);
	if ((format.flags & 1 << 2))
	{
		if (ft_printf_print_s3(format, pres, i) == -1)
			return (-1);
		tmp = ft_printf_print_format_hyphen(format, i, precision, &print);
	}
	else if (format.flags & 1 << 6)
	{
		if (ft_pirntf_padding_s1(format, &print) == -1)
			return (-1);
		tmp = ft_printf_print_format_prcs(format, i, precision, pres);
	}
	else
		tmp = ft_printf_print_format_helper(format, &print, i, pres);
	if (tmp == -1)
		return (-1);
	return (print);
}

int	ft_printf_int(va_list args, t_format format)
{
	int	i;

	i = va_arg(args, int);
	return (ft_printf_pirnt_format(i, format));
}

int	ft_printf_int_in_hex(va_list args, t_format format)
{
	int		i;

	i = va_arg(args, int);
	return (ft_printf_pirnt_format(i, format));
}
