/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 21:58:39 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/08 22:35:36 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	long i;
	long nb1;

	nb1 = nb;
	if (nb1 == 0)
		return (0);
	if (nb1 == 1)
		return (0);
	i = 2;
	while (i * i <= nb1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !is_prime(nb))
		nb++;
	return (nb);
}
