/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 20:51:38 by marvin            #+#    #+#             */
/*   Updated: 2020/01/14 20:51:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |      ex07/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_print_combn.c               |
// | Allowed functions: |      ft_putchar                     |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию, выводящую все различные комбинации n чисел, по возрастанию.
//    > Create a function that displays all different combinations of n numbers by ascending order.
// 2. n должно быть таким, чтобы: 0 < n < 10. // n will be so that: 0 < n < 10.
// 3. Если n == 2, то вот ожидаемый вывод в консоль:
//      $>./a.out | cat -e
//      01, 02, 03, ..., 09, 12, ..., 79, 89$>
// 4. Вот как должен выглядеть прототип: void ft_print_combn(int n);

// https://pastebin.com/Fz4jwQbz

/* -------------------------------------------------------------------------- */
/* ft_putchar                                                                 */
/* -------------------------------------------------------------------------- */

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

/* -------------------------------------------------------------------------- */
/* ft_print_combn                                                             */
/* -------------------------------------------------------------------------- */

/*
** for this problem, it is important to know that
** - the first number of the suite is 01234...(n-1)
** - the last number of the suite is (9-(n-1))..789 = (10-n)..789
*/

/*
** print all digits of a number[]
*/
void    ft_print_number(int *p_tab, int p_nb_arr)
{
        int count;

        count = 0;
        while (count < p_nb_arr)
        {
            ft_putchar(p_tab[count] + 48);
            count++;
        }
}

/*
** print all the nexts numbers following the first of the suite
*/
void    ft_print_n_numbers(int* p_tab, int p_foc_indx, int p_nb_indx)
{
        int     count;

        while (1)
        {
            /*
            ** we focus on the index that is not sh last_number
            ** for example, 3789 ==> 9 isOk, 8isOk, 7isOk, 3isNotOk
            ** ==> focus on 3
            */
            while ((p_tab[p_foc_indx] == (10 + (p_foc_indx - p_nb_indx)))
                    && p_foc_indx >= 0)
            {
                p_foc_indx--;
            }

            /*
            ** if p_foc_indx is <0, that means that we wrote the last number
            ** of the suite and we stop the loop
            */
            if (p_foc_indx < 0)
                break;

            /* increment the digit at foc_index to get the next number */
            p_tab[p_foc_indx]++;

            /* focus on the next digit */
            count = p_foc_indx + 1;

            /*
            ** Setting the nexts digits to the value of previous digit, +1
            */
            while (count <= p_nb_indx)
            {
                p_tab[count] = p_tab[count - 1] + 1;
                count++;
            }

            /* reinit foc_index to last index for next loop turn */
            p_foc_indx = p_nb_indx - 1;

            /* printing the number generated */
            ft_putchar(',');
            ft_putchar(' ');
            ft_print_number(p_tab, p_nb_indx);
        }
}

void    ft_print_combn(int n)
{
        int     number[9];      /* Arr that contain all digits of the number */
        int     foc_indx;       /* Witch index of number we focus on */
        int     count;

        foc_indx = (n - 1); /* we focus on the last index of number = unity */

        /*
        ** We initialize our number with 0123456...(n-1) because it can
        ** mathematicaly only take this value
        */
        count = 0;
        while (count <= n)
        {
            number[count] = count;
            count++;
        }

        ft_print_number(number, n);         /* we print the first number */

        /*
        ** we print the next numbers with the nomenclature ", "
        */
        ft_print_n_numbers(number, foc_indx, n);
}