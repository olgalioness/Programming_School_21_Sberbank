/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 20:52:26 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/26 22:15:12 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_answer(int argc, char **argv)
{
	int i;

	i = 0;
	while (i++ < argc - 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		resume;
	char	*tmp;

	resume = 1;
	while (resume)
	{
		i = 1;
		resume = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = tmp;
				resume = 1;
			}
			i++;
		}
	}
	ft_print_answer(argc, argv);
	return (0);
}
