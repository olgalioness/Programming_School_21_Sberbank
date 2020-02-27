/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:58:41 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/18 17:09:15 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	tmp = *begin_list;
	while (tmp != NULL)
	{
		*begin_list = tmp->next;
		free(tmp);
		tmp = *begin_list;
	}
}
