/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:53:27 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/03 21:14:37 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index == 1 || index <= 0)
		return (0);
	if (index == 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
