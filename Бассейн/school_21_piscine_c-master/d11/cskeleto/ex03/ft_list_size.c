/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:33:29 by cskeleto          #+#    #+#             */
/*   Updated: 2018/09/05 17:24:15 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*i;

	size = 0;
	i = begin_list;
	while (i)
	{
		++size;
		i = (*i).next;
	}
	return (size);
}
