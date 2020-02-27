/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 20:13:08 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 12:31:36 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{

	if (*s2 != '*')
	{
		if (*s1 == 0)
			return (*s1 == *s2); 
		else 
			return (*s1 == *s2) ? (match(s1 + 1, s2 + 1)) : (0); }
	else 
	{
		if (*s1 == 0)
			return (match(s1, s2 + 1));
		else
			return (match(s1, s2 + 1) || match(s1 + 1, s2));
	}	
}

// DEV 

int g_i = 0;

void	test(char *s1, char *s2, int exp)
{
	if (match(s1, s2) == exp)
		printf("Test %d ok\n\n", g_i++);	
	else 
		printf("Test %d fail : match('%s', '%s') = %d, but %d expected\n\n", g_i++, s1, s2, match(s1, s2), exp);
}

int		my_test()
{
	test("dragonfruit", "dr*n*uit", 1);
	test("muda-muda, Adam!", "m*da", 0);
	test("muda-muda, Adam", "*dat*", 0);
	test("dragonfruit", "drn*uit", 0);
	test("muda-muda, Adam", "m*daa", 0);
	test("muda-muda, Adam", "da*", 0);
	return (0);
}

void TEST(int a, int b)
{
    if (a == b)
        printf("ok\n");
    else
        printf("!!!\n");
}
int big_test()
{
    int m = 0;
    m = match("trsdhgjvbkgtghtesfght.c", "*gh*.c");
    printf("%d", m);
    TEST(match("asdf", "asdf"), 1);
    TEST(match("", ""), 1);
    TEST(match("a", "a"), 1);
    TEST(match("aa", "aa"), 1);
    TEST(match("aaa", "aaa"), 1);
    printf("|2|");
    TEST(match("", "asdf"), 0);
    TEST(match("asdf", ""), 0);
    TEST(match("asdf", "a"), 0);
    TEST(match("a", "asdf"), 0);
    TEST(match("asdf", "asde"), 0);
    printf("|3|");
    TEST(match("asde", "asdf"), 0);
    TEST(match("asdf", "asdff"), 0);
    TEST(match("asdff", "asdf"), 0);
    TEST(match("aasdf", "asdf"), 0);
    TEST(match("asdf", "aasdf"), 0);
    printf("|4|");
    TEST(match("", "*"), 1);
    TEST(match("a", "*"), 1);
    TEST(match("aa", "*"), 1);
    TEST(match("asdf", "*"), 1);
    TEST(match("asdfasdf", "*"), 1);
    printf("|5|");
    TEST(match("asdf", "a*"), 1);
    TEST(match("asdfasdf", "a*"), 1);
    TEST(match("a", "a*"), 1);
    TEST(match("aa", "a*"), 1);
    TEST(match("aasdf", "a*"), 1);
    printf("|6|");
    TEST(match("", "a*"), 0);
    TEST(match("f", "a*"), 0);
    TEST(match("fdsa", "a*"), 0);
    TEST(match("faaaa", "a*"), 0);
    TEST(match("faaasdf", "a*"), 0);
    printf("|7|");
    TEST(match("fdsa", "*a"), 1);
    TEST(match("a", "*a"), 1);
    TEST(match("aa", "*a"), 1);
    TEST(match("fdsaaaaaaafdsa", "*a"), 1);
    TEST(match("dfsaaaaaaaaaaaa", "*a"), 1);
    printf("|8|");
    TEST(match("", "*a"), 0);
    TEST(match("f", "*a"), 0);
    TEST(match("asdf", "*a"), 0);
    TEST(match("aaaaaf", "*a"), 0);
    TEST(match("fdsaaaaf", "*a"), 0);
    printf("|9|");
    TEST(match("abc", "abc*"), 1);
    TEST(match("abcdef", "abc*"), 1);
    TEST(match("abccccccc", "abc*"), 1);
    TEST(match("abcabc", "abc*"), 1);
    TEST(match("abcdabcdabc", "abc*"), 1);
    printf("|10|");
    TEST(match("", "abc*"), 0);
    TEST(match("f", "abc*"), 0);
    TEST(match("abbc", "abc*"), 0);
    TEST(match("ab", "abc*"), 0);
    TEST(match("abb", "abc*"), 0);
    // 50
    printf("|11|");
    TEST(match("abc", "*abc"), 1);
    TEST(match("defabc", "*abc"), 1);
    TEST(match("aaaaaaabc", "*abc"), 1);
    TEST(match("abcabc", "*abc"), 1);
    TEST(match("abcdabcdabc", "*abc"), 1);
    printf("|12|");
    TEST(match("", "*abc"), 0);
    TEST(match("f", "*abc"), 0);
    TEST(match("abbc", "*abc"), 0);
    TEST(match("ab", "*abc"), 0);
    TEST(match("abb", "*abc"), 0);
    printf("|13|");
    TEST(match("a", "*a*"), 1);
    TEST(match("aaa", "*a*"), 1);
    TEST(match("aaaaaaabc", "*a*"), 1);
    TEST(match("bcabc", "*a*"), 1);
    TEST(match("sdfa", "*a*"), 1);
    printf("|14|");
    TEST(match("", "*a*"), 0);
    TEST(match("f", "*a*"), 0);
    TEST(match("bcd", "*a*"), 0);
    TEST(match("bb", "*a*"), 0);
    TEST(match("ASDF", "*a*"), 0);
    printf("|15|");
    TEST(match("ab", "*ab*"), 1);
    TEST(match("abcd", "*ab*"), 1);
    TEST(match("efabcd", "*ab*"), 1);
    TEST(match("ababab", "*ab*"), 1);
    TEST(match("bab", "*ab*"), 1);
    printf("|16|");
    TEST(match("asdf", "*ab*"), 0);
    TEST(match("ba", "*ab*"), 0);
    TEST(match("", "*ab*"), 0);
    TEST(match("f", "*ab*"), 0);
    TEST(match("bbbbbbaaaaa", "*ab*"), 0);
    printf("|17|");
    TEST(match("", "**"), 1);
    TEST(match("a", "**"), 1);
    TEST(match("ab", "**"), 1);
    TEST(match("abc", "**"), 1);
    TEST(match("abcd", "**"), 1);
    printf("|18|");
    TEST(match("a", "a**"), 1);
    TEST(match("ab", "a**"), 1);
    TEST(match("abc", "a**"), 1);
    TEST(match("aaaaaa", "a**"), 1);
    TEST(match("asdfaaaaa", "a**"), 1);
    printf("|19|");
    TEST(match("", "a**"), 0);
    TEST(match("f", "a**"), 0);
    TEST(match("fa", "a**"), 0);
    TEST(match("faaaaaaa", "a**"), 0);
    TEST(match("fafdsafdsa", "a**"), 0);
    printf("|20|");
    TEST(match("asdf", "*a**"), 1);
    TEST(match("sdfa", "*a**"), 1);
    TEST(match("faffff", "*a**"), 1);
    TEST(match("fdsaasdf", "*a**"), 1);
    TEST(match("aaaaaaa", "*a**"), 1);
    // 100
    printf("|21|");
    TEST(match("", "*a**"), 0);
    TEST(match("qwerqwer", "*a**"), 0);
    TEST(match("bbbbbb", "*a**"), 0);
    TEST(match("c", "*a**"), 0);
    TEST(match("AAAAAAAAAA", "*a**"), 0);
    printf("|22|");
    TEST(match("main.c", "*.c"), 1);
    TEST(match("main.c.c", "*.c"), 1);
    TEST(match("main.h", "*.c"), 0);
    TEST(match("main.cc", "*.c"), 0);
    TEST(match("main.c", "*.*"), 1);
    printf("|23|");
    TEST(match("test.main.c", "test.*.c"), 1);
    TEST(match("test..c", "test.*.c"), 1);
    TEST(match("test.main.h", "test.*.c"), 0);
    TEST(match("main.c", "test.*.c"), 0);
    TEST(match("test.c", "test.*.c"), 0);
    printf("|24|");
    TEST(match("abcde", "a*c*e"), 1);
    TEST(match("abcde", "*b*d*"), 1);
    TEST(match("abcde", "a*e*c"), 0);
    TEST(match("abcde", "*d*c*"), 0);
    TEST(match("abcde", "a*d*d"), 0);
    printf("|25|");
    TEST(match("*****a******", "*a*"), 1);
    TEST(match("**", "*"), 1);
    TEST(match("************a*b*", "********b"), 0);
    TEST(match("a****a", "a*"), 1);
    TEST(match("***b**a", "*ba*"), 0);
    return 0;
}

int		main()
{
	my_test();
	big_test();
}
