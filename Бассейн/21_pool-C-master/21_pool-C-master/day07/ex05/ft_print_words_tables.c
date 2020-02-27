/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 18:03:46 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/13 22:00:51 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (*(tab + i) != 0)
	{
		j = 0;
		while (*(*(tab + i) + j))
		{
			ft_putchar(*(*(tab + i) + j));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
