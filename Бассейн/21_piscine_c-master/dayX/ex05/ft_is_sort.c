/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:00:17 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 12:41:47 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (!(f(tab[i], tab[i + 1])))
			return (0);
		i++;
	}
	return (1);
}

int		less(int left, int right)
{
	return (left < right);
}

#include <stdio.h>

int		main()
{
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {5, 4, 3, 2, 1};

	printf("arr1  %d\n", ft_is_sort(arr1, 5, less));
	printf("arr2  %d\n", ft_is_sort(arr2, 5, less));

}
