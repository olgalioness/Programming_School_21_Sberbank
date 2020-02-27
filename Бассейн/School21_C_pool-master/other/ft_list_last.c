/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:02:02 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/13 14:53:42 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*temp;

	temp = begin_list;
	if (begin_list)
	{
		while (temp->next != NULL)
			temp = temp->next;
	}
	else
		return (begin_list);
	return (temp);
}
