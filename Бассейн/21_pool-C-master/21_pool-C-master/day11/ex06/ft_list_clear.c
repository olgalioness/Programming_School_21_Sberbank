/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 21:19:42 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/18 21:24:47 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	if (*begin_list && begin_list)
	{
		while (*begin_list)
		{
			tmp = *begin_list;
			*begin_list = (*begin_list)->next;
			free(tmp);
		}
		*begin_list = NULL;
	}
	return ;
}
