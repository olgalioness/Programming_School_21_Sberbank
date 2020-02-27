/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 20:28:26 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/18 22:12:59 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	if (!begin_list)
		return (NULL);
	tmp = begin_list;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
