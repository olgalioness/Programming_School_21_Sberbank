/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 10:49:29 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/09 12:19:48 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] != '\0' && s1[j] == s2[j])
		j++;
	if (s1[j] < s2[j])
		return (-1);
	if (s1[j] > s2[j])
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	sort(int argc, char *argv[])
{
	int		i;
	int		flag;
	char	*name;

	i = 1;
	flag = 0;
	while (flag != 1)
	{
		flag = 1;
		while (i < argc - 1)
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

int		main(int argc, char *argv[])
{
	int	i;

	i = 1;
	sort(argc, argv);
	while (argv[i] != 0 && i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
