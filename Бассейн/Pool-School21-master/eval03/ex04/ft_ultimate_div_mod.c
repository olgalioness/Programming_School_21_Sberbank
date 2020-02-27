/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 20:52:35 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/02 23:23:56 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int buffa;
	int buffb;

	if (*b != 0 && *a && *b)
	{
		buffa = *a;
		buffb = *b;
		*a = buffa / buffb;
		*b = buffa % buffb;
	}
}
