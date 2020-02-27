char **ft_split_whitespaces(char *str);

void ft_print_words_tables(char **tab);

#include <stdio.h>
#include <stdlib.h>

static int i = 0;

void	test(char *str)
{
	printf("TEST NO. %d\n", ++i);
	char **t = ft_split_whitespaces(str);
	ft_print_words_tables(t);
	printf("END OF TEST\n\n");
	
	for (int i = 0; t[i] != NULL; i++)
		free(t[i]);
	free(t);
}

int 	main()
{
	test("\n dciysbio             ");
	test("abcd ed \t\t\t hello\n");
	test("");
	test("\n");
	test("\t\n ");
	test("word");
	test("\tword");
	test("word\t");
	test("\tword1\nword2 ");
	test("     \t\t\tword       \t\t\t");
}
