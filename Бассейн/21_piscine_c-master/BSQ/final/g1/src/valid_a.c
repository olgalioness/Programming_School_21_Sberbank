/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:05:54 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/20 18:57:20 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

#define IS_DIGIT(x) (x >= '0' && x <= '9')

t_valid	is_valid_definition_a(char *str, t_map_info *info)
{
	int		i;
	int		j;

	i = 0;
	info->line_n = 0;
	while (IS_DIGIT(str[i]))
		info->line_n = info->line_n * 10 + (str[i++] - '0');
	if (info->line_n == 0)
		return (error);
	j = 0;
	while (j < 3 && str[i] && str[i] != '\n')
		info->symb[j++] = str[i++];
	if (j != 3 || str[i] != '\n')
		return (error);
	info->map_begin = str + i + 1;
	return (ok);
}

t_valid	is_valid_definition_b(t_map_info *info)
{
	if (info->symb[0] == info->symb[1] ||
		info->symb[0] == info->symb[2] ||
		info->symb[1] == info->symb[2])
		return (error);
	return (ok);
}

int		is_valid_char(t_map_info *info, char c)
{
	return (c == info->symb[0] ||
			c == info->symb[1] ||
			c == '\n');
}
