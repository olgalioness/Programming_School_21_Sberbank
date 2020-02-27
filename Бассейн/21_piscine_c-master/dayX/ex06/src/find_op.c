/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:38:02 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 17:11:08 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

op_ptr	find_op(char *op)
{
	printf("FO : ...\n");

	if (op[1])
		return (0);
	if (op[0] == '+')
		return (&add);
	if (op[0] == '-')
		return (&sub);
	if (op[0] == '*')
		return (&mul);
	if (op[0] == '/')
		return (&div);
	if (op[0] == '%')
		return (&mod);	
	return (0);
}
