#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

static void	ft_putnbr(unsigned int nb, int fd)
{
	if (nb < 10)
	{
		ft_putchar_fd (nb + 48, fd);
		return ;
	}
	ft_putnbr (nb / 10, fd);
	ft_putchar_fd (nb % 10 + 48, fd);
}
void	ft_putstr_fd(char *s, int fd)
{
	if (s && *s)
		write(fd, s, strlen(s));
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd); 
	}
	ft_putnbr(nb, fd);
}

void mini_print(char *s, ...)
{
	int i = 0;

	va_list args;
	va_start(args, s);

	i = 0;
	char c;
	char *str;
	while (*(s+i))
	{
		if (*(s+i) == '%')
		{
			if (*(s+i+1) == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				i++;
			}
			else if (*(s+i+1) == 'i' || *(s+i+1) == 'd')
			{
				int j = va_arg(args, int);
				ft_putnbr_fd(j, 1);
				i++;
			}
			else if (*(s+i+1) == 's')
			{
				str = va_arg(args, char *);
				ft_putstr_fd(str, 1);
				i++;
			}
		}
		else
			write(1, s+i, 1);
		i++;
	}
	va_end(args);
}

int main()
{
	mini_print("%s to %c-%d\n", "Welcome", 'w', 69);
}