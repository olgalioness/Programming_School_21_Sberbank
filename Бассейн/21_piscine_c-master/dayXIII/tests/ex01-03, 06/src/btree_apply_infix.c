/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:50:32 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 11:52:01 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;	
	btree_apply_infix(root->left, applyf);
	applyf(root->item);
	btree_apply_infix(root->right, applyf);
}