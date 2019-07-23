/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 18:51:24 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/07/21 18:52:09 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int		ft_atoi(char *str)
{
	int		c;
	int		sign;
	int		nbr;

	c = 0;
	sign = 1;
	nbr = 0;
	if (!str[c])
		return (0);
	while (str[c] == '\t' || str[c] == '\v' || str[c] == '\n' || \
			str[c] == '\r' || str[c] == '\f' || str[c] == ' ')
		c += 1;
	if (str[c] == '-' || str[c] == '+')
		if (str[c++] == '-')
			sign = -1;
	while (str[c] >= '0' && str[c] <= '9')
		nbr = (nbr * 10) + (str[c++] - '0');
	return (nbr * sign);
}
