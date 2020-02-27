/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:41:28 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/14 23:39:26 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*ptr;

	if (*begin_list == 0)
		return ;
	ptr = *begin_list;
	while ((*begin_list)->next)
	{
		ptr = *begin_list;
		*begin_list = (*begin_list)->next;
		free(ptr);
	}
	ptr = NULL;
}
