/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 22:19:36 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/14 23:39:48 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (nbr - 1)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	return (begin_list);
}
