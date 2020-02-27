/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:24:08 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/13 17:11:43 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_H
# define FT_PUT_H
# include <unistd.h>

typedef struct	s_opp
{
	char	*op;
	int		(*operation)(int, int);
}				t_opp;
void			ft_putstr(char *c);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
int				ft_atoi(char *str);
int				ft_add(int val1, int val2);
int				ft_sub(int val1, int val2);
int				ft_mul(int val1, int val2);
int				ft_div(int val1, int val2);
int				ft_mod(int val1, int val2);
int				ft_usage();
void			do_op_put(char **argv);

#endif
