find . -type f -iname '*.sh' -print | cat -e | sed 's/\.sh//g'
