/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:37:00 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/20 20:37:00 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr_m(char *str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		ft_putchar(str[ind++]);
	}
}

int		main(int argc, char *argv[])
{
	if (argc > 0)
	{
		ft_putstr_m(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}