/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:10:50 by cskeleto          #+#    #+#             */
/*   Updated: 2018/09/05 16:45:55 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *i;

	if (begin_list)
	{
		if (*begin_list == NULL)
			*begin_list = ft_create_elem(data);
		else
		{
			i = ft_create_elem(data);
			(*i).next = (*begin_list);
			*begin_list = i;
		}
	}
}
