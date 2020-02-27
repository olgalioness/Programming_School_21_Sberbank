/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 13:09:48 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/13 13:45:03 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	if (begin_list)
	{
		while (begin_list != NULL)
		{
			begin_list = begin_list->next;
			i++;
		}
	}
	else
		return (0);
	return (i);
}
