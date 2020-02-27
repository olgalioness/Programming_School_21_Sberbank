/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:38:32 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/08 22:38:38 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 && nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
