/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 03:29:32 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/28 14:48:15 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>

typedef struct s_perso	t_perso;

struct	s_perso {
	char	*name;
	float	life;
	int		age;
	int		profession;
};

#endif
