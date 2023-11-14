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

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
//char	*ft_strchr(const char *s, int c);
void	basic_string_conversion_test();
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
// int	ft_printf_formating(va_list args, int printed, t_format format);
// int	ft_printf_formating_2(va_list args, int printed, t_format format);
// int	ft_printf_iter(va_list args, const char *str);
// int ft_puthex(unsigned long p, int fd, char *hex, int *printed);
// int	ft_putnbr_2(unsigned int nb, int fd);
// int	ft_putnbr_fd_r(int n, char u, int fd);
// int	ft_putstr_fd_r(char *str, int fd, int len);
// int	ft_printf_print_chars_formats(va_list args, t_format format, int w, char no);
// int	ft_printf_putstr(va_list args, t_format format);
// int	ft_printf_adrs(va_list args, t_format format);
// int	ft_printf_int(va_list args, char c, t_format format);
// int	ft_printf_int_in_hex(va_list args, t_format format);
// int	ft_putchar_fd_r(char c, int fd);
// int	ft_printf_print_adrs_format(unsigned long p, t_format format, char *hex);
// int	ft_printf_hex_minimum_width(unsigned int i, t_format format);
int	ft_printf_formating(va_list args, t_format format);
char	*ft_get_format(const char *str);
int	ft_to_skip(char *formats);
int	ft_to_skip_digit(char *formats);
void	ft_get_zero_flag_nmb_helper(char *tmp, t_format *format);
void	ft_get_zero_flag_nmb(char *formats, t_format *format);
void	ft_format_hyphen(t_format *format, char *tmp);
void	ft_format_initialization(t_format *format, char *formats);
void	ft_format_iter(char c, t_format *format, char *formats);
t_format	ft_format_genarator(char *formats);
void	ft_print_formats_stuct(t_format format);
int	ft_printf_format(const char **str, t_format *format, va_list args);
int	ft_printf_iter(va_list args, const char *str);



int	ft_putchar_fd_r(char c, int fd);
int	ft_puthex(unsigned long p, char *hex);
int	ft_putnbr_2(unsigned int nb, int fd);
int	ft_putnbr_fd_r(int n, char c, int fd);
int	ft_putstr_fd_r(char *str, int fd, int len);
int	ft_printf_print_chars_formats(va_list args, t_format format);
int	ft_printf_putstr(va_list args, t_format format);
int	ft_printf_adrs(va_list args, t_format format);
int	ft_int_len(int n, char c);
int ft_hex_len(unsigned long p);
int	ft_printf_print_adrs_format(unsigned long p, t_format format);
int	ft_printf_pirnt_format(int i, t_format format);
int	ft_printf_int(va_list args, t_format format);
int	ft_printf_int_in_hex(va_list args, t_format format);

#endif