/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:05:54 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/20 18:45:09 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

void	print_error(void)
{
	write(2, "map error\n", 10);
}

#define BUFF_INIT 512
#define BUFF_MULTI 32

char	*read_stream(int fd)
{
	char	*buff;
	char	*final;
	int		buff_m;
	int		buff_s;

	buff = (char *)malloc(sizeof(int) * BUFF_INIT + 1);
	final = NULL;
	buff_m = 1;
	while ((buff_s = read(fd, buff, BUFF_INIT * buff_m)))
	{
		buff[buff_s] = '\0';
		buff_m *= (buff_m < 8000000) ? (BUFF_MULTI) : (1);
		reallocate_str(&final, length_str(final) + buff_s + 1, save);
		n_concat_str(final, buff, buff_s);
		reallocate_str(&buff, BUFF_INIT * buff_m + 1, del);
	}
	return (final);
}

#define BS 8000000

void	print_str(char *str, char *end)
{
	int		buff_s;

	while (*str)
	{
		buff_s = (end - str > BS) ? (BS) : (end - str);
		write(1, &(*str), buff_s);
		str += buff_s;
	}
}
