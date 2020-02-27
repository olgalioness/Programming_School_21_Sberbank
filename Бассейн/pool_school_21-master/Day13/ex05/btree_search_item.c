/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 11:52:12 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/16 12:08:21 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!root)
		return (0);
	btree_serach_item(root->left, data_ref, cmpf);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	btree_serach_item(root->right, data_ref, cmpf);
}
