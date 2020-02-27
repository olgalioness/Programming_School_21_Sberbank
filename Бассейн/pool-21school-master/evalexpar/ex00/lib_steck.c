/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_steck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 13:54:21 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/18 22:59:54 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*ft_create_elem(char *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	(*tmp).data = data;
	(*tmp).next = NULL;
	return (tmp);
}

void	ft_list_push_front(t_list **begin_list, char *data)
{	
	t_list *ptr;
	
	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		ptr = ft_create_elem(data);
		ptr->next = *begin_list;
		*begin_list = ptr;
	}
}

char	*ft_pop(t_list **begin_list)
{
	char	*value;
	t_list	*out;

	value = 0;
	if (*begin_list == NULL)
		return (value);
	out = *begin_list;
	*begin_list = (*begin_list)->next;
	value = out->data;
	free (out);
	return (value);
}

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list != 0)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i - 1);
}

void	ft_list_push_back(t_list **begin_list, char *data)
{
	t_list *ptr;

	ptr = *begin_list;
	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		while (ptr->next != 0)
			ptr = ptr->next;
		ptr->next = ft_create_elem(data);
	}
}
