/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:06:20 by rfork             #+#    #+#             */
/*   Updated: 2019/08/07 21:44:29 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);

void	ft_bubble_sort(char **arr, int len)
{
	char	*b;
	int		i;
	int		j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(arr[i], arr[j]) < 0)
			{
				b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
			j++;
		}
		i++;
	}
}
