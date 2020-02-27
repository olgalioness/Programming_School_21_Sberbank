/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:41:42 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 14:01:20 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (!root)
		return (NULL);
	else if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	else if (cmpf(data_ref, root->item) < 0)
		return (btree_search_item(root->left, data_ref, cmpf));
	else
		return (btree_search_item(root->right, data_ref, cmpf));
}
