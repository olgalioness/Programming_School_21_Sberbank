/** ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prost.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 15:40:25 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/11 15:17:25 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "nmatch.c"

int		main(void)
{
	printf("%d\n", nmatch("abc", "a**"));
	return (0);
}
