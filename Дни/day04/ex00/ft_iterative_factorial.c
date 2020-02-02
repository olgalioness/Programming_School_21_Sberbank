/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:37:04 by marvin            #+#    #+#             */
/*   Updated: 2020/01/12 18:37:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	if (nb <= -1 || nb >= 13)
	{
		return (0);
	}

	fact = 1;
	i = 0;
	while (i++ < nb)
	{
		fact *= i;
	}
	return (fact);
}