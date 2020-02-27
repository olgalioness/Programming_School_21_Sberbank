#!/bin/sh

#  libft_creator.sh
#  21_school
#
#  Created by Татьяна Исрапилова on 25/08/2019.
#  Copyright © 2019 Татьяна Исрапилова. All rights reserved.

gcc -Wall -Wextra -Werror -c ft_*.c
ar rc libft.a ft_*.o
ranlib libft.a;
