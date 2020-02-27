#!/bin/sh

cat ~/../../etc/passwd | sed '1,10d' | sed -n 'n;p' |  cut -d ':' -f 1 | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | sed  's/$/,\ /' | tr -d '\n' | sed 's/,\ $/./'
