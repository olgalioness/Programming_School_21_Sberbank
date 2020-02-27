/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 05:16:44 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/08 05:34:20 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# define FALSE 0
# define TRUE 1

typedef int ft_bool;

# define CLOSED 0
# define OPEN 1

typedef int t_door_state;

# define EXIT_SUCCESS 0

typedef struct	s_door
{
	int state;
}				t_door;

#endif
