/** ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prost.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 15:40:25 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/12 15:06:06 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include "match.c"

int		main(void)
{
	printf("%d\n", match("main.main.c", "*main.c"));
	return (0);
}
