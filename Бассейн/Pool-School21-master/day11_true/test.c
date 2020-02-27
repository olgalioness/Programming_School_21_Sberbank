#include <unistd.h>
#include <stdio.h>
#include "ex00/ft_btree.h"
#include "ex00/btree_create_node.c"
#include "ex01/btree_apply_prefix.c"
#include "ex02/btree_apply_infix.c"
#include "ex03/btree_apply_suffix.c"
#include "ex04/btree_insert_data.c"
#include "ex05/btree_search_item.c"
#include "ex06/btree_level_count.c"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(void *p)
{
    char *str;

    str = (char *)p;
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int     ft_cmp(void *a, void *b)
{
    char *x;
    char *y;

    x = a;
    y = b;
    return (*x - *y);
}

t_btree *create_test_tree()
{
    t_btree *test;

    test = btree_create_node("4");
    test->left = btree_create_node("2");
    test->left->left = btree_create_node("1");
    test->left->right = btree_create_node("3");
    test->right = btree_create_node("6");
    test->right->left = btree_create_node("5");
    test->right->right = btree_create_node("7");
    return (test);
}

int     main()
{
    t_btree *test;
    t_btree *test_empty;
    t_btree *res;
    char    *a;
    void    (*f)(void *);
    int     (*cmp)(void *, void *);

    f = &ft_putstr;
    test = create_test_tree();
    ft_putstr("Prefix:\n");
    ft_putstr("Expected: 4213657\n");
    ft_putstr("Actual:   ");
    btree_apply_prefix(test, f);
    ft_putchar('\n');
    ft_putstr("Infix:\n");
    ft_putstr("Expected: 1234567\n");
    ft_putstr("Actual:   ");
    btree_apply_infix(test, f);
    ft_putchar('\n');
    ft_putstr("Suffix:\n");
    ft_putstr("Expected: 1325764\n");
    ft_putstr("Actual:   ");
    btree_apply_suffix(test, f);
    ft_putchar('\n');
    printf("Level: %i\n", btree_level_count(test));
    cmp = &ft_cmp;
    a = "8";
    btree_insert_data(&test, a, cmp);
    btree_apply_infix(test, f);
    ft_putchar('\n');
    a = "A";
    res = btree_search_item(test, a, cmp);
    printf("%s\n", (char *)res);
    a = "3";
    res = btree_search_item(test, a, cmp);
    printf("Found element: %s\n", (char *)res);
    printf("Level: %i\n", btree_level_count(test));
    printf("\nTEST EMPTY TREE\n");
    test_empty = NULL;
    printf("Level: %i\n", btree_level_count(test_empty));
    res = btree_search_item(test_empty, a, cmp);
    printf("Found element: %s\n", (char *)res);
    btree_apply_prefix(test_empty, f);
    btree_apply_infix(test_empty, f);
    btree_apply_suffix(test_empty, f);
    a = "TEST";
    btree_insert_data(&test_empty, a, cmp);
    btree_apply_infix(test_empty, f);
    return (0);
}
