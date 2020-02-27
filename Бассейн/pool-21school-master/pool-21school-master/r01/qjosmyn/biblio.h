/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biblio.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 11:04:39 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/11 22:58:42 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIBLIO_H
# define BIBLIO_H

#include <stdlib.h>
# define N 9
# define TRUE 1
# define FALSE 0

void	ft_check(char ***str_3d, int j);
void	line_check(char ***str_3d, int i, int j, int k);
void	col_check(char ***str_3d, int i, int j, int k);
void	square_check(char ***str_3d, int i, int j, int k);
void	ft_check_all(char ***str_3d);

int		ft_replace(char ***str_3d, int i, int j);
int     ft_search(char ***str_3d, int i, int j);

void	ft_all_value(char ***str_3d, char **argv, int j, int k);
char	***ft_memory_allocation();
int		check_col_pvtr(char ***str, int i, int j);
int		check_line_pvtr(char ***str, int i, int j);
int		check_square_pvtr(char ***str_3d, int i, int j, int k);
void	ft_backtracking(char ***str_3d, int i, int j, int k);
int		check_sudoku(char ***str_3d);

#endif
