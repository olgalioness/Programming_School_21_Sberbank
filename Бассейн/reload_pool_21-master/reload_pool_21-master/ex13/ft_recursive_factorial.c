/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:06:23 by lulee             #+#    #+#             */
/*   Updated: 2019/09/12 17:12:28 by lulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb <= 12)
	{
		if (nb == 1 || nb == 0)
		{
			nb = 1;
			return (nb);
		}
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
