/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:22:57 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/17 19:24:14 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_add(int a, int b)
{
	return (a + b);
}

int	ft_sub(int a, int b)
{
	return (a - b);
}

int	ft_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}

int	ft_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int	ft_mul(int a, int b)
{
	return (a * b);
}
