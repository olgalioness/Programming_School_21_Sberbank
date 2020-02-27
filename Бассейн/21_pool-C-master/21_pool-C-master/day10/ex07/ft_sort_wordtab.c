/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 16:03:10 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/17 17:05:46 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

void	ft_strswap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_wordtab(char **tab)
{
	int i;
	int j;

	i = 0;
	while (*(tab + i))
	{
		j = 0;
		while (*(tab + j))
		{
			if (*(tab + j + 1) && ft_strcmp(*(tab + j), *(tab + j + 1)) > 0)
				ft_strswap(tab + j, tab + j + 1);
			j++;
		}
		i++;
	}
}
