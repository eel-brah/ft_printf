/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-brah <eel-brah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:32:31 by eel-brah          #+#    #+#             */
/*   Updated: 2023/11/06 21:28:21 by eel-brah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/unc/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
char	*ft_strchr(const char *s, int c);

typedef struct s_format
{
	char	flags; // 0-+ #
	int		nmb;
	int		hyphen_nmb;
	int		zero_nmb;
	int		width; // the minimum number of bytes to print
	int		precision; // .
	char	specifier; // cspdiuxX%
}	t_format;

int	ft_printf(const char *str, ...);
int	ft_printf_formating(va_list args, int printed, t_format format);
int	ft_printf_formating_2(va_list args, int printed, t_format format);
int	ft_printf_iter(va_list args, const char *str);
int ft_puthex(unsigned long p, int fd, char *hex, int *printed);
int	ft_putnbr_2(unsigned int nb, int fd);
int	ft_putnbr_fd_2(int n, char u, int fd);
int	ft_putstr_fd_2(char *str, int fd, int len);
int	ft_printf_putchar(va_list args, int *printed, t_format format, int w, char no);
int	ft_printf_putstr(va_list args, int *printed, t_format format);
int	ft_printf_adrs(va_list args, int *printed, t_format format);
int	ft_printf_int(va_list args, int *printed, char c, t_format format);
int	ft_printf_int_in_hex(va_list args, int *printed, t_format format);
int	ft_putchar_fd_2(char c, int fd);
int	ft_printf_adrs_minimum_width(unsigned long p, t_format format, char *hex);
int	ft_printf_hex_minimum_width(unsigned int i, t_format format);

#endif