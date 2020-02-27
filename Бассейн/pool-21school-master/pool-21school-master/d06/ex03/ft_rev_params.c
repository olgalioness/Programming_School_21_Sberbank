/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:59:39 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/07 19:42:17 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argv[i])
		i++;
	while (i != 1)
	{
		i--;
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
