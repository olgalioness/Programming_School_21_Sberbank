/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:46:16 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 19:16:29 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

#include <stdio.h> // DEV

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*cur;
	t_list 	*next;	
	t_list	*prev;

	cur = *begin_list;
	next = NULL;
	prev= NULL;
	while (cur)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*begin_list = prev;
}

// DEV

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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *iter;
	
	if (!(new = ft_create_elem(data)))
		return ;
	if (!*begin_list)
	{
		*begin_list = new;
		return ;
	}
	iter = *begin_list;
	while (iter->next)
		iter = iter->next;
	iter->next = new;	
}

void	print_list(t_list *obj)
{
	int loopDef = 0;
	while (obj)
	{
		if (loopDef++ > 10) 
			return ;
		printf("(%p)", obj);
		printf("[%s](%p) -> ", obj->data, obj->next);	
		obj  =  obj->next;
	}
   printf("NULL\n");	
}

void	test()
{
	t_list *t0;
	t0 = ft_create_elem("alpha");
	ft_list_push_back(&t0, "beta");
	ft_list_push_back(&t0, "gamma");
	ft_list_push_back(&t0, "delta");
	print_list(t0);
	
	ft_list_reverse(&t0);
	print_list(t0);
}

int		nmain()
{
	test();
	return (0);
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

int main(int argc, char** argv)
{
	if (argc < 1)
		return 1;
	t_list* list = crap_the_argv(argv);
	ft_list_reverse(&list);
	crap_a_list(list);
}

/*
==== check -t ====
%tests = (
	"$program" => "\n",
	"$program asdf" => "asdf,\n",
	"$program asdf qwer" => "qwer,asdf,\n",
	"$program asdf qwer zxcv" => "zxcv,qwer,asdf,\n",
	"$program ''" => ",\n",
	"$program 15 '' 25" => "25,,15,\n",
	"$program wat" => "wat,\n",
);
====
*/
