/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 22:46:28 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/12 22:24:37 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int let;

	i = 1;
	let = 0;
	while (i != argc)
	{
		let = 0;
		while (argv[i][let] != '\0')
		{
			ft_putchar(argv[i][let]);
			let++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
