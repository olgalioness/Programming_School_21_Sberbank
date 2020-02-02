/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 22:30:11 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/20 22:30:11 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char *c)
{
	while (*c)
	{
		ft_putchar(*c);
		c++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*c;

	i = 2;
	argc = 1;
	while (argv[argc])
	{
		while (argv[i])
		{
			if (ft_strcmp(argv[argc], argv[i]) > 0)
			{
				c = argv[argc];
				argv[argc] = argv[i];
				argv[i] = c;
			}
			i++;
		}
		ft_sort_params(argv[argc]);
		ft_putchar('\n');
		argc++;
		i = argc + 1;
	}
	return (0);
}