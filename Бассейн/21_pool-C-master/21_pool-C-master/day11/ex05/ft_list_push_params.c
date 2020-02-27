/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 20:36:58 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/18 21:18:19 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*tmp;
	int		i;

	if (ac < 1)
		return (NULL);
	tmp = NULL;
	i = 0;
	while (i < ac)
	{
		list = ft_create_elem(*(av + i));
		list->next = tmp;
		tmp = list;
		i++;
	}
	return (list);
}
