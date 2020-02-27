/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:58:29 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/14 23:38:09 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while ((*begin_list).next != 0 && begin_list != 0)
		begin_list = begin_list->next;
	return (begin_list);
}
