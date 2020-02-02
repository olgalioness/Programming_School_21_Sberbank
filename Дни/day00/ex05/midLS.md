| 			         |	ex05	          |
| ------------------ | -------------------|
| midLS                                   |
| Turn-in directory  | 	ex05/	      	  |
| Files to turn in   | 	midLS             |

1. В файле ‘midLS’, напишите командную строку, которая будет выводить все файлы и дериктории в вашей текущей дериктории (за исключением скрытых или с точкой в начале названия файла и да, включая двойные точки), через запятую, по порядку даты создания файлов.
   > In a midLS file, place the command line that will list all files and directories in your current directory (except for hidden files or any file that starts by a dot - yes, that includes double-dots), separated by a comma, by order of creation date. Make sure directories’ names are followed by a slash character.

* ! Не следует делать того, чего не просили. (*да, эта фраза имеет смысл, относится к опции –U, вероятно у многих она не работала, поэтому они создавали скрипты, чтобы пофиксить*)
  > What has not been asked for should not be done!

---

## Материал: ##

* https://pingvinus.ru/note/cmd-ls

---

## Решение: ##

```
$> man ls // Выведем руководство / мануал комм. Ls
// -U – не сортировать, вывести в порядке каталога и времени создания файла / технически он не работает в некоторых UNIX, т.к. не отслежив. время создание файлов, *у меня все работает*, дополнительные скрипты делать не надо, чтобы откл. сортировку
// -m – разделять элементы запятой (comma)
// -p – добавлять к именам дерикторий слеш ‘/’ , если это дериктория (для удобства)

$> echo “ls –U –m –p” > mid LS
```