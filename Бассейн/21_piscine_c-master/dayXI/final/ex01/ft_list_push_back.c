/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 13:09:40 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 13:12:53 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *iter;

	new = ft_create_elem(data);
	if (!new)
		return ;
	if (!*begin_list)
	{
		*begin_list = new;
		return ;
	}
	iter = *begin_list;
	while (iter->next)
		iter = iter->next;
	iter->next = new;
}
