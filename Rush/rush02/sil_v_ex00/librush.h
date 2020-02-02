/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   librush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 21:52:54 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 22:09:01 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRUSH_H
# define LIBRUSH_H

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>

int		check_top(char *str, int x, int y);
int		check_middle(char *str, int i, int x, int y);
int		check_bottom(char *str, int i, int x);
int		check_top01(char *str, int x, int y);
int		check_middle01(char *str, int i, int x, int y);
int		check_bottom01(char *str, int i, int x);
int		check_top02(char *str, int x, int y);
int		check_middle02(char *str, int i, int x, int y);
int		check_bottom02(char *str, int i, int x);
int		check_top03(char *str, int x, int y);
int		check_middle03(char *str, int i, int x, int y);
int		check_bottom03(char *str, int i, int x);
int		check_top04(char *str, int x, int y);
int		check_middle04(char *str, int i, int x, int y);
int		check_bottom04(char *str, int i, int x);
void	ft_putdims(int x, int y);
void	ft_rush00(int x, int y);
void	ft_rush01(int x, int y);
void	ft_rush02(int x, int y);
void	ft_rush03(int x, int y);
void	ft_rush04(int x, int y);

#endif
