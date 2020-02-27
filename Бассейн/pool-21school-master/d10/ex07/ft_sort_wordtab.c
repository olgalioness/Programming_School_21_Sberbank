/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:40:21 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/13 22:10:22 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s2 - *s1);
	}
	return (0);
}

int		ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[j], tab[i]) > 0)
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
