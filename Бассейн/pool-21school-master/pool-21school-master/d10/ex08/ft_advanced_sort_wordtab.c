/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:45:23 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/13 22:11:07 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*buf;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if ((*cmp)(tab[j], tab[i]) > 0)
			{
				buf = tab[i];
				tab[i] = tab[j];
				tab[j] = buf;
			}
			j++;
		}
		i++;
	}
	return (0);
}
