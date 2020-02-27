/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   term_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:29:17 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 22:49:16 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

#define BUFF_SIZE 28000

char	*clone_term(void)
{
	char	buff[BUFF_SIZE + 1];
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
