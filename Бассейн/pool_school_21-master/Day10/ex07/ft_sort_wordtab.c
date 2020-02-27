/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 20:28:49 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/12 21:19:37 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] == s2[j])
	{
		if (s2[j] == '\0')
			return (0);
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

void	swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		numtab(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

void	ft_sort_wordtab(char **tab)
{
	int i;
	int n;

	n = numtab(tab);
	while (n > 0)
	{
		i = 0;
		while (i < n - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				swap(&tab[i], &tab[i + 1]);
			i++;
		}
		n--;
	}
}
