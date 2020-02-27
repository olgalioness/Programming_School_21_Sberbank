/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 22:45:34 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/12 20:24:48 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
char	**ft_split_whitespaces(char *str);

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
