/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nannamae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 18:43:24 by nannamae          #+#    #+#             */
/*   Updated: 2019/06/23 23:15:05 by atama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"
#include <stdlib.h>
#include <unistd.h>

t_list	*create_el(char c)
{
	t_list *tmp;

	if (!(tmp = malloc(sizeof(t_list))))
		return (NULL);
	tmp->c = c;
	tmp->next = NULL;
	return (tmp);
}

void	el_push_back(t_list **list, char c)
{
	t_list *tmp;

	if (*list && list)
	{
		tmp = *list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = create_el(c);
	}
	else
		*list = create_el(c);
}

int		list_compare(t_list *l1, t_list *l2)
{
	t_list *tmp1;
	t_list *tmp2;

	tmp1 = l1;
	tmp2 = l2;
	while (tmp1 && tmp2)
	{
		if (tmp1->c != tmp2->c)
			return (0);
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	return (1);
}

void	stream_read(t_list **list, int *a, int *b)
{
	char	c;
	int		f_w;

	f_w = 0;
	while (read(STDIN_FILENO, &c, 1))
	{
		if (f_w == 0 && c == '\n')
			f_w = 1;
		(f_w == 0) ? *a = *a + 1 : 0;
		(c == '\n') ? *b = *b + 1 : 0;
		el_push_back(list, c);
	}
}
