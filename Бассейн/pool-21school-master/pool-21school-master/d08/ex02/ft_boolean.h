/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 08:48:19 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/09 11:08:31 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(x) x % 2
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN_MSG "I have an even number of arguments.\n"

typedef int		t_bool;
#endif
