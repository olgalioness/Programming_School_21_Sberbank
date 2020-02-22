man 2 write - описание write  

exit  выйти из терминала.
pwd      пути к текущей рабочей директории /users/bocal
"ls" выводит списком файлы и директории
 "man  документация
"ls -l", которая выводит более подробный список.  "staff" группа, потом пользователь, "bocal"; даты изменения...
 "ls -la", которая позволит вам вывести списком все файлы, включая скрытые, если таковы имеются.под названием "." и "..".
"cd" вы можете сменить текущую дерикторию,
cd.. вернуться обратно, в предыдущую дерикторию, напишите "cd .."
"." - это текущая директория, а ".." - это предыдущая.
"mkdir" создает новые директории,
rm" удаления.
rm -Rf - стереть все втекущей директории
 корневой "root", она обозначается символом "/" (slash).

"cd /" то окажитесь в корневом каталоге вашей файловой системы.

cd ~  переход в домашний катало"touch" - создать файл, 
"cat" - обзор содержимого файла (выводит содержимое на экран), 
"cp" - копировать, 
"mv" - переместить, 
"rm" - удалить (как вы уже видели), 
"chmod" - сменить права доступа к объектам файловой системы, это очень важно знать, чтобы избежать пранков над вашей работой, вашими одноклассниками.
"touch"  создвть
cat"посмотреть содержимоег

echo "test" > test.txt

«Echo» позволит нам отобразить то, что мы даем им в параметре, он сделает это заново при стандартном выводе.

"Cat", в частности, принимает файл в качестве параметра и отображает содержимое этого файла.
-e», которая будет очень полезна для вас на бассейне, который отображает «не отображаемые» символы. в конце каждой строки есть «$», который представляет возврат к следующей строке.

Это будет очень полезно для всех тем, когда мы просим вас сделать показ без возврата строки, мы сделаем "cat -e", чтобы показать вам, что нет конца, что означает, что нет никаких возвратов строки.

less text.txt    (more устарело) для поиска определенного слова в файле
Я могу использовать стрелки, чтобы идти вверх и вниз, я могу искать файл.

head file.txt   отображает первые 10 строк файла
tail file.txt      отображает последние 10 строк файла
tail -n -3 file.txt   отобразить поледние 3 строки
grep "sfdfs" file.txt      отобразить только строки с sfdfs
grep "sfdfs" -v file.txt
grep "sfdfs" -i file.txt
grep man посмотреть флаги grep

cat file.txt
cat - просто команда вывода на экрат того, что ввеете 
ctrl+D выход из режима чтения
> перенапраить стандартный вывод в файл (записать в файл)
echo "Privet" > privet   (перенавправить выход в файл и перезаписать данный файл)

>> добавить вконец файла новую информацию 
echo "mir" >>  privet 
cat < privet
cat file.txt| grep "Mathieu"
cat file.txt| grep "Mathieu" | head -n 1

cat file.txt | sort               сортировка в алфавитном порядке ASCII
man sort
cat file.txt | sort | cut -d  , -f 1                  вырезать и оставить первый столбец
cat file.txt | sort | cut -d  , -f 1 | cat -e      отображение неотображ символов
cat file.txt | sort | cut -d  , -f  1,2
cat file.txt | sort | cut -d  , -f  1,3
cat file.txt | sort | cut -d  , -f  1-3
cat test | sort | cut -d  , -f  1 | sed "s/thomas/Thomas/" деламем замену (флаг s) изменить слово томас на Томас
cat test | sort | cut -d  , -f  1 | tr "x" "X"   замена 
cat test | sort | cut -d  , -f  1 | tr "hi" "Hi "   замена 

Вы можете внести много изменений, изменить элемент из двух, использовать регулярные выражения, с различными моделями, очень сложные вещи, которые могут быть очень мощными, если вам удастся хорошо их освоить.

wc privet     вычисляет количество строк , слов и символов
wc *
cat privet | grep Thomas | ws ~l    узнать сколько Томасов встречается в файле
file privet     информация о файле
ifconfig   увидеть  IP адрес, MAC  адреса
 bc  калькулятор     2+5  вычислить сумму количества строк
 
echo " 1 + 2"  | bc
find . найти все файлы
find / usr  найти все файлы корневого каталога usr
find .  найти и отфильтровать по размеру  по типу файла
find  /usr -name "ls*" найти все файлы которые начинаются с ls


What is the "environment"?
It's simply a list of variables present in the "shell" that are automatically transmitted to all binary files, and to all scripts.
If we do "env" we will see the list of these variables.
We see that it works on a key and value system; "PATH" has this value.
"PATH" is used by "shell" for example to know where all the binary files are located.
We will have your user ("user"), who is called "jar" in this case.
We will have "TERM" which in us is "xterm", etc.
To what use?
When parameterizing the "shell" scripts.
For example, if we want to add a variable "LINE", which corresponds to the line number to look for in the script, we can do "LINE = 3".
If we look in our environment, the variable "LINE" was created with the value "3"
and to access it we can simply write "$ LINE".
If I make "echo $ LINE", it will display "3", because "$ LINE" will be replaced by its value.
Simply.
So the environment variables will allow you to configure the "shell" scripts, the later buffers, and the "makefiles", to be able to have different behaviors depending on the environment variables.
env   список переменных
export LINE=3
env
$LINE
echo $LINE

cat file.txt


cat file.txt
cat file.txt
cat file.txt | rev   обратный вывод букв
cat azeaze файл не существует  и выдаст на экран

cat azeaze | rev    содержимое было записано в выход ошибки и rev не перевернул его
cat azeaze 2>&1 | rev     2 -выход ошибки, и будет рассматриваться как 1 стандартный выход  
и теперь rev обратит текст (перевернет его)
cat azeaze 2> error
cat error
cat azeaze 2> error перезаписан
cat azeaze 2> error
cat azeaze 2> error
cat error
cat azeaze 2>>error добавить в конец
cat error          
cat privet privet privet azeaze
cat privet privet privet azeaze 2>error
This can be very useful if you have a list of files, and you have errors in them, and you want to recover only the part that went or the part that didn't work, etc.
With these redirects you will be able to have, for example, all the files that gave errors in the "error" file.

echo "privet" > /dev/null
cat privet privet privet azeaze > /dev/null выведет только сообщение о баге
What can it use? When deleting part of the result, to keep for example only error messages.
If we want to have all the error messages, now it's a bit messy, we have to go up to see them.
If we tell him that everything that worked has been sent to "/ dev / null", only the error messages appear.
Again, this can be very useful for debugging, or to check if the scripts are working properly, something very important to know next.



wc -c   сколько символов в коде 
