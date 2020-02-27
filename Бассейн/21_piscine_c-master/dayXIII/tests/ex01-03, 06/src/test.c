#include "ft_btree.h"

#include <stdlib.h>
#include <stdio.h>

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void	btree_apply_infix(t_btree *root, void (*applyf)(void *));
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));
int		btree_level_count(t_btree *root);

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

void	print_item(void *item)
{
	printf("%s ", item);
}

int		main()
{
	t_btree *node_F = btree_create_node("F");
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

	printf("prefix : ");
	btree_apply_prefix(node_F, &print_item);

	printf("\ninfix : ");
	btree_apply_infix(node_F, &print_item);

	printf("\nsuffix : ");
	btree_apply_suffix(node_F, &print_item);

	printf("max depth = %d\n", btree_level_count(node_F));
}
