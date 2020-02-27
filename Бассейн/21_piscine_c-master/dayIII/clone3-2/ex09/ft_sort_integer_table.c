/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:43:46 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/01 09:30:58 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_sort_table(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int add;

	add = *a;
	*a = *b;
	*b = add;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;

	i = 0;
	while (i != size)
	{
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		i = 0;
		size--;
	}
}
