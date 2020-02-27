/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 09:58:19 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/02 17:20:37 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int a;

	if (nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	a = nb * ft_recursive_factorial(nb - 1);
	return (a);
}
