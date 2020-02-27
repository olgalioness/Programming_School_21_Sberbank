/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:31:53 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/20 18:44:11 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_H
# define ALL_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

void			print_error(void);

typedef	struct	s_map_info
{
	int			line_l;
	int			line_n;
	char		symb[3];
	char		*map_begin;
	char		*map_end;
}				t_map_info;

typedef enum	e_realloc_mod
{
	del,
	save
}				t_realloc_mod;

typedef	enum	e_valid
{
	error,
	ok
}				t_valid;

int				length_str(char *str);

void			copy_str(char *src, char *dest);

void			n_concat_str(char *str1, char *str2, int n);

void			reallocate_str(char **str, int size, t_realloc_mod mod);

char			*read_stream(int fd);

void			print_str(char *str, char *end);

t_valid			is_valid_definition_a(char *str, t_map_info *info);

t_valid			is_valid_definition_b(t_map_info *info);

int				is_valid_char(t_map_info *info, char c);

char			*valid_func_helper(t_map_info *info, int *li, int *lc, int *pl);

t_valid			is_valid_map(t_map_info *info);

t_valid			is_valid(char *str, t_map_info *info);

typedef struct	s_sq
{
	char		*pos;
	int			size;
}				t_sq;

t_sq			*create_sq(void);

void			update_sq(t_sq *sq, int new_size, char *new_pos);

void			write_sq(t_sq *sq, t_map_info *info);

void			build_dist(char *iter, t_map_info *info, int *dist);

void			analyze_dist
				(int *dist, char *iter, t_map_info *info, t_sq *bsq);

void			solve(t_map_info *info);

t_valid			process_map(int fd);

t_valid			process_file(char *file_name);

void			read_from_term(void);

void			read_from_file(int ac, char **av);

#endif
