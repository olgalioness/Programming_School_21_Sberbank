/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 12:13:22 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/03 21:13:16 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int ans;

	ans = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (--power != 0)
	{
		ans *= nb;
	}
	return (ans);
}
