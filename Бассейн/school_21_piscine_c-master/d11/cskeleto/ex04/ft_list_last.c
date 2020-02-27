/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:23:53 by cskeleto          #+#    #+#             */
/*   Updated: 2018/09/05 17:50:44 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list == 0)
		return (begin_list);
	while ((*begin_list).next)
	{
		begin_list = (*begin_list).next;
	}
	return (begin_list);
}
