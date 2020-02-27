/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_head.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:57:04 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/17 23:03:50 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_HEAD_H
# define RUSH_HEAD_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putline(int x, char c_s, char c_m, char c_e);
void	rush(int x, int y);
int		ft_is_space(char c);
int		ft_is_sign(char c);
int		ft_is_digit(char c);
int		ft_atoi(char *str);

#endif
