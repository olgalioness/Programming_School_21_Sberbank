| 	                  |	ex02              |
| ------------------ | -------------------|
| What are attributes anyway ?            |
| Turn-in directory  | 	ex02/             |
| Files to turn in   | 	testDay00.tar     |

1. В предоставленном каталоге ex01/ создайте файл с названием testDay00.
   > Create a file called testDay00 in your submission directory
2. Найдите способ, чтобы получить результат, как тут, кроме строки “total 1”:
    > Figure out a way for the output to look like this (except for the “total 1” line):
```
%> ls -l
total 1
-r--r-xr-x 1 XX XX 40 Jun 1 23:42 testDay00
%>
```

3. Как только выполните предыдущие шаги, выполните следующую команду, чтобы создать файл на отправку: tar -cf testDay00.tar testDay00.
   > Once you’ve achieved the previous steps, execute the following command to create the file to be submitted: tar -cf testDay00.tar testDay00.

* ! Не переживайте о том, что у вас вместо "XX".
   > Don’t worry about what you’ve got instead of "XX".

* ! Мы допускаем тот факт, что у вас будет год на временной метке файла, вместо времени.
   > A year will be accepted instead of the time, on the timestamp of the file.

* ! "login" и "wheel" соответственно будут заменены вашим логином и группой. Временная отметка файла будет в виде года, а не времени.

---

## Материал: ##
* https://github.com/soulcocktail/42/tree/master/Piscines/C/Day00/answers/ex01
* https://github.com/tsetsefly/42-piscine_self_study/tree/deb26bca9dbad750247d692f1258b77d53fc6f30/d00/ex01
* http://www.filepermissions.com/file-permission/455

---

## Решение: ##

0. Первым, что я должен разузнать – какие разрешения стоят по дефолту при создании новых файлов и папок. Значение umask вероятно должно быть 0002, разрешения на файлах вероятно должны быть 664 (-rw-rw-r--), а у меня стоит 644 (-rw-r--r--).

```
$> umask        // Узнаем значение при создании def. Папок и файлов, оно должно быть 0002.
$> umask 0002   // Спрашиваем, надо ли менять, если да – то меняем
```

1. Создаем файл с особыми свойствами.

https://losst.ru/komanda-dd-linux

```
$> cd ~         // переходим в домашний каталог
$> mkdir ex01   // Создаем нужный каталог, только если его нету, или же day00, а уже потом ex01
$> cd ex01      // Заходим в каталог ex01

$> touch testDay00  // Создаем файл
$> dd if=/dev/zero of=testDay00 bs=40 count=1 //Меняем размер файла if=заполнить нулем, of=файл, bs=колл-во байт, count=сколько блоков надо скопировать
touch -amt 201906012342 testDay00    // Меняем временную метку файла  (дату создания и модификации )
stat testDay00                   
16777220 12886248599 -rw-r--r-- 1 olik staff 0 40
 "Jun  1 23:42:00 2019" 
"Jun  1 23:42:00 2019" 
"Feb  1 03:28:28 2020"     
"Jun  1 23:42:00 2019"    дата создания.  1 июня 2019
4096 8 0x40 testDay00

метка -a    -m    -t



$> ls –l        // Проверяем
chmod a-w testDay00
chmod go+x testDay00
chmod 455 testDay00  //или 

```

1. Архивируем файл

https://shneider-host.ru/blog/sozdanie-i-raspakovka-tar-arhivov-v-unix-sistemah.html
https://help.ubuntu.ru/wiki/стандартные_права_unix

```
$> tar –cf testDay00.tar testDay00 // Создаем архив и запаковываем туда файл   c - создать новый файл, v - показать прогресс, f - тип имени файла архива


$> rm testDay00 // Удаляем файл, чтобы остался только архив
tar -tf testDay00.tar // распаковываем архив  -xvf     
ls -l.   // проверяем
rm testDay00

