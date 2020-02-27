/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 20:21:45 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/17 13:10:15 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int i;
	int j;

	if (root == 0)
		return (0);
	i = 0;
	j = 0;
	i = btree_level_count(root->left) + 1;
	j = btree_level_count(root->right) + 1;
	if (i < j)
		return (j);
	else
		return (i);
}
