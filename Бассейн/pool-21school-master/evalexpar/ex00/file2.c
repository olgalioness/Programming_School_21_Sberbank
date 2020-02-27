/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 20:19:09 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/18 22:56:08 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_oper_steck(t_list **begin_steck, t_list **oper_steck, char *str)
{
	char	val1;
	char    val1;

	while(*str != NULL)
	{
		if (*str >= '(' && *str <= '/')
		{
			if (*str == ')')
				while (steck_oper->data != '(')
				{
					ft_list_push_front(&steck, steck_oper->data);
					steck_oper = steck_oper->next;
				}
			else if (ft_list_size(steck) == 0)
				ft_list_push_front(&steck_oper, *str);
			else if (t_minus(ft_priority(*str),
						ft_priority(steck_oper->data) > 0))
				ft_list_push_front(&steck_oper, *str);
			else
			{
				val1 = ft_pop(&(*begin_steck));
				val2 = ft_pop(&(*begin_steck));
			}
		}
		else
			ft_str_to_steck(&(*steck), str)
		str++;
	}
}

void	ft_str_to_steck(t_list **begin_steck, char *str)
{
	char *buf;

	buf = ft_strdup(str);
	ft_list_push_front(&(*begin_steck), buf);
}
