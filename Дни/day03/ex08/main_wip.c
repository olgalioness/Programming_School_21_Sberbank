/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 03:17:27 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/08 03:17:27 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |      ex08/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_atoi.c                      |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Воспроизвести поведение функции atoi (man atoi).
//    > Reproduce the behavior of the function atoi (man atoi).
// 2. Here’s how it should be prototyped: int ft_atoi(char *str);

// man atoi (google) https://ru.wikipedia.org/wiki/Atoi_(Си), https://www.opennet.ru/man.shtml?topic=atoi&category=3&russian=0
// Функция atoi (ASCII to integer, из ASCII в целое число) в языке программирования Си используется для приведения (конвертации) строки в числовой вид
// По сути, если в строке будет числовой ряд из ASCII символов, то фунция должна будет конвертировать их в цифры
//
// Пересобрать по его варианту - https://github.com/tsetsefly/42-piscine_self_study/blob/master/d05/ex02/ft_atoi.md
// https://github.com/ofitch/42-Piscine/blob/ef951d09ea8199284d264ed5f52e5de0afaf4174/Piscine/ExamFinal/Exam02/ft_atoi/ft_atoi.c
// https://github.com/pbie42/libft42commented/blob/master/ft_atoi.c

/* -------------------------------------------------------------------------- */
/* main & test                                                                */
/* -------------------------------------------------------------------------- */
#include <stdio.h>
#include <assert.h>
#include <string.h>

/* -------------------------------------------------------------------------- */
/* ft_atoi                                                                    */
/* -------------------------------------------------------------------------- */
// int		ft_atoi(char *str)
// {
// 	int result;				// В результат будут записываться цифры(наш результат), которые прошли проверку //Result will hold your result
// 	int sign;				// Если число было отрицательным, то sign сменится на -1 и потом return переконвертирует result, помножив -1*result //Sign is for negative numbers

// 	result = 0;				// Присваиваем 0, тем самым дав адрес для конвертации и записи числа //Result will hold the result of the opperation
// 	sign = 1;				// Изначально предпологаем, что число будет положительное, если будет отрицательное, то sign сменится на -1 //Sign is equal to one to change the negative number

// 	if (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' || *str == '\f' || *str == '\v')	// Если текущий проверяемый символ в строке является одним из следующих, то игнорируем и идем дальше.
// 	{
// 		str++; 				// Идем дальше
// 	}
// 	if (*str == '-')		// Если текущий символ является '-' В НАЧАЛЕ числе
// 	{
// 		sign = -1;			// то -sign*result = -result, вывод в дальнейшем будет отрицательным //assign negative one to make it positive.
// 	}
// 	if ((*str == '-') || (*str == '+')) //Если ПОТОМ текущий символ будет '-' или '+', то мы это игнорируем и идем дальше
// 	{
// 		str++; 				// Идем дальше
// 	}

// // 	/*Here we convert our string of characters from char to int so long as they are numbers.
// // 	If the character we are currently on is a number, we converted it to its ascii numerical value.
// // 	For the first character res is always set currently at 0.
// // 	We multiply 10 immediately by our res to set up the digit placement where it should be.
// // 	We then subtract the numerical value of the character 0 on the ascii table from our currently character number.
// // 	This sets it to its ascii numerical value.
// // 	We then start our loop over and continue until we hit a character that is not a number.*/

// // 	//https://code-live.ru/forum/cpp/877/
// // 	//https://ru.stackoverflow.com/questions/932607/Что-происходит-при-выполнении-res-10-str-0-в-функции-atoi-на-С

// 	while (*str >= '0' && *str <= '9')			// Создаем цикл, пока текущий символ в строке будет >='0' и <='9'
// 	{
// 		result = result * 10 + *str - '0';		// then we set the result times 10 plus current char on string minus 0 in ASCII value.
// 		str++;				// Идем дальше in the string.
// 	}
// 	return (sign*result);	// Возвращаем конечный результат, если sign был отрицательным, то множим -1*result, если sign был без -, то 1*result.
// }

int		ft_atoi(char *str)
{
	int sign;
	int curr_num;
	int i;

	i = 0;
	curr_num = 0;
	sign = 1;
	while (str[i] < 33)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		curr_num = 10 * curr_num + (str[i++] - '0');
	}
	return (curr_num * sign);
}

/* -------------------------------------------------------------------------- */
/* main & test                                                                */
/* -------------------------------------------------------------------------- */
int main()
{
	/* -------------------------------------------------------------------------- */
	/* verification                                                               */
	/* -------------------------------------------------------------------------- */
	printf("==== 08 ft_atoi ====\n");
	{
		printf("==== Tesing ex08 ====\n");

		assert(ft_atoi(" 98993489")==98993489);
		assert(ft_atoi("tutorialspoint.com")==0);
		assert(ft_atoi("a")==0);
		assert(ft_atoi("abc")==0);
		assert(ft_atoi(" -42")==-42);
		assert(ft_atoi(" 14343 and abc")==14343);
		//assert(ft_atoi("-91283472332")==-2147483648);
		//assert(ft_atoi("91283472332")==2147483647);
		//assert(ft_atoi("11111191283472332")==2147483647);
		assert(ft_atoi("     \t  \n  -6272")==-6272);
		assert(ft_atoi("\t\n\v\f\r +256")==256);
		assert(ft_atoi("15")==15);
		assert(ft_atoi("0")==0);
		assert(ft_atoi("-25")==-25);
		assert(ft_atoi("2147483647")==2147483647);
		assert(ft_atoi("-2147483648")==-2147483648);

		printf("==== All tests passed for ex08 ====\n");
	}

	return 0;
}