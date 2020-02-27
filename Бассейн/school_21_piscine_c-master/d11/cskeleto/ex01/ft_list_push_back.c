/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 15:20:47 by cskeleto          #+#    #+#             */
/*   Updated: 2018/09/05 16:45:45 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *i;

	if (begin_list)
	{
		if (*begin_list == NULL)
			*begin_list = ft_create_elem(data);
		else
		{
			i = (*begin_list);
			while ((*i).next != NULL)
				i = (*i).next;
			(*i).next = ft_create_elem(data);
		}
	}
}
