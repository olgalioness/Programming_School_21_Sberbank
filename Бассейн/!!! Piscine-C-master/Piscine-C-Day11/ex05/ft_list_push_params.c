/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 18:16:45 by rfork             #+#    #+#             */
/*   Updated: 2019/08/14 20:15:43 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		i;

	a = NULL;
	b = NULL;
	i = 0;
	if (ac == 0)
		return (a);
	else
	{
		while (i < ac)
		{
			a = ft_create_elem(av[i]);
			a->next = b;
			b = a;
			i++;
		}
	}
	return (b);
}
