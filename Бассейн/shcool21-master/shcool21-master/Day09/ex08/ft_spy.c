/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 00:29:53 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/28 01:15:06 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	checkword(char *str, char *str2)
{
	int	i;
	int	j;
	int s;

	s = 0;
	while (str2[s])
		++s;
	i = 0;
	j = 0;
	while (str[i] && str2[j])
	{
		if (str[i] == ' ' || str[i] == '\t')
			++i;
		else if (str[i] == str2[j])
		{
			++i;
			++j;
			if (j == s)
				return (1);
		}
		else
			return (0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		word;
	word = 1;
	while (word < argc)
	{
		i = 0;
		while (argv[word][i])
		{
			if (argv[word][i] >= 'A' && argv[word][i] <= 'Z')
				argv[word][i] += 32;
			++i;
		}
		if (checkword(argv[word], "president") ||
				checkword(argv[word], "attack") ||
				checkword(argv[word], "bauer"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		++word;
	}
	return (0);
}
