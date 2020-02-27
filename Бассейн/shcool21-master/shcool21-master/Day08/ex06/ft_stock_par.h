/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 05:03:30 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/28 16:12:18 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

int					ft_putchar(char c);
typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

#endif
