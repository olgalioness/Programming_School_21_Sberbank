/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:06:35 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/14 16:21:41 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}
