/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 18:41:20 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/07/23 14:37:30 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>


void			ft_putchar(char c);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
void			ft_stdin(int file);
void			ft_putstr(char *str);
int     		find_biggest_square(char *input);
unsigned int	get_square_size(char *str, int size_line, char separator);
int				find(char *str, char symbol);
int				find_in_line(char *str, char symbol);
int				find_and_check(char *str, char symbol, char space);

#endif
