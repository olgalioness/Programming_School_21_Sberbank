/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:16:49 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/15 12:20:48 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*temp;

	temp = (t_btree*)malloc(sizeof(t_btree));
	if (temp)
	{
		temp->item = item;
		temp->right = NULL;
		temp->left = NULL;
	}
	return (temp);
}
