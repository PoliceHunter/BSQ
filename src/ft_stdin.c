/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 18:47:11 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/07/22 18:26:55 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_stdin(int file)
{
	char buffer[BUFFER_SIZE + 1];
	while (read(file, buffer, BUFFER_SIZE))
		ft_putstr(buffer);
}
