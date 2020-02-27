/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 12:17:40 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/04 19:34:26 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	sastantua(int size)
{
	int count_str_lvl[size];
	int count_all_str;
	int i;

	i = 0;
	count_all_str = 3;
	count_str_lvl[0] = 3;
	while (++i < size)
	{
		count_str_lvl[i] = count_str_lvl[i - 1]++;
		count_all_str += count_str_lvl[i];
	}
	ft_putchar(count_all_str + '0');
}
