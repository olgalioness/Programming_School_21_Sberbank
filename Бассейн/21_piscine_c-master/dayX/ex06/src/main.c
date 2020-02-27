/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:17:26 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 17:14:01 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	printf("MAIN : Passed argc limit\n");
	perform_op(atoi(argv[1]), atoi(argv[3]), find_op(argv[2]));
	return (0);
}
