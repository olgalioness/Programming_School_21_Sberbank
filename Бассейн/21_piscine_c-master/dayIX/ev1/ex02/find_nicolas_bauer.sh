cat phonebook.*  | grep -i "nicolas" | grep -i "bauer" | grep -e "(...)...-...." -e "...-...-.." | grep -v Bomber | rev | cut -f2 | rev
