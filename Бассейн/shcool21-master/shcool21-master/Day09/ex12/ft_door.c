/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:43:59 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/28 15:02:56 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void		open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
}

void		close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
}

t_ft_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	if (door->state == OPEN)
		return (TRUE);
	else
		return (FALSE);
}

t_ft_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	if (door->state == CLOSE)
		return (TRUE);
	else
		return (FALSE);
}
