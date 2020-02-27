/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 23:08:17 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/09 13:55:13 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"

#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int i;

	i = 0;
	while (factory[0][i] != NULL)
	{
		free(factory[0][i]);
		i++;
	}
	free(factory[0]);
}
