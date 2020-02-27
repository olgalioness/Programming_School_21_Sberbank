#include "ft_btree.h"

#include <stdlib.h>
#include <stdio.h>

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

t_btree	*btree_create_node(void *item)
{
	t_btree	*new;

	if (!(new = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->item = item;
	return (new);
}

void	print_item(void *item)
{
	printf("%s ", item);
}

void	print_tree(t_btree *node)
{
	if (node->left)
		print_tree(node->left);
	print_item(node->item);
	if (node->right)
		print_tree(node->right);
}

#include <string.h>

int		main(int argc, char **argv)
{
	t_btree *node_F = btree_create_node("5");
	/*
	t_btree *node_B = btree_create_node("B");
	t_btree *node_G = btree_create_node("G");
	t_btree *node_A = btree_create_node("A");
	t_btree *node_D = btree_create_node("D");
	t_btree *node_I = btree_create_node("I");
	t_btree *node_C = btree_create_node("C");
	t_btree *node_E = btree_create_node("E");
	t_btree *node_H = btree_create_node("H");

	node_F->left = node_B;
	node_F->right = node_G;

	node_B->left = node_A;
	node_B->right = node_D;

	node_D->left = node_C;
	node_D->right = node_E;

	node_G->right = node_I;

	node_I->left = node_H;
	*/
	printf("Current tree : ");
	print_tree(node_F);
	printf("\n");
	
	if (argc == 1)
	{
		printf("No new elem-s\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
		btree_insert_data(&node_F, argv[i], &strcmp);
	printf("Tree with insertions : ");
	print_tree(node_F);
	printf("\n");
	return (0);
}
