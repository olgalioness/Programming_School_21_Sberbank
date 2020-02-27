/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:16:45 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 17:50:05 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *iter;

	iter = begin_list;
	while (iter)
	{
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

void	upper_case(char *str)
{
	int i = 0;
	str[0] = 'a';
	return ;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		  str[i] = 0;
		i++;	
	}
}

void	test()
{
	t_list *t0;
	char *str1 = "alpha";
	char *str2 = "beta";
	char *str3 = "gamma";
	char *str4 = "delta";
	t0 = ft_create_elem(str1);
	(t0->data)[0] = 'A';
	ft_list_push_back(&t0, str2);
	ft_list_push_back(&t0, str3);
	ft_list_push_back(&t0, str4);
	print_list(t0);
	
	//ft_list_foreach(t0,(void(*)(void*))upper_case);
	//print_list(t0);
}

int		nmain()
{
	test();
	return (0);
}

void ft_list_foreach(t_list *begin_list, void (*f)(void *));

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
	str[0] = 'a';
	printf("%s\n", str);
}

int main(int argc, char** argv)
{
	test ();

	if (argc < 1)
		return 1;
	t_list* list = crap_the_argv(argv);
	//print_list(list);
	ft_list_foreach(list, (void(*)(void*))print_str);
}

/*
==== check -t ====
%tests = (
	"$program" => "",
	"$program asdf" => "asdf\n",
	"$program asdf qwer" => "asdf\nqwer\n",
	"$program asdf qwer zxcv" => "asdf\nqwer\nzxcv\n",
	"$program ''" => "\n",
	"$program 15 '' 25" => "15\n\n25\n",
	"$program wat" => "wat\n",
);

*/
