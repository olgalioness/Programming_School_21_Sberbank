/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_sufix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 23:12:24 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/16 23:12:26 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_sufix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_sufix(root->left, applyf);
	btree_apply_sufix(root->right, applyf);
	(*applyf)(root->item);
}
