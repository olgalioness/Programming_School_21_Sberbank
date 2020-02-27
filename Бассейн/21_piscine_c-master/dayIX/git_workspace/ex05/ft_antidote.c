/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 21:29:08 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/07 21:48:07 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	char temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int		get_mid(int arr[3])
{
	int i;
	int size;

	i = 0;
	size = 3;
	while (i < size)
	{
		while (i < size - 1)
		{
			if (arr[i] > arr[i + 1])
				swap(&arr[i], &arr[i + 1]);
			i++;
		}
		i = 1;
		size--;
	}
	return (arr[1]);
}

int		ft_antidote(int i, int j, int k)
{
	int arr[3];

	arr[0] = i;
	arr[1] = j;
	arr[2] = k;
	return (get_mid(arr));
}
