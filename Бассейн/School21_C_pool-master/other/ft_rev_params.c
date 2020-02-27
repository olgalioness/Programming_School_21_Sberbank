/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 17:08:23 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/06 18:23:37 by klekisha         ###   ########.fr       */
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
	while (argc > 1)
	{
		argc--;
		ft_putstr(argv[argc]);
		ft_putchar('\n');
	}
}
