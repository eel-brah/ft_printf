/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-brah <eel-brah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:45:07 by eel-brah          #+#    #+#             */
/*   Updated: 2023/11/06 11:03:58 by eel-brah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_strlen(const char *s)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
		ptr++;
	return (ptr - s);
}

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

static void	ft_putnbr(unsigned int nb, int fd, int *printed)
{
	if (nb < 10)
	{
		ft_putchar_fd (nb + 48, fd);
		(*printed)++;
		return ;
	}
	ft_putnbr (nb / 10, fd, printed);
	ft_putchar_fd (nb % 10 + 48, fd);
	(*printed)++;
}
void	ft_putstr_fd(char *str, int fd)
{
	if (!str)
		write(fd, "(null)", 6);
	else if (*str)
		write(fd, str, ft_strlen(str));
}

void	ft_putnbr_fd(int n, char u, int fd, int *printed)
{
	unsigned int	nb;

	nb = n;
	if (!u && n < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
		(*printed)++;
	}
	ft_putnbr(nb, fd, printed);
}

void ft_puthex(unsigned long p, int fd, char *hex, int *printed)
{
	if (p < 16)
	{
		ft_putchar_fd(hex[p], fd);
		(*printed)++;
		return ;
	}
	ft_puthex(p / 16, fd, hex, printed);
	ft_putchar_fd(hex[p % 16], fd);
	(*printed)++;
}

int	ft_printf(const char *str, ...)
{
	int				index;
	va_list			args;
	int				fd;
	char			c;
	char			*s;
	long int		p;
	int				i;
	unsigned int	u;
	char			*hex;
	char			*HEX;
	int				printed;
	

	va_start(args, str);
	fd = 1;
	index = 0;
	printed = 0;
	hex = "0123456789abcdef";
	HEX = "0123456789ABCDEF";
	while (*(str + index))
	{
		if (*(str + index) == '%')
		{
			// cspdiuxX%
			index++;
			if (*(str + index) == 'c')
			{
				c = va_arg(args, int);
				ft_putchar_fd(c, fd);
				printed++;
			}
			else if (*(str + index) == 's')
			{
				s = va_arg(args, char *);
				ft_putstr_fd(s, fd);
				if (s)
					printed += ft_strlen(s);
				else 
					printed += 6;
			}
			else if (*(str + index) == 'p')
			{
				p = (unsigned long)va_arg(args, void *);
				ft_putstr_fd("0x", fd);
				printed += 2;
				ft_puthex(p, fd, hex, &printed);
			}
			else if (*(str + index) == 'd' || *(str + index) == 'i')
			{
				i = va_arg(args, int);
				ft_putnbr_fd(i, 0, fd, &printed);
			}
			else if (*(str + index) == 'u')
			{
				u = va_arg(args, unsigned int);
				ft_putnbr_fd(u, 1, fd, &printed);
			}
			else if (*(str + index) == 'x' || *(str + index) == 'X')
			{
				i = va_arg(args, int);
				if (*(str + index) == 'x')
					ft_puthex((unsigned int)i, fd, hex, &printed);
				else
					ft_puthex((unsigned int)i, fd, HEX, &printed);
			}
			else if (*(str + index) == '%')
			{
				ft_putchar_fd('%', fd);
				printed++;
			}
			else if (*(str + index))// handl this case
			{
				ft_putchar_fd(*(str + index), 1);
				printed++;
			}
		}
		else
		{
			ft_putchar_fd(*(str + index), 1);
			printed++;
		}
		if (*(str + index))
			index++;
	}
	va_end(args);
	return printed;
}
int main()
{
	//char c = '0';
	//ft_printf("%s to %c-%d\nGo to %p\n----Loading %i%%\nTest: %u\nBegin at: %X\n", "Welcome", 'w', 69, &c, 98, 4196699669, 28045);
	
	printf("%i\n", ft_printf("\001\002\007\v\010\f\r\n"));
	//for (int i = 0; i <= 100; i++)
	printf("%i\n", printf("%", 'k'));
	
}