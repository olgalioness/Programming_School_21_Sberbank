/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:25:36 by lulee             #+#    #+#             */
/*   Updated: 2019/09/16 15:59:48 by lulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_arg(char **a, int argc)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (a[i][j] != '\0')
		{
			ft_putchar(a[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*a;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				a = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = a;
			}
			j++;
		}
		i++;
	}
	ft_print_arg(argv, argc);
	return (0);
}
