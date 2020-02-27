/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:39:07 by rfork             #+#    #+#             */
/*   Updated: 2019/08/14 18:08:37 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *p;

	p = begin_list;
	if (begin_list == NULL)
		return (NULL);
	else
	{
		while (p->next != NULL)
			p = p->next;
		return (p);
	}
}
