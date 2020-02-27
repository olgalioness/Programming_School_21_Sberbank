/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salarak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 12:00:58 by salarak           #+#    #+#             */
/*   Updated: 2019/02/16 13:17:32 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int a, int b);
int		ft_putchar(char c);
int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	int		a;
	int 	b;

	if (argc  > 3)
		return (0);
	if (argc <= 2)
		return (0);

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);

	rush(a, b);
	return (0);
}
