/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:38:09 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/12 14:52:35 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

#include "ft_list.h"

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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *t0;
	
	t0 = NULL;
	while (ac - 1 >= 0)
	{
		ft_list_push_back(&t0, av[ac - 1]);
		ac--;
	}
	return (t0);
}

// DEV

#include <stdio.h>  

void	print_list(t_list *obj)
{
	while (obj)
	{
		//printf("(%p)", obj);
		printf("[%s](%p) -> ", obj->data, obj->next);	
		obj  =  obj->next;
	}
   printf("NULL\n");	
}


int		main(int argc, char **argv)
{
	t_list* list = ft_list_push_params(argc, argv);
	print_list(list);	
}
