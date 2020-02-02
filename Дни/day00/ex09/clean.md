| 	                  |  ex09	            |
| ------------------ | -------------------|
| Turn-in directory  |  ex09/	      	   |
| Files to turn in   |  clean	       	   |

1. В файле с названием ‘clean’ напишите командную строку, которая будет искать все файлы – в текущем каталоге, а также в его подкаталогах – с именем оканчивающимся на ‘~’, или с именем, которое начинается и кончается на ‘#’.
   > In a file called clean place the command line that will search for all files - in the current directory as well as in its sub-directories - with a name ending by ~, or a name that start and end by #
2. Командная строка будет показывать и удалять все найденные файлы.
   > The command line will show and erase all files found

3. Только одна команда разрешена: никаких ‘;’ или ‘&&’ или другие махинации.
   > Only one command is allowed: no ’;’ or ’&&’ or other shenanigans.

* man find

---

## Материалы: ##
https://ru.wikipedia.org/wiki/Find

---

### Решение: ##

```
$> find . \( -type f -name '*~' -o -name '#*#' \) -print –delete
```

Разберем подробнее команду find:
1. `find .` Найти все файлы начиная с текущего каталога и его под-каталогов
2. `\( -type f –name '*~' –o –name '#*#' \)` - Поиск по нескольким именам файлов
   1. `\( \)` escape-символы в скобках, можно и без скобок, но так удобнее ориентироваться
   2. `-type f` – находить только файлы, без нее будут выводиться еще и каталоги
   3. `–name ‘<параметры поиска>'` - can use wildcards
      1. `*` - [pattern](https://younglinux.info/pattern)
      2. `'*~'` – заканчивается на ~, `'#*#'` – заканчивается и начинается на #
   4. `–o` - или
3. `-print` - показать на экране найденные результаты
4. `-delete` - удалить соответствующие результаты