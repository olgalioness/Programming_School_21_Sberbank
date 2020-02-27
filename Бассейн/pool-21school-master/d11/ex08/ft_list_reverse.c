/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 22:26:00 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/14 23:33:17 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*buf;
	t_list	*ptr;

	ptr = *begin_list;
	while (*begin_list)
	{
		printf("1");
		buf = *begin_list;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = buf;
		*begin_list = (*begin_list)->next;
	}
}
