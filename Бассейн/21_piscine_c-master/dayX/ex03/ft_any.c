/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 11:37:33 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 12:50:01 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*))
{
	if (!(*tab))
		return (0);
	return (f(*tab) || ft_any(tab + 1, f));
}

#include <stdio.h>

int		first_a(char *str)
{
	return (str[0] == 'a');
}

void		my_test()
{
	char *x[2];

	x[0] = "alpha";
	x[1] = "beta";

	printf("%d", ft_any(x, &first_a));
}

int starts_with_z(char* str)
{
	return str[0] == 'z';
}

int main(int argc, char** argv)
{
	printf("%d", ft_any(argv + 1, starts_with_z));
	if (argc < 2)
		return 1;
}
