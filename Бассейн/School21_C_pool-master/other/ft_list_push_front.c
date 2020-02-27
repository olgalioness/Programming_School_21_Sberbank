/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:07:32 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/13 12:54:44 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*begin;
	t_list		*temp;

	begin = *begin_list;
	temp = ft_create_elem(data);
	if (begin)
	{
		temp->next = begin;
		*begin_list = temp;
	}
	else
		*begin_list = temp;
}
