# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjamie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/13 18:23:34 by sjamie            #+#    #+#              #
#    Updated: 2019/06/13 19:10:07 by sjamie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

grep -i "Nicolas\tbauer" $1 | grep -Eo "\(?[0-9]*\)?([0-9]*-)+[0-9]*"
