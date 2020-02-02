| 			         |	ex03	          |
| ------------------ | -------------------|
| Turn-in directory  | 	ex03/	      	  |
| Files to turn in   | 	count_files.sh    |

1. Напишите командную строку, которая будет считать и выводить число обычных файлов и каталогов в текущем каталоге и его подкаталогах. Включая “.”, начальную директорию/каталог.
   > Write a command line that counts and displays the number of regular files and directories in the current directory and all its sub-directories. It should include ".", the starting directory.

2. Example of output :
```
$>./count_files.sh | cat -e
42$
$>
```

---

## Решение: ##

```bash
#!/bin/bash
find . \( -type f -o -type d  \) | wc –l
```

1. \( -type f -o -type d  \) Скобки смысла не имеют, зато помогают разглядеть синтаксис. Выбираем два типа f(file) и d(dir)
2. Если прописать уже find . \( -type f -o -type d, то нам выведет список всех файлов построчно, осталось только подсчитать строки
3. wc –l – производит анализ / подсчет. –l подсчет строк. https://losst.ru/komanda-wc-v-linux
4. Включая “.”, начальную директорию. Если прописать find . – то увидим в начале ‘.’ это начальная директория/каталог.

0. Какие-то умники добавляют после wc –l | sed 's/ //g' , по сути его тут не должно быть, зачем нам удалять пробел, через sed, кто-то использует tr d ‘ ’ (тоже альтернатива sed ‘sed/ //g’), но смысла в этом нету.