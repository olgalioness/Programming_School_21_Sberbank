/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 10:47:43 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/16 11:40:28 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*ptr;

	ptr = (t_btree*)malloc(sizeof(t_btree));
	ptr->item = item;
	ptr->left = NULL;
	ptr->right = NULL;
	return (ptr);
}
