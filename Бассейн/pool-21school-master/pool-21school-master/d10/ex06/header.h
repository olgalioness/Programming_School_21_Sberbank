/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:03:51 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/13 15:31:37 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define N 5

typedef int		(*t_ptr)(int, int);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_choise_oper(t_ptr f[N]);
int		ft_plus(int a, int b);
int		ft_minus(int a, int b);
int		ft_mult(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_atoi(char *str);
int		ft_check(int argc, char **argv);
int		ft_strlen(char *str);
int		ft_oper_check(char *str);

#endif
