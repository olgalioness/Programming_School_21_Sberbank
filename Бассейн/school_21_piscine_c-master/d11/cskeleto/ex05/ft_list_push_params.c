/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:52:42 by cskeleto          #+#    #+#             */
/*   Updated: 2018/09/05 17:59:29 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *i;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		i = ft_create_elem(data);
		(*i).next = (*begin_list);
		*begin_list = i;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*l;

	i = 1;
	l = 0;
	while (i < ac)
	{
		ft_list_push_front(&l, av[i]);
		i++;
	}
	return (l);
}
