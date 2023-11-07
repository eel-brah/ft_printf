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

#include "libftprintf.h"

int	ft_printf_formating_2(const char *str, int fd, va_list args, int printed, t_flag *list)
{
	if (*str == 'u')
	{
		if (ft_printf_int(args, fd, &printed, 1, list) == -1)
			return (-1);
	}
	else if (*str == 'x' || *str == 'X')
	{
		if (ft_printf_int_in_hex(args, fd, &printed, *str) == -1)
			return (-1);
	}
	else if (*str == '%')
	{
		if (ft_putchar_fd_2('%', fd) == -1)
			return (-1);
		printed++;
	}
	else if (*str)
	{
		if (ft_putchar_fd_2(*str, 1) == -1)
			return (-1);
		printed++;
	}
	return (printed);
}

int	ft_printf_formating(const char *str, int fd, va_list args, int printed, t_flag *list)
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
		if (ft_printf_int(args, fd, &printed, 0, list) == -1)
			return (-1);
	}
	else
		printed = ft_printf_formating_2(str, fd, args, printed, list);
	return (printed);
}

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	if (*ptr == (unsigned char)c)
		return (ptr);
	return (NULL);
}

char	*ft_get_flags(const char *str)
{
	char	*ptr;
	char	*flags;
	int 	i;

	i = 0;
	flags = "-0.# +123456789";
	ptr = flags;
	while (*(str + i) && ptr)
		ptr = ft_strchr(flags, *(str + i++));
	if (!ptr && i > 1)
		return (ft_substr(str, 0, --i));
	else 
		return (NULL);
}

t_flag	*ft_flag_new(char f, int nmb)
{
	t_flag	*new;

	new = malloc(sizeof(t_flag));
	if (!new)
		return (NULL);
	new->nmb = nmb;
	new->flag = f;
	new->next = NULL;
	return (new);
}

void	ft_flag_add_back(t_flag **lst, t_flag *new)
{
	t_flag	*last;

	if (!new || !lst)
		return ;
	last = *lst;
	if (!last)
	{
		*lst = new;
		return ;
	}
	while (last->next)
		last = last->next;
	last->next = new;
}


int	ft_printf_iter(va_list args, const char *str, int fd)
{
	int	printed;
	//char	*format;
	char	*ptr;
	int		i;
	t_flag	*list = NULL;
	t_flag	*new;

	//format = "cspdiuxX%";
	printed = 0;
	ptr = NULL;
	i = 0;
	char *flags = "-.# +";
	char *flag;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			flag = ft_get_flags(str);
			if (flag)
			{
				if (*flag == '0')
				{
					list = ft_flag_new(*flag , ft_atoi(flag+1));
				}
				while (*(flags + i))
				{
					ptr = ft_strrchr(flag, *(flags + i++));
					if (ptr)
					{
						new = ft_flag_new(*ptr , ft_atoi(ptr+1));
						ft_flag_add_back(&list, new);
					}
				}
				if (list)
				{
					str += ft_strlen(flag); 
					printed = ft_printf_formating(str, fd, args, printed, list);
					if (printed == -1)
						return (-1);
				}
			}
			// else 
			// 	printf("nnn\n");
		}
		else
		{
			if (ft_putchar_fd_2(*str, 1) == -1)
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
