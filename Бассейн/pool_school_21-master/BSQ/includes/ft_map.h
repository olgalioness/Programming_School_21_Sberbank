/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:39:09 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/19 18:27:12 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

typedef struct 		s_map
{
	unsigned int	size;
	char			*empty;
	char			*obstacle;
	char			*full;
	int				**map;
}					t_map;
void				bsq(t_map *mp);
void				ft_printtab(t_map *mp);
void				ft_putchar(char c);

#endif
