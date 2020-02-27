#!/bin/sh

#  find_nicolas_bauer.sh
#  21_school
#
#  Created by Татьяна Исрапилова on 25/08/2019.
#  Copyright © 2019 Татьяна Исрапилова. All rights reserved.

cat $1 | grep -i "Nicolas\tBauer" | grep -i Nicolas"\t" | grep -Eo "\(?[0-9]*\)?([0-9]*-)+[0-9]*"
