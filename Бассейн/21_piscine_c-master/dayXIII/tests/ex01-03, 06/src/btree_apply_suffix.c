/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:47:13 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 11:48:32 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;	
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}
