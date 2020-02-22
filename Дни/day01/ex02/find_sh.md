| 			         |	ex02	          |
| ------------------ | -------------------|
| Turn-in directory  | 	ex02/	      	  |
| Files to turn in   | 	find_sh.sh   	  |

1. Напишите командную строку, которая будет искать все файлы с названием, которые оканчиваются на “.sh” (без кавычек) в текущем каталоге и его подкаталогах. Он должен отображать имена файлов без .sh.
   > Write a command line that searches for all file names that end with ".sh" (without quotation marks) in the current directory and all its sub-directories. It should display only the file names without the .sh.

2. Example of output:
```
$>./find_sh.sh | cat -e
find_sh$
file1$
file2$
file3$
$>
```

---

## Решение: ##

```bash
#!/bin/bash
find . -type f -name "*.sh" -printf "%f\n" | sed 's/.sh$//' (неверно)
```

1. `find` - команда для поиска файлов и каталогов на основе специальных условий. https://losst.ru/komanda-find-v-linux
2. `.` – показать все файлы в текущей дериктории
3. `-type f` – искать только файлы, мы ведь только их и ищем
4. `-name “*.sh”` – с паттерн нейм (название файла), который оканчивается на .sh
5. `-printf “%f\n”` %f: File's name with any leading directories removed (only the last element). \n с новой строки. Тоесть название файла будет выводиться с новой строки
6. `|` перенаправляем вывод на вход, чтобы убрать расширения файлов
7. `sed “s/.sh$//”` - $ https://www.gnu.org/software/sed/manual/html_node/Regular-Expressions.html

* Анкоры https://zalinux.ru/?p=1270#43 - каретка ^ и знак доллара $ являются метасимволами, которые представляют, соответственно, начало и конец строки. Они называются анкорами (буквально «якоря»), поскольку принудительно «якорят» совпадение, соответственно, к началу или концу строки. Читает space pattern название файла с конца, это сделано для того, чтобы sed смог обработать название расширения в файлах и вывести их.

Следующая команда выполнит рекурсивное применение правил для всех файлов в каталоге «/home/test», а также для всех файлов во всех подкаталогах:
# find /home/test -type f -exec chmod 644 {} \;

find . -type f -exec   ***************              {} \;

#!/bin/sh
find . -name '*.sh' -execdir basename '{}' .sh ';'
find . -name "*.sh" -execdir basename {} .sh \;
find . -type f -name "*.sh" -exec basename {} .sh \; 
find . -type f -name "*.sh" | sed -E 's/.*\/(.*)\.sh/\1/g'
find . -name '*.sh'| xargs basename  | sed 's/\.sh//g'
find . -type f -name "*.sh" | rev | cut -c 4- | cut -d '/' -f 1 | rev
find . -name "*.sh" -exec basename {} .sh \;
find . -type f -name '*.sh' 2>/dev/null -exec basename "{}"  \; |rev | cut -c 4- | rev
find . -type f -name "*.sh" | sed -E 's/.*\/(.*)\.sh/\1/g'
find . -type f -name '*.sh' 2>/dev/null -exec basename "{}"  \; |rev | cut -c 4- | rev
find . -type f ! -name "*.sh"
find . -name "*.sh" -exec basename {} \; | sed "s/[.]sh//g"


