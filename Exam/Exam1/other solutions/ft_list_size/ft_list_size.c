/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:18:59 by exam              #+#    #+#             */
/*   Updated: 2019/08/23 11:25:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list 		*buff;
	int			size;

	buff = begin_list;
	size = 0;
	while (buff)
	{
		buff = buff->next;
		size++;
	}
	return (size);
}
