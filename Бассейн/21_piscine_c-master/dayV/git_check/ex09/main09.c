/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:09:03 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/04 15:08:51 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int	main()
{
	char a[] = "BBB";
	char b[] = "AaA";
	char c[] = "---";
	char d[] = "";

	printf("%s\n", ft_strlowcase(a));
	printf("%s\n", ft_strlowcase(b));
	printf("%s\n", ft_strlowcase(c));
	printf("%s\n", ft_strlowcase(d));

	char str[] = "asdf qWeRtY ZXCV";
	printf("%s\n", ft_strlowcase(str));
}
