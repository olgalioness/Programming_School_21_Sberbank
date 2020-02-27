/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:51:45 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/14 16:22:02 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	tmp = ft_create_elem(data);
	if (*begin_list)
		tmp->next = *begin_list;
	*begin_list = tmp;
}
