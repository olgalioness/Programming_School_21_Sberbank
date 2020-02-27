/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:03:51 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/19 00:33:22 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define N 5
# define NULL 0
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			*data;
}					t_list;
typedef	int			(*t_ptr)(int, int);
typedef struct		s_oper
{
	struct s_oper	*next;
	int				*priority;
	void			*oper;
}					t_oper;
typedef	int			(*t_ptr)(int, int);

t_list				*ft_create_elem(char *data);
t_list				*ft_from_oper_to_steck_1(t_list *steck_oper, t_list *steck);
t_list				*ft_from_oper_to_steck_2(t_list **steck_oper, t_list *steck, char *buf);
char				*ft_strcat(char *str1, char *str2);
char				*ft_kurwa(t_list *pol_note);
char				*ft_pop(t_list **begin_list);
void				ft_list_push_front(t_list **begin_list, char *data);
void				ft_list_push_back(t_list **begin_list, char *data);
void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_choise_oper(t_ptr f[N]);
void				ft_puts(char *str);
void				ft_list_reverse(t_list **begin_list);
char				*ft_strdup(char *str);
char				*ft_cut_last(char *str);
int					ft_list_size(t_list *begin_list);
int					eval_expr(char *str);
int					ft_plus(int a, int b);
int					ft_minus(int a, int b);
int					ft_mult(int a, int b);
int					ft_div(int a, int b);
int					ft_mod(int a, int b);
int					ft_atoi(char *str);
int					ft_strlen(char *str);
int					ft_priority(char c);

#endif
