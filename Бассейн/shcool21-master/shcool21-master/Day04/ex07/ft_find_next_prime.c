/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 19:33:18 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/22 19:40:55 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	f;

	i = 2;
	if (nb < 2)
	{
		f = ft_find_next_prime(nb + 1);
		return (f);
	}
	else if (nb == 2)
		return (2);
	else
	{
		while (i * 2 <= nb)
		{
			if (nb % i == 0)
			{
				f = ft_find_next_prime(nb + 1);
				return (f);
			}
			i++;
		}
		return (nb);
	}
}
