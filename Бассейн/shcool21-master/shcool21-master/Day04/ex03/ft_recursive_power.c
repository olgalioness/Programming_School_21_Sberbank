/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 16:03:55 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/22 16:18:51 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int r;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		power -= 1;
		r = ft_recursive_power(nb, power);
		result = nb * r;
		return (result);
	}
}
