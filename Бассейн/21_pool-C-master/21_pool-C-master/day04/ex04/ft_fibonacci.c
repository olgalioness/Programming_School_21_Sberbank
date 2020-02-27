/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 21:12:18 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/08 21:52:34 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1)
	{
		return (1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index < 0)
	{
		return (-1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
