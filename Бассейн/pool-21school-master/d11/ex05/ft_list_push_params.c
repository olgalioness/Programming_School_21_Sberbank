/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:37:28 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/14 23:38:23 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
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

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*buf;
	int		i;

	buf = 0;
	if (ac == 1)
		return (buf);
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(&buf, av[i]);
		i++;
	}
	return (buf);
}
