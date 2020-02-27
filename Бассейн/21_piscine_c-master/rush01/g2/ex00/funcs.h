/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:07:52 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/10 18:21:19 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H

# include <unistd.h>
# include <stdlib.h>

void	put_char(char c);

void	put_str(char *str);

int		**mk_empty_grid(void);

void	destroy_grid(int **old_grid);

int		**cp_grid(int **orig_grid);

int		**fill_grid(char **argv);

int		is_box(int row, int col, int **grid, int value);

int		is_row(int row, int col, int **grid, int value);

int		is_col(int row, int col, int **grid, int value);

int		is_valid_grid(int **grid);

int		next_empty(int **grid, int *row, int *col);

void	display_grid(int **grid);

int		solve(int **parent_grid, int row, int col, int new_value);

#endif
