/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 09:57:53 by cskeleto          #+#    #+#             */
/*   Updated: 2018/09/05 15:27:42 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *l;

	l = (t_list*)malloc(sizeof(t_list));
	(*l).data = data;
	(*l).next = NULL;
	return (l);
}
