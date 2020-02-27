/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nannamae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 18:41:59 by nannamae          #+#    #+#             */
/*   Updated: 2019/06/23 23:11:54 by atama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_H
# define INC_H
# include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	char			c;
}				t_list;
typedef	t_list	*(*t_rushp)(int, int);
t_list			*create_el(char c);
void			el_push_back(t_list **list, char c);
int				list_compare(t_list *l1, t_list *l2);
void			stream_read(t_list **list, int *a, int *b);
void			ft_putnbr(int nb);
t_list			*rush00(int x, int y);
t_list			*rush01(int x, int y);
t_list			*rush02(int x, int y);
t_list			*rush03(int x, int y);
t_list			*rush04(int x, int y);

#endif
