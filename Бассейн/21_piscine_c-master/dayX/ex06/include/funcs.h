/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:23:52 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 17:09:28 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H

# include <stdio.h>
# include <unistd.h>

typedef int (*op_ptr)(int, int);

int			atoi(char *str);

op_ptr		find_op(char *op);

int			add(int left, int right);

int			sub(int left, int right);

int			mul(int left, int right);

int			div(int left, int right);

int			mod(int left, int right);

void		perform_op(int left, int right, op_ptr);

void		put_num(int x);

#endif
