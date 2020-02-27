/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 18:12:54 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/18 20:33:01 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		c;

	c = 0;
	if (begin_list)
	{
		tmp = begin_list;
		while (tmp)
		{
			tmp = tmp->next;
			c++;
		}
	}
	return (c);
}
