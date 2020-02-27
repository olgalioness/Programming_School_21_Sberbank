/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:44:35 by klekisha          #+#    #+#             */
/*   Updated: 2019/01/31 15:19:19 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int **nbr)
//void ft_ultimate_ft(int *********nbr)
{
	**nbr= 42;
}

int		main(void)
{
	int a;
	int *ptr1;
	int **ptr2;
	
	a = 3;
	ptr1 = &a;
	ptr2 = &ptr1;
	ft_ultimate_ft(ptr2);
	printf ("output: %d", a);
	return(0);
}
