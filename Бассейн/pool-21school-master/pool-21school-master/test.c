/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:58:23 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/16 23:05:41 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <stdio.h>
#include "ex00/btree_create_node.c"
#include "ex03/btree_apply_sufix.c"
#include "ex04/btree_insert_data.c"

void    ft_print(void *item);
void	inorder(t_btree *root);

int main()
{
	int i;
	char c;
	t_btree	*kek;
//	t_btree *lel;

	btree_insert_data(&kek, "1", &strcmp);
	btree_insert_data(&kek, "2", &strcmp);
	btree_insert_data(&kek, "3", &strcmp);
	btree_insert_data(&kek, "4", &strcmp);
	btree_insert_data(&kek, "2", &strcmp);
	btree_insert_data(&kek, "1", &strcmp);
	btree_apply_sufix(kek, &ft_print);
//	inorder(kek);
	return (0);
}

void	ft_print(void *item)
{
	printf("%s",item);
}

void	inorder(t_btree *root)
{
	if(!root)
		return ;
	inorder(root->left);
	if(root->item)
		printf("%s ", root->item);
	inorder(root->right);
}

