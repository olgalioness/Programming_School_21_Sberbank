/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:55:18 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/15 22:01:23 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

#define MAX(a,b) ((a > b) ? (a) : (b))

int		btree_level_count(t_btree *root)
{
	int left_depth;
	int right_depth;

	if (!root)
		return (0);
	left_depth = btree_level_count(root->left);
	right_depth = btree_level_count(root->right);
	return (1 + MAX(left_depth, right_depth));
}
