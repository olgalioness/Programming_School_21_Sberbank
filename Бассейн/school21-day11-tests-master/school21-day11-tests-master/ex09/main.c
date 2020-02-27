/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/12 12:49:33 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list **start);
void	ft_list_foreach(t_list *begin_list, void (*f)(void*));

void	increment(void *data)
{
	char *str;

	str = (char*)data;
	str[0]++;
}

int		main(void)
{
	t_list	*elem_a;
	t_list	*elem_b;
	t_list	*elem_c;
	void	(*op)(void *);
	char	c_a[] = "aa";
	char	c_b[] = "bb";
	char	c_c[] = "cc";

	elem_a = ft_create_elem(c_a);
	elem_b = ft_create_elem(c_b);
	elem_c = ft_create_elem(c_c);
	elem_a->next = elem_b;
	elem_b->next = elem_c;
	print_list(&elem_a);
	op = &increment;
	ft_list_foreach(elem_a, op);
	print_list(&elem_a);
}
