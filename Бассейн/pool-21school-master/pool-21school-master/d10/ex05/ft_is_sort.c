/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:10:18 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/13 22:07:50 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tuda(int *tab, int len, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i != (len - 1))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_obratno(int *tab, int len, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i != (len - 1))
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (ft_tuda(tab, length, f) || ft_obratno(tab, length, *f));
}
