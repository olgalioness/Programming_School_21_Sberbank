/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:58:30 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/16 11:57:38 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (!*root)
		*root = btree_create_node(item);
	if ((*cmpf)(*root->item, item) > 0)
		btree_insert_data(root->left, item, cmpf);
	if ((*cmpf)(*root->item, item) < 0)
		btree_insert_data(*root->right, item, cmpf);
}
