/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 17:01:44 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/21 17:29:12 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void alpha_mirror(char *str)
{
	char	c;

	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			c = 'Z' + 'A' - *str;
			write(1, &c, 1);
		}
		else if (*str >= 'a' && *str <= 'z')
		{
			c = 'z' + 'a' - *str;
			write(1, &c, 1);
		}
		else 
			write(1, &*str, 1);
		str++;
	}
}

int		main(int argc, char **argcv)
{
	if (argc == 2)
		alpha_mirror(argcv[1]);
	write(1, "\n", 1);
	return (0);
}
