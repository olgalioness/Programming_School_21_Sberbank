/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:26:44 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/12 21:01:30 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *c)
{
	while (*c != '\0')
	{
		ft_putchar(*c);
		c++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int argc, char **argv)
{
	int i;
	int n;

	i = 1;
	n = argc;
	while (n > 0)
	{
		i = 1;
		while (i < n - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				swap(&argv[i], &argv[i + 1]);
			i++;
		}
		n--;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
