/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:05:54 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/20 18:57:43 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

#define IS_DIGIT(x) (x >= '0' && x <= '9')

char	*valid_func_helper(t_map_info *info, int *li, int *lc, int *pl)
{
	*li = 0;
	*lc = 0;
	*pl = 0;
	return (info->map_begin);
}

t_valid	is_valid_map(t_map_info *info)
{
	char	*str;
	int		line_i;
	int		line_c;
	int		prev_line;

	str = valid_func_helper(info, &line_i, &line_c, &prev_line);
	while (*str)
	{
		if (!is_valid_char(info, *str))
			return (error);
		if (*str == '\n')
		{
			if (line_c && line_i != prev_line)
				return (error);
			prev_line = line_i;
			line_i = 0;
			line_c++;
		}
		else
			line_i++;
		str++;
	}
	info->line_l = prev_line;
	info->map_end = str;
	return (line_c == info->line_n) ? (ok) : (error);
}

t_valid	is_valid(char *str, t_map_info *info)
{
	if (is_valid_definition_a(str, info) == error)
		return (error);
	if (is_valid_definition_b(info) == error)
		return (error);
	if (is_valid_map(info) == error)
		return (error);
	return (ok);
}
