/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 11:13:41 by rfork             #+#    #+#             */
/*   Updated: 2019/08/16 11:35:04 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *root;

	root = malloc(sizeof(t_btree));
	if (root)
	{
		root->item = item;
		root->left = NULL;
		root->right = NULL;
	}
	return (root);
}
