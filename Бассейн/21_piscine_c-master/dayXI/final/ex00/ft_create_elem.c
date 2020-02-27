/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:21:20 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 13:12:39 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}
