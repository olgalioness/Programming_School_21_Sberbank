/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prost.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 10:31:45 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/16 12:16:42 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_concat_params.c" 
#include "ex04/ft_split_whitespaces.c"
#include "ex05/ft_print_words_tables.c"

void print_array(int *arr, int size)
{
	int i;

	i = 0;
	while (i != size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

int		ft_putchar(char c)
{
		write(1, &c, 1);
			return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(void)
{
	char **ans;
	char *str;

	str = " AlvEx ";
	ans = ft_split_whitespaces(str);
	ft_print_words_tables(ans);




/*	printf("%d\n",count_argv(argc, argv));
	n = count_argv(argc, argv);
	printf("size is %d\n", n);
	params = ft_concat_params(argc, argv);
	ft_putstr(params);

	//ans_size = ft_ultimate_range(ans, 15, 3);
	//print_array(ans[0], 16);
	//ans_array = ft_range(3, 15);
	//print_array(ans_array, 16);

*/	//printf("%s\n", ft_strdup("abcde"));
	return (0);
}
