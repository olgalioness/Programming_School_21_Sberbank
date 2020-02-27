/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 13:27:31 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 13:30:19 by bshanae          ###   ########.fr       */
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	new = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = new;
		return ;
	}
	if (!new)
		return ;
	if (*begin_list)
		new->next = (*begin_list);
	*begin_list = new;
}
