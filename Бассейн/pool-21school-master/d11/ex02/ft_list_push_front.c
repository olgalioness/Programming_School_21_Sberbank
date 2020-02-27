/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:14:40 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/14 23:36:20 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *ptr;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		ptr = ft_create_elem(data);
		ptr->next = *begin_list;
		*begin_list = ptr;
	}
}
