| 			         |	ex07	          |
| ------------------ | -------------------|
| Turn-in directory  | 	ex07/	      	  |
| Files to turn in   |  r_dwssap.sh       |

1. Напишите командную строку, которая будет отображать вывод команды cat /etc/passwd, без комментариев, с каждой второй строки начиная со второй строки, реверсируя каждый login, отсортировав в реверсированном алфавитном порядке, и содержащие login’ы только между FT_LINE1 и FT_LINE2 включая, и они должны быть разделены “, ” (без кавычек), а также вывод должен заканчиваться на “.”.
   > Write a command line that displays the output of a cat /etc/passwd command, removing comments, every other line starting from the second line, reversing each login, sorted in reverse alphabetical order, and keeping only logins between FT_LINE1 and FT_LINE2 included, and they must separated by ", " (without quotation marks), and the output must end with a ".".

2. Между строчек 8 и 16, результат должен быть приблизительно таким:
   > Between lines 8 and 16, the result should be something like this:
```
$> ./r_dwssap.sh
sstq_, sorebrek_brk_, soibten_, sergtsop_, scodved_, rlaxcm_, rgmecived_, revreswodniw_, revressta_
    .$>
```

* Строго следуйте указанному порядку в инструкциях.
  > Rigorously follow the order indicated in the instructions.

---

## Решение: ##

```bash
#!/bin/bash
*Решения пока нет, нужно проверить!*
```

* `cat /etc/passwd` – выписывает инф., которая содержится в файле /etc/passwd

1. `grep -v '^#'` – инвентируем поиск, убрав строчки, которые начинаются ^ с # (убираем в начале комментарии начинающиеся на # https://losst.ru/gerp-poisk-vnutri-fajlov-v-linux)
2. `awk “!(NR%2)”` – выдав каждую вторую строку, начав со второй строки (но т.к. вторая строка у нас начинается на # и не читается, то проще всего написать, чтобы выдавал только вторую строку, вывод будет один и тот же).
3. `cut -d : -f 1` – вывести 1 поле (-f 1), где разделитель : (-d) [root:!:0:0::/:/usr/bin/ksh]
4. `rev` – реверсировать каждую строку
5. `sort –r` – отсортировав в обратном алфавитном порядке
6. `awk "NR==$FT_LINE1,NR==$FT_LINE2"`
    * why $ again begore FT_ cause thats how to use env.
    * Ver https://www.ntu.edu.sg/home/ehchua/programming/howto/environment_variables.html
    * https://www.opennet.ru/docs/RUS/awk/
7. `tr –s “\n” “, ”` – заменяем перенос строк на запятые
8. `sed “s/,$/ ./”` - ...