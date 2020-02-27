/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:49:24 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/15 21:42:26 by bshanae          ###   ########.fr       */
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

void	apply_util
	(t_btree *root, int cur_level, int *arr, void (*applyf)(void *, int, int))
{
	int flag;

	if (!root)
		return ;
	if (arr[cur_level] == 0)
	{
		flag = 1;
		arr[cur_level] = 1;
	}
	else
		flag = 0;
	applyf(root->item, cur_level, flag);
	apply_util(root->left, cur_level + 1, arr, applyf);
	apply_util(root->right, cur_level + 1, arr, applyf);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *, int, int))
{
	int		*flags_arr;
	int		depth;
	int		i;

	depth = btree_level_count(root);
	if (!(flags_arr = (int *)malloc(sizeof(int) * depth)))
		return ;
	i = 0;
	while (i < depth)
		flags_arr[i++] = 0;
	apply_util(root, 0, flags_arr, applyf);
	free(flags_arr);
}
