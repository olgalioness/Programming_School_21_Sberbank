/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 02:56:23 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/13 02:56:23 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power <= -1)
	{
		return (0);
	}

	result = 1;
	while (power--)
	{
		result *= nb;
	}
	return (result);
}
