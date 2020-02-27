/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 15:41:15 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/09 16:14:35 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdio.h>
void	*ft_param_to_tab(int ac, char **av)
{
	char	**s;
	int		i;

	i = 0;
	s = ft_split_whitespaces(av);
	while (s[i])
	{
		printf("%s", s[i]);
		i++;
	}
}
int main(int argc, char **argv)
{
	char	**s;
	int		i;

	i = 0;
	s = ft_split_whitespaces(argv);
	while (s[i])
	{
		printf("%s", s[i]);
		i++;	
	}

}
