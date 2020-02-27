/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:32:41 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/15 21:45:11 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = (t_btree *)malloc(sizeof(t_btree));
	if (tmp)
	{
		tmp->item = item;
		tmp->left = NULL;
		tmp->right = NULL;
	}
	return (tmp);
}
