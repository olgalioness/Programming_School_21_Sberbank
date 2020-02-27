/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:47:40 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 17:13:57 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void		perform_op(int left, int right, op_ptr f)
{
	printf("PO : l = %d, r = %d\n", left, right);
	(f) ? put_num(f(left, right)) : put_num(0);
}
