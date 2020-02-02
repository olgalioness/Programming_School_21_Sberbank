| 			            |	ex03			      |
| ------------------ | -------------------|
| Oh yeah, mooore...                      |
| Turn-in directory  | 	ex03/	      		|
| Files to turn in   | 	exo3.tar          |

1. Создайте файл и дериктории, чтобы после команды ls –l в консоли выглядел так:
   > Create the following files and directories. Do what’s necessary so that when you use the ls -l command in your directory, the output will looks like this:

```
$> ls –l
Total 42
drwx--xr-x 2 login wheel XX Jun 1 20:47 test0
-rwx--xr-- 1 login wheel 4  Jun 1 21:46 test1
dr-x---r-- 2 login wheel XX Jun 1 22:45 test2
-r-----r-- 2 login wheel 1  Jun 1 23:44 test3
-rw-r----x 1 login wheel 2  Jun 1 23:43 test4
-r-----r-- 2 login wheel 1  Jun 1 23:44 test5
lrwxr-xr-x 1 login wheel 5  Jun 1 22:20 test6 -> test0
```

2. Сразу, после этого заархивируйте файлы на отправку через `tar -cf exo3.tar *`
   > Once you’ve done that, run tar -cf exo3.tar * to create the file to be submitted.

* ! Не беспокойтесь, что у вас другие значения, вместо “XX”, как в примере.
   > Don’t worry about what you’ve got instead of "XX".

* ! Мы допускаем тот факт, что у вас будет год на временной метке файла, вместо времени.
   > A year will be accepted instead of the time, on the timestamp of the files.

* ! Права доступа для test6 менять не надо.

---

## Материалы: ##
* https://github.com/soulcocktail/42/tree/master/Piscines/C/Day00/answers/ex02

---

## Решение: ##

```
$> cd ~ // Переходим в домашний каталог
$> mkdir ex02
$> cd ex02

$> mkdir test0 // Создаем файлы и папки изменяя права доступа на них
$> chmod 715 test0
$> touch -a -m -t 202006012047.00 test0 // ! Обязательно меняем временную метку в конце !, после всех изменений, т.к. после каждого изменения она ставится сегоднешним числом.

$> touch test1
$> dd if=/dev/zero of=test1 bs=4 count=1
$> chmod 714 test1
$> touch -a -m -t 202006012146.00 test1

$> mkdir test2
$> chmod 504 test2
$> touch -a -m -t 202006012245.00 test2

$> touch test3
$> dd if=/dev/zero of=test3 bs=1 count=1
$> chmod 404 test3
$> touch -a -m -t 202006012344.00 test3
$> ln test3 test5 // Изучим тему0, тему 1 и тему 2. Создаем файл test5 с жесткой ссылкой на файл test3
// https://rtfm.co.ua/unix-chto-takoe-symlink-hardlink-i-inode/
// https://lexpenz.com/notes/chem-otlichaetsya-zhyostkaya-ssylka-ot-simvolicheskoj.html
// https://ubuntugeeks.com/questions/73/what-is-the-difference-between-a-hard-link-and-a-symbolic-link
// https://losst.ru/simvolicheskie-i-zhestkie-ssylki-linux

$> touch test4
$> dd if=/dev/zero of=test4 bs=2 count=1
$> chmod 641 test4
$> touch -a -m -t 202006012343.00 test4

$> ln –s test0 test6 // Создаем файл с символической ссылкой на раздел test6
$> touch -h -a -m -t 202006012220.00 test6
// https://losst.ru/simvolicheskie-i-zhestkie-ssylki-linux
```
