/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 20:52:17 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/14 12:37:21 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		j;

	j = 0;
	while (s1[j] != '\0' && s1[j] == s2[j])
		j++;
	if (s1[j] < s2[j])
		return (-1);
	if (s1[j] > s2[j])
		return (1);
	return (0);
}

int		countstr(char **argv)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (argv[i] != 0)
		count++;
	return (count);
}

void	ft_sort_wordtab(char **argv)
{
	int		i;
	int		count;
	int		flag;
	char	*name;

	i = 1;
	flag = 0;
	count = countstr(argv);
	while (flag != 1)
	{
		flag = 1;
		while (i < count - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) != -1)
			{
				name = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = name;
				flag = 0;
			}
			i++;
		}
		i = 0;
	}
}
