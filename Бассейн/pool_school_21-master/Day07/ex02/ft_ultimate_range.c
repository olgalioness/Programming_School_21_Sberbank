/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 16:03:43 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/09 11:54:38 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	unsigned int	len;
	int				*array;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int*)malloc(sizeof(int) * len);
	while (i < len)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (max - min);
}
