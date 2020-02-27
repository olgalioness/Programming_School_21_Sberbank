/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:00:35 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/04/01 16:06:52 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int result;
	int square;

	result = 1;
	square = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (result <= nb)
	{
		square = result * result;
		if (square == nb)
		{
			return (result);
		}
		if (square < 1)
		{
			return (0);
		}
		result++;
	}
	return (0);
}
