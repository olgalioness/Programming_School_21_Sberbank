/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 10:21:22 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/09 10:27:32 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char *argv[])
{
	char	*name;

	argc = 0;
	name = argv[argc];
	while (*name != '\0')
	{
		ft_putchar(*name);
		name++;
	}
	ft_putchar('\n');
	return (0);
}
