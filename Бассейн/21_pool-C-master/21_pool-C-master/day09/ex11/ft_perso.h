/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 03:22:54 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/14 03:37:27 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# define SAVE_THE_WORLD "Police"
# include <string.h>

typedef struct s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
} t_perso;

#endif
