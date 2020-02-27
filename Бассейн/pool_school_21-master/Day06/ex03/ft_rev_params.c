/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:18:59 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/07 16:25:59 by lhaired          ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	while (argc != 1)
	{
		ft_putstr(argv[argc - 1]);
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
