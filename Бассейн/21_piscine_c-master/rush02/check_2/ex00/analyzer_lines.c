/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyzer_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:29:52 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 22:51:15 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

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
