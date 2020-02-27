/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 11:32:28 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/09 12:50:14 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unma(int *tab, int length)
{
	int		i;
	int		j;

	i = 0;
	while (i < length)
	{
		j = i;
		while (tab[i] == tab[j])
			j++;
		if (j % 2 == 1)
			return (tab[i]);
		else
			i++;
	}
	return (0);
}

int	ft_unmatch(int *tab, int length)
{
	int		buf;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				buf = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = buf;
			}
			j++;
		}
		i++;
	}
	return (ft_unma(tab, length));
}
