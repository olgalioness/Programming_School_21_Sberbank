cat $1 | grep -i ^'Nicolas\tbauer' | grep "[-,(,)]"  | cut -f4 | grep "[-,(,)]"
cat $1 | grep -i ^'Nicolas\tbauer' | grep "[-,(,)]"  | cut -f5 | grep "[-,(,)]"
