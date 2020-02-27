/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 04:22:56 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/08 05:06:32 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_door.h"

int main() 
{
	t_door door;
	open_door(&door);
	if (is_door_close(&door))
		open_door(&door);
	if (is_door_open(&door))
		close_door(&door);
	if (door.state == OPEN)
		close_door(&door);
	return (EXIT_SUCCESS);
}
