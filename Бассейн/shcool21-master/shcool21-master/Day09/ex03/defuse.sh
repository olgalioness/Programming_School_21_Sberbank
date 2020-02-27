stat -r bomb.txt | cut -d ' ' -f9 | echo $(cat) - 1 | bc
