/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:24:08 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/18 22:22:14 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_H
# define FT_PUT_H
# include <unistd.h>
# include <stdlib.h>

void	ft_swap(int *a, int *b);
void	ft_putstr(char *c);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_print_words_tables(char **tab);
char	**ft_split_whitespaces(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_uppercase(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strlowcase(char *str);
char	*ft_strupcase(char *str);

#endif
