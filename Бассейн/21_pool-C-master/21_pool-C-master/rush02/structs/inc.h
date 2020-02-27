/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nannamae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 18:41:59 by nannamae          #+#    #+#             */
/*   Updated: 2019/06/23 20:11:01 by nannamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_H
# define INC_H

typedef struct	s_list
{
	struct s_list	*next;
	char			c;
}				t_list;

t_list  *create_el(char c);
void    el_push_back(t_list **list, char c);
int     list_compare(t_list *l1, t_list *l2);
void    stream_read(t_list *list, int *a, int *b);
void    print_list(t_list *list);

#endif
