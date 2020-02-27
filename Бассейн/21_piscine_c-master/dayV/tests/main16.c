/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main16.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 19:59:04 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/04 20:12:07 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static int i = 0;

char	*ft_strcat(char *dest, char *src);

void	test(char *dest, char *src)
{
	if (ft_strcat(dest, src) == strcat(dest, src))
		printf("Test %d ok\n", ++i);
	else 
		printf("Test %d fail : s1 = %s, s2 = %s, f = %s, f_lib = %s\n", ++i, dest, src, ft_strcat(dest, src), strcat(dest, src));
}

int main()
{
	char a[100] = "asdfghjkl";
	char b[100] = "123456789";
	test(a, b);

	char c[20] = "a";
	char d[20] = "aaaaaaaaaaaaa";
	test(c, d);

	char test[256] = "";
	printf("%s\n", ft_strcat(test, "asdf"));
	printf("%s\n", ft_strcat(test, ""));
	printf("%s\n", ft_strcat(test, "zxcv"));
}
