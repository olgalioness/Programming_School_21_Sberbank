/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 15:02:21 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/22 15:03:49 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;
	int	nbb;

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
		nbb = ft_recursive_factorial(nb - 1);
		result = nb * nbb;
		return (result);
	}
}
