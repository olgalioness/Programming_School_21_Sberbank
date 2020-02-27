/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 08:50:39 by rfork             #+#    #+#             */
/*   Updated: 2019/08/09 09:07:42 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int				i;
	unsigned	int s;
	int				d;

	i = 0;
	s = 0;
	d = 1000000000;
	if (value > 0)
	{
		while (value % d != 0)
		{
			if (value / d == 1)
			{
				s = s + 1;
				value = value / 10;
				i++;
			}
			d = d / 10;
		}
		return (s);
	}
	else
		return (0);
}
