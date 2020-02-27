/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:56:27 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 13:33:06 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

#include <stdio.h>

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!(*root))
		*root = btree_create_node(item);
	else if (cmpf(item, (*root)->item) < 0)
		btree_insert_data(&((*root)->left), item, cmpf);
	else 
		btree_insert_data(&((*root)->right), item, cmpf); 
}
