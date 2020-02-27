/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:59:49 by rfork             #+#    #+#             */
/*   Updated: 2019/08/14 16:30:06 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *point;

	point = *begin_list;
	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		point = *begin_list;
		while (point->next != NULL)
			point = point->next;
		point->next = ft_create_elem(data);
	}
}
