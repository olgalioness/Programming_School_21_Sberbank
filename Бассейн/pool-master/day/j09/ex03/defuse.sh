#!/bin/sh

#  defuse.sh
#  21_school
#
#  Created by Татьяна Исрапилова on 25/08/2019.
#  Copyright © 2019 Татьяна Исрапилова. All rights reserved.

echo $(( $(date +%s) - $(stat -f%u bomb.txt) ))
