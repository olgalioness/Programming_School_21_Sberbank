#!/bin/sh

#  where_am_i.sh
#  21_school
#
#  Created by Татьяна Исрапилова on 26/08/2019.
#  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
var=$(ifconfig | grep "inet " | cut -d' ' -f2)
if test -z "$var"
then
echo "Je suis perdu!"
else
echo $var | tr ' ' '\n'
fi
