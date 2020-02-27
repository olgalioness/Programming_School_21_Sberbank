/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 17:01:21 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/07 19:57:15 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_string_writing(char **argv, char *dest)
{
	while (*argv)
	{
		while (**argv)
		{
			*dest++ = *((*argv)++);
		}
		if (*(argv + 1))
			*(dest++) = '\n';
		argv++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*dest;
	char	*ptr;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = argc - argc;
	argv++;
	while (argv[i1])
	{
		while (argv[i1][i2])
			i2++;
		i1++;
	}
	dest = (char*)(malloc(sizeof(**argv) * (i1 + i2)));
	i1 = 0;
	i2 = 0;
	if (!dest)
		return (NULL);
	ptr = dest;
	ft_string_writing(argv, dest);
	return (ptr);
}
