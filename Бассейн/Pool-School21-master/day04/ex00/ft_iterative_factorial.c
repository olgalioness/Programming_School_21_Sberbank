/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 10:37:29 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/03 21:10:45 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int ans;

	ans = nb;
	if (nb < 0 || nb > 12)
		return (0);
	while (--nb != 0)
	{
		ans = ans * nb;
	}
	return (ans);
}
