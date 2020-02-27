/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 04:35:28 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/08 05:25:34 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &c, 1);
	}
}

void	open_door(t_door *door)
{
	ft_pustr("Door opening...\n");
	door->state = OPEN;
}

void	close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
}

ft_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state == OPEN);
}

ft_bool	is_door_closed(t_door *door)
{
	ft_putstr("Door is closed ?\n");
	return (door->state == CLOSED);
}
