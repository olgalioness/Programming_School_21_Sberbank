/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:31:41 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/14 17:23:19 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = NULL;
	while (i < ac)
	{
		ft_list_push_front(&tmp, av[i]);
		i++;
	}
	return (tmp);
}
