/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:04:29 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/02 17:12:47 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "output.h"

int		check_input(int argc)
{
	if (argc < 2)
	{
		ft_putstr(2, "File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	return (0);
}
