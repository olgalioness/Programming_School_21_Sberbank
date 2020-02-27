/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:30:04 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/17 19:23:25 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "inc.h"

void	printn(int n)
{
	long nn;
	char c;

	nn = n;
	if (nn < 0)
	{
		write(1, "-", 1);
		nn *= -1;
	}
	if (nn >= 10)
		printn(nn / 10);
	c = nn % 10 + 48;
	write(1, &c, 1);
}

int		op(char *s)
{
	if (*(s + 1) != '\0')
		return (0);
	if (*s == '+')
		return (1);
	else if (*s == '-')
		return (2);
	else if (*s == '*')
		return (3);
	else if (*s == '/')
		return (4);
	else if (*s == '%')
		return (5);
	return (0);
}

int		res(int a, int b, int op)
{
	if (op == 1)
		return (ft_add(a, b));
	if (op == 2)
		return (ft_sub(a, b));
	if (op == 3)
		return (ft_mul(a, b));
	if (op == 4)
		return (ft_div(a, b));
	if (op == 5)
		return (ft_mod(a, b));
	return (0);
}

int		main(int argc, char **argv)
{
	int o;

	if (argc == 4)
	{
		o = op(*(argv + 2));
		if (o == 0)
			write(1, "0", 1);
		else
		{
			if ((o == 4 || o == 5) &&
					ft_atoi(*(argv + 3)) == 0)
			{
				(o == 4) ? write(1, "Stop : division by zero", 23) :
					write(1, "Stop : modulo by zero", 21);
				write(1, "\n", 1);
				return (0);
			}
			printn(res(ft_atoi(*(argv + 1)), ft_atoi(*(argv + 3)), o));
		}
		write(1, "\n", 1);
	}
	return (0);
}
