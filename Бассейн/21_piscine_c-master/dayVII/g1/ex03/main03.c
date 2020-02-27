/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 11:16:51 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/06 12:19:36 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_concat_params(int argc, char **argv);

#include <stdlib.h>
#include <stdio.h>

void test(int argc, char **argv)
{
	printf("Argc = %d, argv = %s, ...\n", argc, argv[0]);
	printf("Res:\n{%s}\n\n", ft_concat_params(argc, argv));
}

int	main()
{
	char *a[] = {"alpha", "beta", "gamma"};
	test(3, a);
	char *b[] = {"hello", "there", ""};
	test(3, b);
	char *c[] = {};
	test(0, c);

	printf("======= UNIT-TESTS =======\n\n");

	char* arr0[5] = {"NO", "YES", "ARG2", "ARG3", NULL};
	printf("%s\n\n", ft_concat_params(4, arr0));

	char* arr1[3] = {"NO", "YES", NULL};
	printf("%s\n\n", ft_concat_params(2, arr1));

	char* arr2[2] = {"NO", NULL};
	printf("%s", ft_concat_params(1, arr2));

}
