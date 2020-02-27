/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 15:16:34 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/22 15:26:06 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int a;
	int b;

	a = 0;
	b = 1;
	if (index == 0)
	{
		return (a);
	}
	else if (index == 1)
	{
		return (b);
	}
	else
	{
		index -= 1;
		while (index > 0)
		{
			b = a + b;
			a = b - a;
			index -= 1;
		}
		return (b);
	}
}
