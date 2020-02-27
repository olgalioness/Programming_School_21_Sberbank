/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 21:31:15 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/11 22:06:10 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_H
# define FT_PUT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_ceil
{
	int value;
	int *variant;
	int bool;
}				t_ceil;
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_put_error();
void			ft_put_tab(t_ceil **tab);
void			ft_put_variant(t_ceil **tab);
int				find_unassigned_location(t_ceil **tab, int *col, int *line);
int				backtracking(t_ceil **tab);
void			find_loner(t_ceil **tab);

#endif
