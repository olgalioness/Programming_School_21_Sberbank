/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:02:38 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/02 17:23:54 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input.h"
#include "engine.h"

int		main(int argc, char **argv)
{
	if (check_input(argc))
		return (0);
	process(argv[1]);
	return (0);
}
