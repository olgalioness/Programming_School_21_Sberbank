/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:10:12 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/16 12:12:36 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int i;
	int j;

	if (!root)
		return (0);
	i = 0;
	j = 0;
	i = btree_level_count(root->left);
	j = btree_level_count(root->right);
	if (i > j)
		return (i);
	else
		return (j);
}
