/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:54:26 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 18:01:20 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*iter;

	iter = begin_list;
	while (iter)
	{
		if (!cmp(iter->data, data_ref))
			f(iter->data);
		iter = iter->next;
	}
}

// DEV

#include <stdlib.h>
#include <stdio.h>  

t_list	*ft_create_elem(void *data)
{
    t_list *new;
    
    if (!(new = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    
    new->data = data;
    new->next = NULL;
    
    return (new);
}

#define CE(data) ft_create_elem(data)
#define CL(list) crap_a_list(list)

// pronounced with an exclaimation point at the end
void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

// pronounced with an exclaimation point at the end
t_list* crap_the_argv(char** argv)
{
	t_list* res = 0;
	t_list* tail = 0;
	argv++;
	while (*argv != 0)
	{
		if (tail == 0)
			res = tail = CE(*argv++);
		else
		{
			tail->next = CE(*argv++);
			tail = tail->next;
		}
	}
	return res;
}

void print_str(char* str)
{
	printf("%s\n", str);
}

int starts_with(char* str, char* ref)
{
	return str[0] - ref[0];
}

int main(int argc, char** argv)
{
	if (argc < 1)
		return 1;
	t_list* list = crap_the_argv(argv);
	ft_list_foreach_if(list, (void(*)(void*))print_str, "a", (int(*)())starts_with);
}
/*
==== check -t ====
%tests = (
	"$program" => "",
	"$program asdf" => "asdf\n",
	"$program asdf qwer" => "asdf\n",
	"$program asdf qwer zxcv" => "asdf\n",
	"$program ''" => "",
	"$program uiop aaaaa qwer alpha zxcv asdf hjkl" => "aaaaa\nalpha\nasdf\n",
	"$program wat atw taw awt twa" => "atw\nawt\n",
);
====
*/
