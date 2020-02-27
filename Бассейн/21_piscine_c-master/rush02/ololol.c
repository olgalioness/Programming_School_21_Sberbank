/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ololol.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 21:56:53 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 22:23:18 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#include "ft_head.h"

// STR UTILS

int		length_str(char *str)
{
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*allocate_str(int size)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * size);
	if (!new_str)
		exit(1);
	return (new_str);
}

void	copy_str(char *src, char *dest)
{
	int		i;
	int		l;

	i = 0;
	if (!src)
		return ;
	l = length_str(src);
	while (i <= l)
	{
		dest[i] = src[i];
		i++;
	}
}

void	n_concat_str(char *str1, char *str2, int n)
{
	int i_1;
	int i_2;

	i_1 = length_str(str1);
	i_2 = 0;
	while (str2[i_2] && i_2 < n)
		str1[i_1++] = str2[i_2++];
	str1[i_1] = 0;
}

// PRINT UTILS

void	print_error(void)
{
	ft_putstr("This isn't rush\n");
}

void	pre_print_solutions(int *matches, int count_match, int w, int h)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (matches[i])
			print_solution(i, w, h, count_match);
		if (matches[i] && count_match > 1)
		{
			ft_putstr(" || ");
			count_match--;
		}
		i++;
	}
	ft_putstr("\n");
}


void	print_solution(int i, int w, int h, int c)
{
	if (c > 0)
		ft_putstr("[colle-0");
	else
		ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(w);
	ft_putstr("] [");
	ft_putnbr(h);
	ft_putstr("]");
}

// TERM UTILS

#define BUFF_SIZE 28000

char	*clone_term(void)
{	
	char	*buff;
	char	*clone;
	char	*str;
	int		size;

	str = malloc(sizeof(char));
	while ((size = read(0, buff, BUFF_SIZE)))
	{
		buff[size] = 0;
		clone = allocate_str(length_str(str) + 1);
		copy_str(str, clone);
		free(str);
		str = 0;
		str = allocate_str(length_str(clone) + size + 1);
		copy_str(clone, str);
		n_concat_str(str, buff, size + 1);
		free(clone);
		clone = 0;
	}
	return (str);
}

// ANALYZER : STRUCT

typedef struct	s_tsum
{
	char		corner_0;
	char		corner_1;
	char		corner_2;
	char		corner_3;
	char		middle_0;
	char		middle_1;
}				t_tsum;

void	clean_tsum(t_tsum *tsum)
{
	tsum->corner_0 = 0;
	tsum->corner_1 = 0;
	tsum->corner_2 = 0;
	tsum->corner_3 = 0;
	tsum->middle_0 = 0;
	tsum->middle_1 = 0;
}

// ANALYZER DIMENSIONS

int		get_height(char *str, int w)
{
	int	i;
	int j;
	int h;

	i = 0;
	j = 0;
	h = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (j != w)
				return (-1);
			else
				j = 0;
			h++;
		}
		else
			j++;
		i++;
	}
	return (h);
}

