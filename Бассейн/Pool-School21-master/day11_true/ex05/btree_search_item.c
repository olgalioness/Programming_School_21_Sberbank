/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 20:14:12 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/17 13:18:06 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!root)
		return (0);

	if (cmpf(data_ref, root->item) < 0)
		return (btree_search_item(root->left, data_ref, cmpf));
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	if (cmpf(data_ref, root->item) > 0)
		return (btree_search_item(root->right, data_ref, cmpf));
	return (0);
}
