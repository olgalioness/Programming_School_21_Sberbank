/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:55:18 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 15:26:47 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

#define D(a) btree_level_count(a)
#define MAXD(a,b) ((a > b) ? D(a) : D(b))

t_btree	*btree_create_node(void *item);

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (1 +	MAXD(root->left, root->right));
}