int		get_width(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

// ANALYZER : LINES

int		check_term_line(char symb, char *term, int begin_i, int end_i)
{
	while (begin_i < end_i)
		if (term[begin_i++] != symb)
			return (-1);
	return (0);
}

int		analyze_first_line(char *term, int w, t_tsum *tsum)
{
	tsum->corner_0 = term[0];
	tsum->corner_1 = (w < 2) ? (0) : (term[w - 1]);
	tsum->middle_0 = (w < 3) ? (0) : (term[1]);
	if (tsum->middle_0)
		if (check_term_line(tsum->middle_0, term, 1, w - 1) == -1)
			return (-1);
	return (0);
}

int		analyze_last_line(char *term, int w, int h, t_tsum *tsum)
{
	if (h < 2)
		return (0);
	tsum->corner_2 = term[(w + 1) * (h - 1)];
	tsum->corner_3 = (w < 2) ? (0) : (term[(w + 1) * h - 2]);
	if (tsum->middle_0)
		if (check_term_line(tsum->middle_0, term,
			(w + 1) * (h - 1) + 1, (w + 1) * h - 3))
			return (-1);
	return (0);
}

int		analyze_middle_line(char *term, int w, int h, t_tsum *tsum)
{
	int i;

	if (h < 3)
		return (1);
	i = w + 1;
	tsum->middle_1 = term[i];
	while (i < ((w + 1) * (h - 1)))
	{
		if (term[i] != tsum->middle_1 || term[i + w - 1] != tsum->middle_1)
			return (-1);
		if (check_term_line(' ', term, i + 1, i + w - 2) == -1)
			return (-1);
		i += w + 1;
	}
	return (0);
}

// ANALYZER PATTERN

void	fill_patterns_a(t_tsum *p)
{
	p[0].corner_0 = 'o';
	p[0].corner_1 = 'o';
	p[0].corner_2 = 'o';
	p[0].corner_3 = 'o';
	p[0].middle_0 = '-';
	p[0].middle_1 = '|';
	p[1].corner_0 = '/';
	p[1].corner_1 = '\\';
	p[1].corner_2 = '\\';
	p[1].corner_3 = '/';
	p[1].middle_0 = '*';
	p[1].middle_1 = '*';
}

void	fill_patterns_b(t_tsum *p)
{
	p[2].corner_0 = 'A';
	p[2].corner_1 = 'A';
	p[2].corner_2 = 'C';
	p[2].corner_3 = 'C';
	p[2].middle_0 = 'B';
	p[2].middle_1 = 'B';
	p[3].corner_0 = 'A';
	p[3].corner_1 = 'C';
	p[3].corner_2 = 'A';
	p[3].corner_3 = 'C';
	p[3].middle_0 = 'B';
	p[3].middle_1 = 'B';
	p[4].corner_0 = 'A';
	p[4].corner_1 = 'C';
	p[4].corner_2 = 'C';
	p[4].corner_3 = 'A';
	p[4].middle_0 = 'B';
	p[4].middle_1 = 'B';
}

void	fill_matches(int *m)
{
	int i;

	i = 0;
	while (i < 5)
		m[i++] = 1;
}

int		compare_tsum(t_tsum *original, t_tsum *pattern)
{
	if (original->corner_0 != pattern->corner_0 && original->corner_0 != 0)
		return (0);
	if (original->corner_1 != pattern->corner_1 && original->corner_1 != 0)
		return (0);
	if (original->corner_2 != pattern->corner_2 && original->corner_2 != 0)
		return (0);
	if (original->corner_3 != pattern->corner_3 && original->corner_3 != 0)
		return (0);
	if (original->middle_0 != pattern->middle_0 && original->middle_0 != 0)
		return (0);
	if (original->middle_1 != pattern->middle_1 && original->middle_1 != 0)
		return (0);
	return (1);
}

// ANALYZER FUNCS

void	analyze_tsum(t_tsum *tsum, int w, int h)
{
	t_tsum	patterns[5];
	int		matches[5];
	int		i;
	int		count_match;

	fill_patterns_a(patterns);
	fill_patterns_b(patterns);
	fill_matches(matches);
	i = 0;
	count_match = 0;
	while (i < 5)
	{
		if ((matches[i] = compare_tsum(tsum, &patterns[i])))
			count_match++;
		i++;
	}
	if (count_match == 0)
		print_error();
	else
		pre_print_solutions(matches, count_match, w, h);
}

int		analyze_term(char *term, int w, int h)
{
	t_tsum		tsum;

	clean_tsum(&tsum);
	if ((analyze_first_line(term, w, &tsum) == -1) ||
		(analyze_last_line(term, w, h, &tsum) == -1) ||
		(analyze_middle_line(term, w, h, &tsum) == -1))
		return (-1);
	analyze_tsum(&tsum, w, h);
	return (0);
}

int		is_rush(void)
{
	char	*term;
	int		w;
	int		h;

	if (!(term = clone_term()))
		return (-1);
	w = get_width(term);
	h = get_height(term, w);
	if (w == -1 || h == -1)
		return (-1);
	if (analyze_term(term, w, h) == -1)
		return (-1);
	return (0);
}

// MAIN

int		main(void)
{
	if (is_rush() == -1)
		print_error();
	return (0);
}
