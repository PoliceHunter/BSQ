/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 19:14:57 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/07/23 14:25:57 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	char			*data;
	struct s_list	*next;
}					t_list;

#endif
