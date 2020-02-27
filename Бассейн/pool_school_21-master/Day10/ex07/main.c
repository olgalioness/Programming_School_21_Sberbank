/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:01:22 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/12 21:30:09 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);
void	ft_sort_wordtab(char **tab);
void	ft_print_words_tables(char **tab);

int		main(void)
{
	char *str;
	char **tab;

	str = "   aasdf zxcv qwer i 123 ASDGF ";
	tab = ft_split_whitespaces(str);
	ft_sort_wordtab(tab);
	ft_print_words_tables(tab);
	return (0);
}
