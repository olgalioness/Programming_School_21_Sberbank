/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 10:13:51 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/15 21:45:22 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree	*new;

	if (!(new = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->item = item;
	return (new);
}
