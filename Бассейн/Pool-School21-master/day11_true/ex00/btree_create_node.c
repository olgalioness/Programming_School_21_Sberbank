/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:48:21 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/17 13:04:34 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *buff;

	buff = (t_btree*)malloc(sizeof(t_btree));
	buff->left = NULL;
	buff->right = NULL;
	buff->item = item;
	return (buff);
}
