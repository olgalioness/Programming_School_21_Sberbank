/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 17:09:58 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/17 17:13:04 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strswap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char*, char*))
{
	int i;
	int j;

	i = 0;
	while (*(tab + i))
	{
		j = 0;
		while (*(tab + j))
		{
			if (*(tab + j + 1) && (*cmp)(*(tab + j), *(tab + j + 1)) > 0)
				ft_strswap(tab + j, tab + j + 1);
			j++;
		}
		i++;
	}
}
