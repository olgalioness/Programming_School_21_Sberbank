| 			         |	ex06	          |
| ------------------ | -------------------|
| Turn-in directory  | 	ex06/	      	  |
| Files to turn in   |  skip.sh           |

1. Напишите командную строку, которая будет отображать *каждую вторую строку ls –l, начиная с первой строки*.
   > Write a command line that displays every other line for the command ls -l, starting from the first line.

---

## Решение: ##

```bash
#!/bin/bash
ls –l |	awk '!(NR%2 == 1)'
```

* awk with the option: NR → The total number of input records seen so far. And the % 2 == 1 to print every second line counting from line 1.