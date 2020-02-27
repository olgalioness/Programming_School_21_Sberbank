/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:36:08 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/12 21:40:51 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int n;

	n = numtab(tab);
	while (n > 0)
	{
		i = 0;
		while (i < n - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
				swap(&tab[i], &tab[i + 1]);
			i++;
		}
		n--;
	}
}
