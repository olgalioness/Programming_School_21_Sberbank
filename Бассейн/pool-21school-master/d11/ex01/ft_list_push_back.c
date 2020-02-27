/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:24:27 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/14 23:35:53 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ptr;

	ptr = *begin_list;
	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		while (ptr->next != 0)
			ptr = ptr->next;
		ptr->next = ft_create_elem(data);
	}
}
