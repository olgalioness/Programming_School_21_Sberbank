/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 13:09:03 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/04 15:02:53 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main()
{
	char a[] = "aaa";
	char b[] = "AaA";
	char c[] = "---";
	char d[] = "";

	printf("%s\n", ft_strupcase(a));
	printf("%s\n", ft_strupcase(b));
	printf("%s\n", ft_strupcase(c));
	printf("%s\n", ft_strupcase(d));

	char str[] = "asdf qWeRtY ZXCV";
	printf("%s\n", ft_strupcase(str));
}
