/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 23:23:26 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/13 22:25:24 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int let;

	let = 0;
	i = argc - 1;
	while (i != 0)
	{
		let = 0;
		while (argv[i][let] != '\0')
		{
			ft_putchar(argv[i][let]);
			let++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
