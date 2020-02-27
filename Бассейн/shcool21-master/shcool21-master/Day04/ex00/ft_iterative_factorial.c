/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 13:21:51 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/22 14:58:21 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0)
	{
		return (1);
	}
	else if (nb > 12 || nb < 0)
	{
		return (0);
	}
	else
	{
		result = 1;
		while (nb > 0)
		{
			result = result * nb;
            nb -= 1;
		}
		return (result);
	}
}
