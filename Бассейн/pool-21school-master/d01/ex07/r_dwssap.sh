#!/bin/sh
cat /etc/passwd | sed '/^#/d' | grep -Eo '^[a-zA-Z0-9_]*:' | tr -d : | rev | sort -r | awk "NR%2==0" | sed -n "$FT_LINE1,$FT_LINE2 p;$FT_LINE2q" | tr "\n" , |rev | sed 's/,/./' | rev
