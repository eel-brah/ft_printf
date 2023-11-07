
#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

//# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_printf_formating(const char *str, int fd, va_list args, int printed);
int	ft_printf_formating_2(const char *str, int fd, va_list args, int printed);
int	ft_printf_iter(va_list args, const char *str, int fd);
size_t	ft_strlen(const char *s);
int ft_puthex(unsigned long p, int fd, char *hex, int *printed);
int	ft_putnbr(unsigned int nb, int fd, int *printed);
int	ft_putnbr_fd(int n, char u, int fd, int *printed);
int	ft_putstr_fd(char *str, int fd);
int	ft_printf_putchar(va_list args, int fd, int *printed);
int	ft_printf_putstr(va_list args, int fd, int *printed);
int	ft_printf_adrs(va_list args, int fd, int *printed);
int	ft_printf_int(va_list args, int fd, int *printed, char c);
int	ft_printf_int_in_hex(va_list args, int fd, int *printed, char c);

#endif