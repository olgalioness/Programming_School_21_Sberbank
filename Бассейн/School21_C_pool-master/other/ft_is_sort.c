/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:59:54 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/12 18:00:50 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;
	int index;

	index = 0;
	i = 0;
	j = 0;
	while (index < length)
	{
		if (f(tab[index], tab[index + 1]) > 0)
			i++;
		if (f(tab[index], tab[index + 1]) < 0)
			j++;
		if (f(tab[index], tab[index + 1]) == 0)
		{
			i++;
			j++;
		}
		index++;
	}
	if (i == (length) || j == (length))
		return (1);
	return (0);
}
