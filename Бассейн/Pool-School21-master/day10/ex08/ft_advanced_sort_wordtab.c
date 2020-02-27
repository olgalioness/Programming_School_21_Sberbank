/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 20:52:17 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/12 21:34:52 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_advanced_sort_wordtab(char **argv, int (*cmp)(char *, char *))
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
			if (cmp(argv[i], argv[i + 1]) > 0)
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
