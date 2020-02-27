/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 20:22:35 by rfork             #+#    #+#             */
/*   Updated: 2019/08/14 20:27:27 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_clear(t_list **begin_list)
{
	t_list *point;

	point = *begin_list;
	while (point->next != NULL)
	{
		free(point);
		point = point->next;
	}
	*begin_list = NULL;
}
