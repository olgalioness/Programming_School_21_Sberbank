/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:19:01 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/14 16:59:18 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	tmp = begin_list;
	if (begin_list == 0)
		return (0);
	while (tmp->next != 0)
		tmp = tmp->next;
	return (tmp);
}
