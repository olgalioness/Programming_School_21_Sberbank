/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeromy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:50:11 by tjeromy           #+#    #+#             */
/*   Updated: 2019/02/17 22:48:24 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_tsum
{
	char		corner_0;
	char		corner_1;
	char		corner_2;
	char		corner_3;
	char		middle_0;
	char		middle_1;
}				t_tsum;

int				ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				length_str(char *str);
char			*allocate_str(int size);
void			copy_str(char *src, char *dest);
void			n_concat_str(char *str1, char *str2, int n);
void			print_error(void);
void			pre_print_solutions
	(int *matches, int count_match, int w, int h);
void			print_solution(int i, int w, int h, int c);
char			*clone_term(void);
void			clean_tsum(t_tsum *tsum);
int				get_height(char *str, int w);
int				get_width(char *str);
int				check_term_line(char symb, char *term, int begin_i, int end_i);
int				analyze_first_line(char *term, int w, t_tsum *tsum);
int				analyze_last_line(char *term, int w, int h, t_tsum *tsum);
int				analyze_middle_line(char *term, int w, int h, t_tsum *tsum);
void			fill_patterns_a(t_tsum *p);
void			fill_patterns_b(t_tsum *p);
void			fill_matches(int *m);
int				compare_tsum(t_tsum *original, t_tsum *pattern);
void			analyze_tsum(t_tsum *tsum, int w, int h);
int				analyze_term(char *term, int w, int h);
int				is_rush(void);

#endif
