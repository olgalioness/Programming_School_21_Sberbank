| 			             |	ex01	            |
| ------------------ | -------------------|
| Turn-in directory  | 	ex01/	      	    |
| Files to turn in   | 	print_groups.sh	  |

1. Напишите командную строку, которая будет отображать список групп к которым принадлежит чей-нибудь login id, содержащийся в переменной среде FT_USER. Разделенными запятыми и без пробелов.
   > Write a command line that will display the list of groups for which the login, contained in the environment variable FT_USER , is a member. Separated by commas without spaces.

2. Examples:
    * o	для FT_USER=nours, результат будет *god,root,admin,master,nours,bocal* (без кавычек)
      > for FT_USER=nours, the result is "god,root,admin,master,nours,bocal" (without quotation marks)
    ```
    $>./print_groups.sh
    god,root,admin,master,nours,bocal$>
    ```

    * o	для FT_USER=daemon, результат будет *daemon.bin* (без кавычек)https://losst.ru/gruppy-polzovatelej-linux
      > for FT_USER=daemon, the result is "daemon,bin" (without quotation marks)
    ```
    $>./print_groups.sh
    daemon,bin$>
    ```

* man groups

---

## Решение: ##

1. Описание: goups – выводит группы в которых состоит user
Синтаксис: groups [ОПЦИЯ]... [ИМЯ_ПОЛЬЗОВАТЕЛЯ]...
Опция подрузумевает собой базу данных, откуда берется информация о пользователях.

2. Как использовать переменную среду? $*название файла*, своего рода иклюд, который можно использовать могут быть прочитаны из аргументов или заданы в среде оболочки вне сценария.
https://wiki.archlinux.org/index.php/Environment_variables_(Русский)
https://www.tutorialspoint.com/unix/unix-environment.htm
https://www.opennet.ru/docs/RUS/bash_scripting_guide/c301.html
http://www.rhd.ru/docs/manuals/enterprise/RHEL-AS-2.1-Manual/getting-started-guide/s1-managing-variables.html

3. Прописав ‘groups $FT_USER USERNAME’ выведет нам информацию списком, а нам надо через запятую и без пробелов.

4. Чтобы изменить формат вывода списка на нужный нам воспользуемся командой tr, которая служит для перевода (замены) выбранных символов в другие символы или удаления их.
Выполняем с ней два действия
$ tr ' ' ',' // Меняем пробел на ,
$ tr -d '\n'// Удаляем символ, который ставится в конце каждой строки для переноса строки, тем самым делаем весь вывод в одну строку

5. Соединияю все конвеером | pipeline. Посредством конвейера вывод одной команды подается на вход другой. Вывод groups > вход tr

```bash
#!/bin/bash
groups $FT_USER | cat -e | tr -d "n" | tr " " ","
```

0. Если будет ошибка 'bash: ./count_files.sh: Permission denied' то
chmod u+x *.sh
