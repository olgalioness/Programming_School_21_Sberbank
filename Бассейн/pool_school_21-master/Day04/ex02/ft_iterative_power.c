/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 14:22:41 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/03 21:13:11 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		result = 1;
		i = 0;
		while (i < power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
}
