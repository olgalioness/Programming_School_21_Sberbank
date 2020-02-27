#include "ft_btree.h"

#include <stdlib.h>
#include <stdio.h>

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));

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
	
	btree_insert_data(&node_F, "9", strcmp);
	btree_insert_data(&node_F, "7", strcmp);
	btree_insert_data(&node_F, "0", strcmp);
	btree_insert_data(&node_F, "3", strcmp);


	printf("Current tree : ");
	print_tree(node_F);
	printf("\n");

	if (argc == 1)
	{
		printf("No search object s\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
		printf("Res of search : %s\n", btree_search_item(node_F, argv[i], strcmp));	
	return (0);
}
