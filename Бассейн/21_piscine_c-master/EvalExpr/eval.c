#include <stdlib.h>

#include <stdio.h> // DEV

// STR UTILS

char	*find_end(char *str)
{
	while (*str)
		str++;
	return (str);
}

void	correct_spaces(char *str)
{
	int jump;

	jump = 0;
	while (*(str + jump))
	{
		//printf("str = {%c}, str + jump = {%c}\n", *str, *(str+jump)); // DEV 
		if (*(str + jump) == ' ')
			jump++;
		else
		{
			*(str) = *(str + jump);
			str++;
		}
	}
	*(str) = 0;
}

// RANGE UTILS

void	print_range(char *begin, char *end) // DEV
{
	while (begin != end)
	{
		printf("%c", *begin);
		begin++;
	}	
}

int		range_atoi(char *begin, char *end)
{
	int		res;
	int		sign;
	//char	*begin1 = begin; // DEV
	
	res = 0;
	sign = (*begin == '-') ? (-1) : (1);
	while (begin != end)
	{
		if (*begin != '-')
			res = res * 10 + ((*begin) - '0');
		begin++;
	}
	//printf("range_atoi : {"); // DEV
	//print_range(begin1, end); // DEV
	//printf("} -> %d\n", res * sign); // DEV
	return (res * sign);
}

void	correct_brackets(char **begin, char **end)
{
	int		bracket_count;
	char	*iter;

	//printf("Mark A\n");	// DEV
	if (**begin != '(' || *(*end - 1) != ')')
		return ;
	bracket_count = 1;
	iter = *begin + 1;
	while (iter != *end)
	{
		//printf("c = {%c}, count = %d, end = {%c}\n", *iter, bracket_count, *(*end - 1)); // DEV
		if (*iter == '(')
			bracket_count++;
		else if (*iter == ')')
			bracket_count--;
		if (bracket_count < 1 && iter != (*end - 1))
			return ;
		iter++;
	}
	//printf("Mark C\n"); // DEV
	(*begin)++;
	(*end)--;
}

// OP UTILS

char	*find_op_mod(char *begin, char *end, int mod)
{
	int		bracket_count;
	char	*iter;

	bracket_count = 0;
	iter = begin;
	while (iter != end)
	{
		if (*iter == '(')
			bracket_count++;
		else if (*iter == ')')
			bracket_count--;
		else if (mod == 0)
		{
			if (!bracket_count && *iter == '-' && iter != begin)
				return (iter);
			if (!bracket_count && *iter == '+')
				return (iter);
		}
		else if (mod == 1)
		{
			if (!bracket_count && (*iter == '*' || *iter == '/' || *iter == '%'))
				return (iter);
		}
		iter++;
	}
	return (NULL);
}

char	*find_op_ptr(char *begin, char *end)
{
	char *res_0;
	char *res_1;

	res_0 = find_op_mod(begin, end, 0);
	res_1 =  find_op_mod(begin, end, 1);
	//printf("find_op_ptr : res_0 -> {%c}, res_1 -> {%c}\n", 
	//		(res_0) ? (*res_0) : ('n'), 
	//		(res_1) ?(*res_1) : ('n'));
	return (res_0) ? (res_0) : (res_1);
}

int		eval_range(char *begin, char *end);

int		is_binary_minus(char *ptr)
{
	return (*(ptr + 1) == '(');
}

#define X(ptr) ((*ptr == '-') ? is_binary_minus(ptr) : (1))

int		eval_op(char *begin, char *op_ptr, char *end)
{

	int left;
	int right;
	
	left = eval_range(begin, op_ptr);
	right = eval_range(op_ptr + X(op_ptr),end);
	printf("\n\neval_op : New range : "); // DEV
	print_range(begin, end);
	printf("\n");
	printf("op = {%c}, left = %d, right = %d\n", *op_ptr, left, right); // DEV
    if (*op_ptr == '+')
        return (left + right);
    else if (*op_ptr == '-')
		return (is_binary_minus(op_ptr)) ? (left - right) : (left + right);
    else if (*op_ptr == '*')
        return (left * right);
    else if (*op_ptr == '/')
        return (left / right);
    else if (*op_ptr == '%')
        return (left % right);
    return (-2147483648);
}

// FUNCS

int		eval_range(char *begin, char *end)
{
	char	*op_ptr;
	
	printf("\neval_range : New range : "); // DEV
	print_range(begin, end); // DEV
	printf("\n"); // DEV
	correct_brackets(&begin, &end);
	op_ptr = find_op_ptr(begin ,end);
	if (!op_ptr)
		return (range_atoi(begin, end));
	else 
		return (eval_op(begin, op_ptr, end));
}

int		eval_expr(char *str)
{
	correct_spaces(str);
	return (eval_range(str, find_end(str)));
}

// DEV

#include <stdio.h>

int g_i = 0;

void    test_shell(char *str, int exp)
{
	char *str_cp = (char *)malloc(sizeof(char) * (find_end(str) - str + 1));
	int i;
	for (i = 0; str[i]; i++)
		str_cp[i] = str[i];
	str_cp[i] = 0;
    int res = eval_expr(str_cp);
    if (res == exp)
        printf("============= Test no.%d : OK =============\n\n", g_i++);
    else
    {
        printf("============= Test no.%d : Fail =============\n", g_i++);
        printf("Result = %d, but %d expected\n\n", res, exp);
    }
	free(str_cp);
}

void    test()
{
    test_shell("2-(4*8) + 5", -25);
	//test_shell("(20-8)/(2+10)", 1);
	//test_shell("10 - 7 + (9 - 8) * 3", 6);
    //test_shell("(1+2*(3-6)*7-4/2-3)/(0-2) + 18 / 6", 26);
    //test_shell("(1*2*3) + (4/2)", 8);
    //test_shell("1 - 20", -19);
    //test_shell("22 - 0", 22);
    //test_shell("14 + 16", 30);
    test_shell("18 - (19 * 2 - 4) + 100", 84);
    //test_shell("93 / 3 + (60 - 15) * 5", 256);
    //test_shell("1 + 1 + 1 * 5 - 15 % 8", 0);
    //test_shell("90 - 9999999 % (25 / 5)", 86);
    //test_shell("1", 1);
    //test_shell("19 - 9 + 18 * 6 - (3 - 3 - 3 + 20 * (50 * 50))", -49879);
    //test_shell("(((7/1)*6)*5)-14", 196);
 	/*
     test_shell("2-(4*8)", -30);
     test_shell("2-(4*8)", -30);
     test_shell("2-(4*8)", -30);
     test_shell("2-(4*8)", -30);
     test_shell("2-(4*8)", -30);
     test_shell("2-(4*8)", -30);
     test_shell("2-(4*8)", -30);
     test_shell("2-(4*8)", -30);
     test_shell("2-(4*8)", -30);
     test_shell("2-(4*8)", -30);
     test_shell("2-(4*8)", -30);
     */
}

int        main(int ac, char **av)
{
    av[0] = 0;
	test();
    return (0);
    if (ac > 1)
    {
        //ft_putnbr(eval_expr(av[1]));
        //ft_putchar('\n');
    }
    return (0);
}
