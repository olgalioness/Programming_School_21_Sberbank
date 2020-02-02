# The Norm v2.0.2
Источники:
* [Пример правильного оформленя кода C по нормам школы 21](https://42-21-school.blogspot.com/2019/07/main.html)
* [Стандарты написания кода в 21-school: The Norm](https://42-21-school.blogspot.com/2019/07/21-school-norm.html)
* [Правила по оформлению кода школы 42 на русском языке](https://github.com/burninggoose/42-norme-ru)

---

### I - Предисловие / Foreword
- I.1 - Почему принят стандарт? / Why impose a standard?
- I.2 - Нормы для подачи / The norm for submissions
- I.3 - Советы / Suggestions
- I.4 - Отказ от ответственности / Disclaimers

### II - Нормы / The Norm
- II.1 - Название (Название переменных) / Denomination
- II.2 - Оформление / Formatting
- II.3 - Параметры передаваемые в функцию / Functions parameters
- II.4 - Функции / Functions
- II.5 - Определение имени, структура, перечисление, объединение / Typedef, struct, enum and union
- II.6 - Заголовки / Headers
- II.7 - Макрос и пре-процессоры / Macros and Pre-processors
- II.8 - Запрещенные штуки ! Forbidden stuff !
- II.9 - Комментарии / Comments
- II.10 - Файлы / Files
- II.11 - Makefile

### III - Дополнения (не относятся к оригиналу)
- III.1 - Norminette errors

---

## I - Предисловие / Foreword
В этом документе описаны стандарты (Нормы) школы 42. Стандарт программирования определяет свод правил, которым нужно следовать во время написания кода. Вы должны всегда следовать правилам Норм во всех C-проектах в школе, если конкретно не указан иной вариант.
> This document describes the applicable standard (Norm) at 42. A programming standard deﬁnes a set of rules to follow when writing code. You must always respect the Norm for all C projects at the school, unless otherwise speciﬁed.

---

### I.1 - Почему принят стандарт? / Why impose a standard?
Две главные цели, которые преследуют Нормы: / The Norms two main objective:
1. Стандартизировать и правильно оформить ваш код, чтобы все (ученики, администрация и даже вы сами) могли легко читать и понимать его.
   > To format and standardize your code so that anyone (students, staﬀ and even yourself) can read and understand them easily.

2. Помочь вам в написании короткого и простого кода.
   > To guide you in writing short and simple code.

---

### I.2 - Нормы для подачи / The Norm for submissions
Все ваши C-файлы должны следовать Нормам школы. За этим будут следить те, кто вас проверяет. Если вы совершите любую ошибку по Нормам, то получите 0 за все задание или даже весь проект. Во время проверки ваш проверяющий должен будет запустить проверку “Norminette” с вашими файлами. Только оценка “Norminette” должна быть взята во внимание. Только Обязательная часть Норм будет проверена “Norminette”.
> All of your C ﬁles must respect the school’s Norm. It will be checked by your grader. If you made any Norm error you’ll get a 0 for the exercise or even for the whole project. During peer-evaluations, your grader will have to launch the “Norminette” present in your submission’s dumps. Only the mandatory part of the Norm will be checked by the “Norminette”.

---

### I.3 - Советы / Suggestions
Достаточно быстро вы поймете, что Нормы не такие страшные, как кажутся. Наоборот, они помогают вам больше чем вы думаете. Они позволяют вам гораздо проще читать код ваших одноклассников и ваш код сам будет читабельным. Наказание за исходный файл с одной ошибкой по Нормам такое же, как и за файл с десятью ошибками. Мы настойчиво рекомендуем вам держать Нормы в голове во время написания кода - даже если вам сначала покажется, что они вас замедляют. Со временем, это превратится в рефлекс.
> You’ll realise soon enough that the Norm isn’t as intimidating as it seems. On the contrary, it’ll help you more than you know. It’ll allow you to read your classmates’ code more easily and vice versa. A source ﬁle containing one Norm error will be treated the same way as a source ﬁle containing 10 Norm errors. We strongly advise you to keep the Norm in mind while coding - even though you may feel it’s slowing you down at ﬁrst. In time, it’ll become a reﬂex.

---

### I.4 - Отказ от отвественности / Disclaimers
“Norminette” – это программа. Как и все программы, в ней могут быть баги (ошибки). Если заметили один, то сообщите об этом в соответствующей секции на форуме. Однако, так как “Norminette” всегда превалирует, то это значит, что ваш код должен адаптироваться к ее багам.
> “Norminette” is a program, and all programs are subject to bugs. Should you spot one, please report it in the forum’s appropriate section. However, as the“Norminette” always prevails, all your submissions must adapt to its bugs.

---

## II - The Norm / Нормы
### II.1 - Название (Название переменных) / Denomination
#### Обязательная часть / Mandatory part
1. Название structure (структур) должно начинаться с префикса s_.
   > A structure’s name must start by s_.
2. Название typedef (создания типов) должны начинаться с префикса t_.
   > A typedef’s name must start by t_.
3. Название union (объединения) должны начинаться с префикса u_.
   > A union’s name must start by u_.
4. Название enum (перечисления) должны начинаться с префикса e_.
   > An enum’s name must start by e_.
5. Название глобальных переменных должны начинаться с префикса g_.
   > A global’s name must start by g_.
6. Название переменных и функций должны содержать строчные (мал.) буквы, цифры и симв. ’\_’.
   > Variables and functions names can only contain lowercases, digits and ’\_’ (Unix Case).
7. Название файлов и каталогов должны содержать только строчные (мал.) буквы, цифры и ’\_’.
   > Files and directories names can only contain lowercases, digits and ’\_’ (Unix Case).
8. Файл должен скомпилироваться.
   > The ﬁle must compile.
9. Запрещены символы, которых нет в стандартной ASCII таблице.
   > Characters that aren’t part of the standard ascii table are forbidden.

#### Рекомендации / Advice part
1. Названия объектов (переменных, функций, макросов, типов, файлов и директории) должны быть понятны и запоминающимися. Только ‘counters’ (переменные-счетчики) могут быть названы так, как вам хочется.
   > Objects (variables, functions, macros, types, ﬁles or directories) must have the most explicit or most mnemonic names as possible. Only ’counters’ can be named to your liking.
2. Допускается использование аббревиатур только в том случае, если названия все равно остаются понятными. Если название содержит в себе более чем одно слово, то слова должны разделяться символом ’\_’ .
   > Abreviations are tolerated as long as it’s to shorten the original name, and that it remains intelligible. If the name contains more than one word, words shall be separated by ‘\_’ .
3. Все идентификаторы (функции, макросы, типы, переменные и т. д.) должны быть на английском языке.
   > All identiﬁers (functions, macros, types, variables, etc) must be in English.
4. Любое использование глобальной переменной должно быть оправданным (обоснованным).
   > Any use of global variable must be justiﬁable.

---

### II.2 - Оформление / Formatting
#### Обязательная часть / Mandatory part
1. Все ваши файлы должны начинаться с заголовка школы 42 (начиная с первой строки вашего файла). Этот заголовок по умолчанию доступен в редакторах emacs и vim в дампах.
   > All your ﬁles must begin with the standard school header (from the ﬁrst line of the ﬁle). This header is available by default with emacs and vim in the dumps.
2. В качестве отступа в вашем коде вы должны использовать 4-пробельную табуляцию. Это не тоже самое, что 4 пробела, мы говорим о настоящей табуляции (кнопка TAB).
   > You must indent your code with 4-space tabulations. This is not the same as 4 average spaces, we’re talking about real tabulations here.
3. Каждая функция должна содержать не более 25 строк, не считая строк с фигурными скобками этой функции.
   > Each function must be maximum 25 lines, not counting the function’s own curly brackets.
4. Максимальная длина строки вместе с комментариями - 80 знаков. Внимание: табы считаются не как знаки, а как количество пробелов, которые они заменяют (1 Tab = 4 пробела).
   > Each line must be at most 80 columns wide, comments included. Warning : a tabulation doesn’t count as a column, but as the number of spaces it represents.
5. Одна инструкция на строку.
   > One instruction per line.
6. Пустая строка должна быть пустой: никаких TAB’ов или пробелов.
   > An empty line must be empty: no spaces or tabulations.
7. Строка никогда не должна заканчиваться пробелом или TAB’ом.
   > A line can never end with spaces or tabulations.
8. Вам нужно начинать новую строку после каждой фигурной скобки или конца контрольной структуры.
   > You need to start a new line after each curly bracket or end of control structure.
9. Все запятые и точки с запятой должны иметь после себя пробел, только если это не конец строки.
   > Unless it’s the end of a line, each comma or semi-colon must be followed by a space.
10.	Каждый оператор (бинарныйдвоичный или тернарныйтроичный) или операндаргумент-операции должны быть разделены одним и только одним пробелом.
    > Each operator (binary or ternary) or operand must be separated by one - and only one - space.
11.	За каждым ключевым словом С должен идти пробел, за исключением ключевых слов для типов (таких как int, char, float, и т.д.), а также sizeof.
    > Each C keyword must be followed by a space, except for keywords for types (such as int, char, ﬂoat, etc.), as well as sizeof.
12. Каждое объявление переменной должно иметь отступ в том же столбце. :🚩некор._перевод🚩:
    > Each variable declaration must be indented on the same column.
13.	Звездочки указателей должны быть вплотную к названиям переменных.
    > The asterisks that go with pointers must be stuck to variable names.
14. Одно объявление переменной на строку.
    > One single variable declaration per line.
15. Нельзя делать объявление и инициализацию в одной строке, за исключением глобальных и статических переменных.
    > We cannot stick a declaration and an initialisation on the same line, except for global variables and static variables.
16.	Объявления переменных должны быть в начале функции и должны быть отделены пустой строкой.
    > Declarations must be at the beginning of a function, and must be separated by an empty line.
17.	Не должно быть пустой строки между объявлениями или реализациями.
    > There cannot be an empty line between declarations or implementations.
18.	Многократные назначения строго запрещены. :🚩некор._перевод🚩:
    > Multiple assignments are strictly forbidden.
19.	Вы можете добавить новую строку после инструкции или управляющей структуры, но вам придется добавить отступ в скобках или оператор присваивания. Операторы должны быть в начале строки.
    > You may add a new line after an instruction or control structure, but you’ll have to add an indentation with brackets or aﬀectation operator. Operators must be at the beginning of a line.

---

### II.3 - Параметры передаваемые в функцию / Functions parameters
#### Обязательная часть / Mandatory part
1. Функция может принимать максимум 4 именованных параметров.
   > A function can take 4 named parameters maximum.
2. Функция, которая ничего не возвращает аргументы, должна начинаться со слова (должна быть явно прототипирована со слова) “void”, в качестве аргумента.
   > A function that doesn’t take arguments must be explicitely pototyped with the word "void" as argument.

---

### II.4 - Функции / Functions
#### Обязательная часть / Mandatory part
1. Параметры в прототипах функций должны быть названы.
   > Parameters in functions’ prototypes must be named.
2. Каждая функция должна быть отделена от следующей пустой строкой.
   > Each function must be separated from the next by an empty line.
3. Вы не можете объявлять больше 5 переменных в одном блоке.
   > You can’t declare more than 5 variables per bloc.
4. Возвращение функции должно быть между скобками.
   > Return of a function has to be between parantheses.

#### Рекомендации / Advice part
1. Идентификаторы ваших функций должны быть выровнены в пределах одного и того же файла. То же самое касается заголовочных файлов.
   > Your functions’ identiﬁers must be aligned within a same ﬁle. Same goes for header ﬁles.

---

### II.5 - Определение имени, структура, перечисление и объединение / Typedef, struct, enum and union
#### Mandatory part / Обязательная часть
1. Добавляйте табуляцию при объявлении struct(структуры), enum(перечисления) or union(объединения).
   > Add a tabulation when declaring a struct, enum or union.
2. При объявлении переменной типа (struct, enum или union) добавьте один пробел в типе.
   > When declaring a variable of type struct, enum or union, add a single space in the type.
3. Добавляйте табуляцию между двумя параметрами typedef(определителя имени).
   > Add a tabulation between two parameters of a typedef.
4. При объявлении (struct, union или enum) с typedef, применяются все правила. Новое имя typedef должно соотноситься с именем struct / union / enum.
   > When declaring a struct, union or enum with a typedef, all rules apply. You must align the typedef’s name with the struct/union/enum’s name.
5. Нельзя объявлять struct в .с файле.
   > You cannot declare a structure in a .c ﬁle.

---

### II.6 - Заголовки / Headers
#### Обязательная часть / Mandatory Part
1. В заголовочных файлах разрешено следующие : включения(#include) заголовка (системные или нет), объявления, определения, прототипы и макросы.
   > The things allowed in header ﬁles are : header inclusions (system or not), declara-tions, deﬁnes, prototypes and macros.
2. Все включения ( .c или .h) должны быть в начале файла.
   > All includes (.c or .h) must be at the beginning of the ﬁle.
3. Мы будем защищать заголовки от двойных включений. Если имя файла ft_foo.h, его визуальный макрос это FT_FOO_H.
   > We’ll protect headers from double inclusions. If the ﬁle is ft_foo.h, its bystander macro is FT_FOO_H.
4. Прототипы функций должны быть только в файлах формата .h
   > Functions’ prototypes must exculively be in .h ﬁles.
5. Неиспользованное включение заголовков ( .h) недопустимы.
   > Unused header inclusions (.h) are forbidden.

#### Рекомендации / Advice part
1. Все включения заголовка должны быть обоснованы, как в .c файлах, так и в .h .
   > All header inclusions must be justiﬁed in a .c ﬁle as well as in a .h ﬁle.

---

### II.7 - Макрос и препроцессоры / Macros and Pre-processors
#### Обязательная часть / Mandatory part
1. Константы препроцессора (или #define), которые вы создаете, должны использоваться только для связывания литеральных и константных значений.
   > Preprocessor constants (or #deﬁne) you create must be used only for associate literal and constant values.
2. Запрещены все #define, созданные для обхода нормального и / или запутанного кода. Этот момент должен быть проверен человеком.
   > All #deﬁne created to bypass the norm and/or obfuscate code are forbidden. This point must be checked by a human.
3. Вы можете использовать макросы, доступные в стандартных библиотеках, только если они разрешены в рамках данного проекта.
   > You can use macros available in standard libraries, only if those ones are allowed in the scope of the given project.
4. Многострочные макросы запрещены.
   > Multiline macros are forbidden.
5. В верхнем регистре должны содержаться только имена макросов.
   > Only macros names are uppercase.
6. После #if, #ifdef или #ifndef вы должны сделать отступ для символов.
   > You must indent characters following #if , #ifdef or #ifndef.

---

### II.8 - Запрещенные штуки ! / Forbidden stuﬀ !
#### Обязательная часть / Mandatory part
1. Вам запрещено использовать: / You’re not allowed to use:
* цикл for
* цикл do...while
* оператор switch
* оператор case
* оператор goto

2. Запрещены вложенные тернарныетроичные операторы, такие как ‘?’.
   > Nested ternary operators such as ‘?’.

3. Запрещено пользоваться массивы переменной длины (динамическими массивами) :🚩некор._перевод🚩:
   > VLAs - Variable Length Arrays.

---

### II.9 - Комментарии / Comments
#### Обязательная часть / Mandatory part
1. Вам разрешено комментировать свой код в исходных файлах.
   > You’re allowed to comment your code in your source ﬁles.
2. Комментарии не могут быть внутри(inside) тела функции.
   > Comments cannot be inside functions’ bodies.
3. Комментарии должны начинаться и заканчиваться на одной строке. Все промежуточные строки должны быть выравнены и начинаться с ‘**’.
   > Comments start and end by a single line. All intermediary lines must align and start by ‘**’.
4. Никаких комментариев вида //.
   > No comments with //.

#### Рекомендации / Advice part
1. Ваши комментарии должны быть на английском языке. И они должны быть полезными.
   > You comments must be in English. And they must be useful.
2. Комментарий не может оправдать «ублюдочную» функцию.
   > A comment cannot justify a "bastard" function.

---

### II.10 - Files
#### Обязательная часть / Mandatory part
1. Вы не можете включить(#include) .c файл.
   > You cannot include a .c ﬁle.
2. Вы не можете иметь более 5 определений функций в .c файле.
   > You cannot have more than 5 function-deﬁnitions in a .c ﬁle.

---

### II.11 - Makeﬁle
#### Основная часть / Mandatory part
1. $(NAME), clean, fclean, re и все правила являются обязательными.
   > The $(NAME), clean, fclean, re and all rules are mandatory.
2. Если makefile relink'ается, проект будет считаться нефункциональным.(Работа будет не засчитана).
   > If the makeﬁle relinks, the project will be considered non-functional.
3. В случае мультибинарного проекта, в дополнение к правилам, которые вы видели, у вас должно быть правило, которое компилирует оба бинарных(двоичных) файла, а также определенное правило для каждого скомпилированного бинарного файла.
   > In the case of a multibinary project, on top of the rules we’ve seen, you must have a rule that compiles both binaries as well as a speciﬁc rule for each binary compiled.
4. В случае, если ваш проект использует системную библиотеку функий (например: libft), ваш makefile должен автоматически скомпилировать ее эту библиотеку.
   > In the case of a project that calls a functions library (e.g.: libft), your makeﬁle must compile this library automatically.
5. Все файлы исходники, которые вам нужны для компиляции вашего проекта, должны быть явно названы (указаны) в вашем Makefile.
   > All source ﬁles you need to compile your project must be explicitly named in your Makeﬁle.

---

## III - Дополнения (не относятся к оригиналу)
#### III.1 - Norminette errors

1. Error: global scope bad aligned    
Найдите в своей функции строчку с объявлением функции вида int main.    
Удалите пробел после int и вставьте после него два Tab.

2. Error: 42 header not at top of the ^le    
Вставьте заголовок 42 школы (fn+F1 в vim). Если он есть - попробуйте сделать его заново. (Ваш файл должен иметь расширение .с!)

3. Error: must not begin by spaces/tabulations    
Уберите пробелы или дабы из начала.

4. Error: bad indentation    
Проверьте отступы перед командами в функции! Должно быть как на примере. Только ТАБы, длиной в 4 пробела.

5. Error: Space before FUNCTION_NAME    
Замените пробел перед именем функции на Tab.

6. Error: bad spacing after ft_print_comb    
После конца функции (после последней ‘}’) не правильно задано количество пустых строк: должна быть одна.

7. Error: function XXXXXXXXX has XX lines    
Функция содержит слишком много строк! Максимум 25 строк!

8. Error: declarations must be followed by one empty line in XXXXXXXXX    
Проверьте, как вы объявляете переменные! Расстановка пустых строк должна быть как на примере, и объявлять можно по одной переменной за раз! После объявления переменных должна быть пустая строка(смотри пример!).

7. Error: missing space around <    
Не `“a<b”`, а `“a < b”`.

8. Error: global scope bad aligned    
проверьте дабы перед именами функций. Названия функций должны быть одна над другой, строго, по всей программе! Для выравнивания используйте Tab.

9. declarations in XXXXXXXXX are bad aligned    
Проблема в объявлении переменных в функции. С помощью ТАБов выровняйте их так, чтобы они располагались одна над другой, красивым столбиком. Если есть типы данных с длинным названием, то перед короткими (типа int) прийдется ставить несколько Tab.

10. Warning: /Users/XXXXXXXX may not compile or is invalid for some reasons.    
Проверьте базовый синтаксис С. Это можно сделать следующим образом: добавьте int main(){} в конец программы и скомпилируйте с помощью gcc - и он укажет на ошибки в программе.

11. Error : declaration of ft_putchar forbidden in .c    
Вы запускаете norminette без флагов. Используйте norminette -R CheckForbiddenSourceHeader (Moulinette будет использовать такие же флаги!)

12. Error: missing void in function main    
Если ваша функция не принимает на вход никаких аргументов, то это необходимо указать явно: int main(void){}.

13. Error: multiple empty lines    
Просто удалите лишние пустые строки.

14. Error : wrong number of spaces in preprocessor indentation    
Перед de^ne должен быть пробел: # de^ne