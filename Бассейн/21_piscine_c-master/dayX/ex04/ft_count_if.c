/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 11:49:57 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 11:58:56 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int(*f)(char*))
{
	printf("FCI : %s\n", *tab);

	if (!(*tab))
		return (0);
	return (f(*tab) + ft_count_if(tab + 1, f));
}

int		first_a(char *str)
{
	return (str[0] == 'a');
}

int		main()
{
	char *x[5];

	x[0] = "alpha";
	x[1] = "beta";
	x[2] = "keyboard";
	x[3] = "any";
	x[4] = NULL;

	printf("%d", ft_count_if(x, &first_a));
}
