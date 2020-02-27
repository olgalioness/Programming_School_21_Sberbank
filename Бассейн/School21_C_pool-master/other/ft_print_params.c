/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 15:29:15 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/06 18:50:14 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	if (argc > 0)
	{
		argv++;
		while (*argv)
		{
			while (**argv)
			{
				ft_putchar(**argv);
				(*argv)++;
			}
			ft_putchar('\n');
			argv++;
		}
	}
}
