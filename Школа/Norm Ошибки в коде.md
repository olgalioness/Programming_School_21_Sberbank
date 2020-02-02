Ошибки в коде

Error: global scope bad aligned

Найдите в своей функции строчку с объявлением функции вида int main.
Удалите пробел после int и вставьте после него два ТАБ
Вы восхитительны!
Error: 42 header not at top of the file

Вставьте заголовок 42 школы (fn+F1 в vim). Если он есть - попробуйте сделать его заново. (Ваш файл должен иметь расширение .с!)
Error: must not begin by spaces/tabulations

-Уберите пробелы или дабы из начала
Error: bad indentation

-Проверьте отступы перед командами в функции! Должно быть как на примере. Только ТАБы, длиной в 4 пробела.
Error: Space before FUNCTION_NAME

Замените пробел перед именем функции на ТАБ.
Error: bad spacing after ft_print_comb

-После конца функции (после последней ‘}’) не правильно задано количество пустых строк: должна быть одна
Error: function XXXXXXXXX has XX lines

-Функция содержит слишком много строк! Максимум 25 строк!
Error: declarations must be followed by one empty line in XXXXXXXXX

-Проверьте, как вы объявляете переменные! Расстановка пустых строк должна быть как на примере, и объявлять можно по одной переменной за раз! После объявления переменных должна быть пустая строка(смотри пример!).
Error: missing space around <

-Не “a<b”, а “a < b”.
Error: global scope bad aligned

проверьте дабы перед именами функций. Названия функций должны быть одна над другой, строго, по всей программе! Для выравнивания используйте ТАБ.
declarations in XXXXXXXXX are bad aligned

-Проблема в объявлении переменных в функции. С помощью ТАБов выровняйте их так, чтобы они располагались одна над другой, красивым столбиком. Если есть типы данных с длинным названием, то перед короткими (типа int) прийдется ставить несколько ТАБов.
Warning: /Users/XXXXXXXX may not compile or is invalid for some reasons.

-Проверьте базовый синтаксис С. Это можно сделать следующим образом: добавьте int main(){} в конец программы и скомпилируйте с помощью gcc - и он укажет на ошибки в программе.
Error : declaration of ft_putchar forbidden in .c

-Вы запускаете norminette без флагов. Используйте norminette -R CheckForbiddenSourceHeader (Moulinette будет использовать такие же флаги!) 
Error: missing void in function main

-Если ваша функция не принимает на вход никаких аргументов, то это необходимо указать явно: int main(void){}.
Error: multiple empty lines

-Просто удалите лишние пустые строки.
Error : wrong number of spaces in preprocessor indentation

Перед define должен быть пробел: # define
