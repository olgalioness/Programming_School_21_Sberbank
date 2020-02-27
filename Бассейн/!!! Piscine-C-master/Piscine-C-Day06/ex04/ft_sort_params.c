/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:02:30 by rfork             #+#    #+#             */
/*   Updated: 2019/08/07 21:47:52 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bubble_sort(char **arr, int len);

void	ft_putstr(char *str);

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;

	if (argc)
	{
		i = 1;
		ft_bubble_sort(argv + 1, argc - 1);
		while (argv[i] != '\0')
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
