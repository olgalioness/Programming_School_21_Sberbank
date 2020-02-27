/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 03:59:38 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/12 04:15:33 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

void	show(int n, char *arr[])
{
	int i;

	i = 1;
	while (i < n)
	{
		while (*(arr[i]))
		{
			ft_putchar(*(arr[i]));
			arr[i]++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		if (i + 1 < argc && ft_strcmp(argv[i + 1], argv[i]) < 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	show(argc, argv);
	return (0);
}
