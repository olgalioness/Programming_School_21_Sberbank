#!/bin/sh

# | Turn-in directory:  |	ex00/				        				|
# | ------------------- | --------------------------------------------- |
# | Files to turn in:   |	libft_creator.sh, ft_putchar.c, ft_swap.c,  |
# |                     |   ft_putstr.c, ft_strlen.c, ft_strcmp.c	    |
# | Allowed functions:  |	write					     				|
# | Notes: 			    |	n/a (без комментариев)						|
#
# 1. Создайте вашу ft библиотеку. Она должна быть названа libft.a
#    > Create your ft library. It’ll be called libft.a.
# 2. Shell sctipt с названием libft_creator.sh скомпилирует ваши исходники и создаст вашу библиотеку.
#    > A shell script called libft_creator.sh will compile source files appropriately and will create your library.
# 3. This library should contain all of the following functions:
# 		void ft_putchar(char c);
# 		void ft_swap(int *a, int *b);       => day03/ex02
# 		void ft_putstr(char *str);          => day03/ex05
# 		int ft_strlen(char *str);           => day03/ex06
# 		int ft_strcmp(char *s1, char *s2);  => day05/ex06
# 4. We’ll launch the following command-line: sh libft_creator.sh
# 0. Не стесняйтесь добавлять другие полезные функции.
#    > Don’t hesitate to add other useful functions... ;-)

#https://www.opennet.ru/docs/RUS/gcc/gcc1-2.html
#http://igorkam.blogspot.com/2011/04/linux_25.html

gcc -c ft_putchar.c
gcc -c ft_swap.c
gcc -c ft_putstr.c
gcc -c ft_strlen.c
gcc -c ft_strcmp.c
# на выходе имеем файлы .o, содержащий объектный код нашей библиотеки

ar rc libft.a *.o
# ar упаковывает несколько (! Это важно. Дело не ограничивается только одним объектным файлом)
# объектных файлов в одну статическую библиотеку. Статическая библиотека имеет расширение ".a",
# при этом ее название должно начинаться с "lib" (дань традиции).

#Параметры ar:
#r - предписывает заменять старые версии объектных файлов новыми - необходим для переупаковки библиотеки;
#c - создать статическую библиотеку, если та еще не существует.

ranlib libft.a
# Создает индекс содержимого архива и сохраняет его в архиве; в индексе перечислены все символы,
# имеющиеся в архивных файлах и перемещаемые в объектные файлы
# http://www.firststeps.ru/linux/r.php?5

# после создания или изменения архива необходимо его индексировать. Этот индекс позже используется
# компилятором для ускорения поиска символов внутри библиотеки и обеспечения того, чтобы порядок
# символов в библиотеке не имел значения во время компиляции (это будет лучше понято, когда мы более
# подробно рассмотрим ссылку процесс в конце этого урока)."

rm *.o
# удаляем оставшиеся object файлы

#################

#gcc -c ft_*.c && (echo "gcc OK"; exit 0) || (c=$?; echo "gcc not OK"; (exit $c))
#ar -rc libft.a *.o && (echo "ar OK"; exit 0) || (c=$?; echo "ar not OK"; (exit $c))

#rm *.o
##ranlib libft.a && (echo "ranlib OK"; exit 0) || (c=$?; echo "ranlib not OK"; (exit $c))

#if ranlib libft.a ; then
#	echo "ranlib workeds"
#else
#	echo "ranlib NOT WORKING"
#fi