/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:18:04 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/15 21:35:43 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_apply_by_level
	(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem));

#include <stdio.h>
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree	*new;

	if (!(new = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->item = item;
	return (new);
}

void	btree_insert_data
	(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!(*root))
		*root = btree_create_node(item);
	else if (cmpf(item, (*root)->item) < 0)
		btree_insert_data(&((*root)->left), item, cmpf);
	else
		btree_insert_data(&((*root)->right), item, cmpf);
}

int		cmp(int a, int b)
{
	return (a - b);
}

void	print(int x, int level, int flag)
{
	if (flag)
		printf("%d is the most left node on the level %d\n", x, level);
}

void	observe_tree(t_btree *root)
{
	if (!root)
		return ;
	printf("[%d] has child [%d] and child [%d]\n", 
			root->item,
			(root->left) ? (root->left->item) : (-123456789),
			(root->right) ? (root->right->item) : (-123456789));
	observe_tree(root->left);
	observe_tree(root->right);
}

int		main()
{
	t_btree *t0 = btree_create_node(11);

	btree_insert_data(&t0, 7, &cmp);
	btree_insert_data(&t0, 2, &cmp);
	btree_insert_data(&t0, 3, &cmp);
	btree_insert_data(&t0, 14, &cmp);
	btree_insert_data(&t0, 0, &cmp);
	btree_insert_data(&t0, 81, &cmp);
	btree_insert_data(&t0, 12, &cmp);
	btree_insert_data(&t0, -6, &cmp);

	//observe_tree(t0);
	btree_apply_by_level(t0, print);
}
