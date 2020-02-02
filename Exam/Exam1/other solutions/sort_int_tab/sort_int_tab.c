/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 20:23:57 by exam              #+#    #+#             */
/*   Updated: 2019/08/09 20:33:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int n;
	int bul;

	n = size;
	while (n)
	{
		i = 0;
		while (i < n - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				bul = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = bul;
			}
			i++;
		}
		n--;
	}
}
