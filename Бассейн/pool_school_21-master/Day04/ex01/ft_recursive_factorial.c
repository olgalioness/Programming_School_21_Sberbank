/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:55:28 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/03 19:47:39 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;
	int result;

	i = nb;
	result = 1;
	if (nb > 0 && nb < 13)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
