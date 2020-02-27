/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:03:50 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 11:08:10 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*iter;

	if (!begin_list)
		return ;
	iter = *begin_list;
	while ((*begin_list))
	{
		iter = *begin_list;
		*begin_list = (*begin_list)->next;
		free(iter);
	}
	begin_list = NULL;
}
