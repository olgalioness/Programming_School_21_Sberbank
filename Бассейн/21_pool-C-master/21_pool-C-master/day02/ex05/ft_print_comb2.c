/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 23:28:46 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/06 23:15:48 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int arr[4];

	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;
	arr[3] = 1;
	while (!(arr[0] == 9 && arr[1] == 9))
	{
		ft_putchar(arr[0] + 48);
		ft_putchar(arr[1] + 48);
		ft_putchar(' ');
		ft_putchar(arr[2] + 48);
		ft_putchar(arr[3] + 48);
		!((arr[0] == 9) && (arr[1] == 8)) ? ft_putchar(',') : 0;
		!((arr[0] == 9) && (arr[1] == 8)) ? ft_putchar(' ') : 0;
		arr[3]++;
		((arr[3] = arr[3] % 10) == 0) ? arr[2]++ : 0;
		if (arr[2] == 10)
		{
			arr[2] = arr[0];
			arr[1]++;
			((arr[1] = arr[1] % 10) == 0) ? arr[0]++ : 0;
			arr[3] = arr[1] + 1;
		}
	}
}
