/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 13:32:04 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 11:06:43 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*iter;
	int		i;

	iter = begin_list;
	i = 0;
	while (iter)
	{
		i++;
		iter = iter->next;
	}
	return (i);
}
