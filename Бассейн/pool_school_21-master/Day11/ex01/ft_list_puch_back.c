/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_puch_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:35:25 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/14 15:46:25 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	tmp = *begin_list;
	if (tmp == NULL)
	{
		tmp = ft_create_elem(data);
		*begin_list = tmp;
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ft_create_elem(data);
}
