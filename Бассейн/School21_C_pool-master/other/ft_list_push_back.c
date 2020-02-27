/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 19:57:26 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/13 10:12:01 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*begin;

	begin = *begin_list;
	if (begin)
	{
		while (begin->next != NULL)
			begin = begin->next;
		begin->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
