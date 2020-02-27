/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:16:56 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/13 13:18:53 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		put_str("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		put_str("Too many arguments.\n");
		return (0);
	}
	if (!read_file(argv[1]))
		return (0);
	return (1);
}
