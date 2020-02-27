/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:19:42 by rfork             #+#    #+#             */
/*   Updated: 2019/08/14 17:34:57 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int s;

	s = 0;
	if (begin_list == NULL)
		return (s);
	else
	{
		while (begin_list)
		{
			s++;
			begin_list = begin_list->next;
		}
	}
	return (s);
}
