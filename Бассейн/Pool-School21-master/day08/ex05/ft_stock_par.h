/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 11:53:00 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/10 11:57:54 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCH_PAR_H
#define FT_STOCH_PAR_H
#include <stdlib.h>

typedef struct	s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
}				t_stock_par;

#endif
