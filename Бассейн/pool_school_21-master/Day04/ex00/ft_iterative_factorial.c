/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:37:42 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/03 19:37:48 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int result;

	result = 1;
	i = 1;
	if (nb >= 0 && nb < 13)
	{
		while (i <= nb)
		{
			result = result * i;
			i++;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
