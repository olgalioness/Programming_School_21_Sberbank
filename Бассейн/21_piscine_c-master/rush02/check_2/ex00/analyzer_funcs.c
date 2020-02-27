/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyzer_funcs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:30:16 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 22:30:18 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

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
