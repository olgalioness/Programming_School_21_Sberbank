/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 19:21:09 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 19:37:24 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h> // DEV

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*iter;
	int		i;

	iter = begin_list;
	i = 0;
	while (iter)
	{
		i++;
		iter = iter->next;
	}
	return (i);
}

void	print_list(t_list *obj); // DEV

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*prev;
	t_list	*cur;
	t_list	*next;
	int i;
	int size;

	size = ft_list_size(*begin_list);
	while (size > 1)
	{
		//printf("Size  = %d\n", size);

		i = 1;
		prev = NULL;
		cur = *begin_list;	
		while (cur && i < size)
		{
			//printf("i = %d, prev = %s, cur = %s\n", 
			//	i, ((prev) ? (prev->data) : (0)),  cur->data);

			next = cur->next;
			if (cmp(cur->data, next->data) > 0)
			{
				//printf("Change %s and %s\n", cur->data, next->data);
				if (prev)
					prev->next = next;
				cur->next = next->next;
				next->next = cur;
				prev = next;
				if (*begin_list == cur)
					*begin_list = next;
			}
			else
			{
				prev = cur;	 
				cur = next;	
			}
			i++;
			//print_list(*begin_list);
		}
		size--;
	}
}

// DEV

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

#include <stdio.h> 

void	print_list(t_list *obj)
{
	while (obj)
	{
		printf("[%s](%p) -> ", obj->data, obj->next);	
		obj  =  obj->next;
	}
	printf("NULL\n"); 
}

#include <string.h>

void	test()
{
	t_list *t0;
	t0 = ft_create_elem("5");
	ft_list_push_back(&t0, "3");
	ft_list_push_back(&t0, "4");
	ft_list_push_back(&t0, "2");
	ft_list_push_back(&t0, "1");
	
	print_list(t0);
	ft_list_sort(&t0, &strcmp);
	print_list(t0);
}

int		main()
{
	test();
}
