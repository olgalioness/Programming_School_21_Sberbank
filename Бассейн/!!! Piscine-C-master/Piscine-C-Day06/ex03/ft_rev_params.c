/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 17:50:51 by rfork             #+#    #+#             */
/*   Updated: 2019/08/07 21:50:51 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	if (argc)
	{
		while (i != 0)
		{
			ft_putstr(argv[i - 1]);
			ft_putchar('\n');
			i = i - 1;
		}
	}
	return (0);
}
