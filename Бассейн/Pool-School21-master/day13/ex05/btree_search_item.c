/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 20:14:12 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/16 11:58:17 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!root)
		return (0);
	btree_search_item(root->left, data_ref, cmpf);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	btree_search_item(root->right, data_ref, cmpf);
}
