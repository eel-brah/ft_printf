/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-brah <eel-brah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:29:54 by eel-brah          #+#    #+#             */
/*   Updated: 2023/11/01 09:30:42 by eel-brah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\r' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		nb;

	sign = 1;
	nb = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + (*str++ - '0');
	return (nb * sign);
}
