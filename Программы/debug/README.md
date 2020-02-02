# 42 Stupidity
0. Для тестов лучше создать папку .debug, где мы будем использовать шаблоны [ft_putchar.c] и [main.c].
2. [ft_print_alphabet.c]: Создадим исходник ft_print_alphabet.c, это и будет наш загружаемый ответ.
3. [main.c]: Создадим исходник main.c для себя. Тут будут находиться [ft_putchar], [ft_print_alphabet] и [main] разделы, этот файл будет нам служить в роли тестов.
4. Компилируем `gcc -Wall -Wextra -Werror ../ft_putchar.c ft_print_alphabet.c main.c -o ex00`
   
| gcc        |     -Wall -Wextra -Werror |  ../ft_putchar.c ft_print_alphabet.c main.c     |     -o ex00                      
| Компилятор|     Флаги  |     Используемые исходники для компиляции       |     Output file-name. Программа на выходе |
   
Разберем флаги:
* Wall включить вывод предупреждений тип 1, возникающих во время компиляции программы. (http://staff.mmcs.sfedu.ru/~ulysses/IT/C++/using_gcc.html)
* Wextra включить вывод предупреждений тип 2 (http://staff.mmcs.sfedu.ru/~ulysses/IT/C++/using_gcc.html) Почему его стоит использовать? http://rus-linux.net/MyLDP/algol/gcc/uncommon-but-useful-gcc-command-line-options-2.html
* Werror каждое предупреждение обрабатывается как ошибка.

1. Запускаем и проверяем: вы можете запустить программу с помощью команды ./outputfile. (Точка и слэш ./ перед именем файла используются для указания текущего каталога.)



A tool for quickly testing answers to the piscine questions

## usage
clone this repository, and then clone a student's work repo inside of this one. run ```./spawn.pl THEIR_WORK_REPO/ config<day>.pl``` (replace THEIR_WORK_REPO with the repo that you cloned, and config<day>.pl with the name of the config file that you wish to test (they are named by day, so d02 would be config_d02.pl)). the spawn script will create test files for all exercises that it finds present.

after spawning, run ```./tools/build.sh``` to build their files with the provided main.c's. run ```./tools/verify.sh``` to have norminette verify all files. finally, run ```./tools/check_all.sh``` to perform all tests. good tests will simply state 'good', errors will be printed with big exclamation marks.
