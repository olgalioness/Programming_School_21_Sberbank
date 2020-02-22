
0-0 Assignment name  : aff_a   |    Expected files   : aff_a.c   |    Allowed functions: write
Write a program that takes a string, and displays the first 'a' character it encounters in it, followed by a newline. If there are no 'a' characters in the string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline. 
Напишите программу, которая берет строку и отображает первый символ 'a', с которым она сталкивается, за которым следует новая строка. Если в строке нет символов "a", программа просто записывает новую строку. Если количество параметров отсутствует
1, программа отображает "a", за которым следует новая строка.
Example:
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$


0-0 Assignment name  : ft_countdown   |    Expected files: ft_countdown.c  |  Allowed functions: write
Write a program that displays all digits in descending order, followed by a newline.
Example:
$> ./ft_countdown | cat -e
9876543210$
$>


0-0 Assignment name: ft_print_numbers  |  Expected files: ft_print_numbers.c  | Allowed functions: write
Write a function that displays all digits in ascending order.
Your function must be declared as follows:
void    ft_print_numbers(void);


0-0 Assignment name  : hello   |    Expected files   : hello.c    |     Allowed functions: write
Write a program that displays "Hello World!" followed by a \n.
Example:
$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>


0-0 Assignment name  : maff_alpha   |    Expected files   : maff_alpha.c   |    Allowed functions: write
Write a program that displays the alphabet, with even letters in uppercase, andodd letters in lowercase, followed by a newline.
Example:
$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$


0-1 Assignment name  : aff_first_param   |    Expected files: aff_first_param.c  |  Allowed functions: write
Write a program that takes strings as arguments, and displays its first argument followed by a \n.
If the number of arguments is less than 1, the program displays \n.
Example:
$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$

0-1 Assignment name  : aff_last_param   |    Expected files: aff_last_param.c  | Allowed functions: write
Write a program that takes strings as arguments, and displays its last argument followed by a newline.
If the number of arguments is less than 1, the program displays a newline.
Examples:
$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$
0-1 Assignment name  : maff_revalpha   |    Expected files   : maff_revalpha.c   |    Allowed functions: write
Write a program that displays the alphabet in reverse, with even letters in uppercase, and odd letters in lowercase, followed by a newline.
Example:
$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$

0-1 Assignment name  : only_a   |    Expected files   : only_a.c   |    Allowed functions: write
Write a program that displays a 'a' character on the standard output.

0-1 Assignment name  : only_z   |    Expected files   : only_z.c   |    Allowed functions: write
Write a program that displays a 'z' character on the standard output.

0-2 Assignment name  : aff_z  |  Expected files   : aff_z.c  |    Allowed functions: write
Write a program that takes a string, and displays the first 'z' character it encounters in it, followed by a newline. If there are no 'z' characters in the string, the program writes 'z' followed by a newline. If the number of parameters is not 1, the program displays 'z' followed by a newline.
Example:
$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$
1-0 Assignment name  : ft_strcpy | Expected files   : ft_strcpy.c | Allowed functions: 
Reproduce the behavior of the function strcpy (man strcpy).
Your function must be declared as follows:
char    *ft_strcpy(char *s1, char *s2);
1-0 Assignment name  : ft_strlen | Expected files   : ft_strlen.c | Allowed functions:
Write a function that returns the length of a string.
Your function must be declared as follows:
int    ft_strlen(char *str);
1-0 Assignment name  : repeat_alpha | Expected files   : repeat_alpha.c | Allowed functions: write
Write a program called repeat_alpha that takes a string and display it repeating each alphabetical character as many times as its alphabetical index, followed by a newline.
'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
Case remains unchanged.
If the number of arguments is not 1, just display a newline. Examples:
$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
1-0 Assignment name: search_and_replace  | Expected files: search_and_replace.c  | 
Allowed functions: write, exit
Write a program called search_and_replace that takes 3 arguments, the first arguments is a string in which to replace a letter (2nd argument) by another one (3rd argument).
If the number of arguments is not 3, just display a newline.
If the second argument is not contained in the first one (the string) then the program simply rewrites the string followed by a newline.
Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $

1-0 Assignment name  : ulstr | Expected files   : ulstr.c | Allowed functions: write
Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.
You must display the result followed by a '\n'.
If the number of arguments is not 1, the program displays '\n'. Examples :
$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
1-1 Assignment name  : rot_13 | Expected files   : rot_13.c | Allowed functions: write
Write a program that takes a string and displays it, replacing each of its letters by the letter 13 spaces ahead in alphabetical order.
'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
The output will be followed by a newline.
If the number of arguments is not 1, the program displays a newline. Example:
$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$               $>
1-2 Assignment name  : first_word | Expected files   : first_word.c | Allowed functions: write
Write a program that takes a string and displays its first word, followed by a newline.
A word is a section of string delimited by spaces/tabs or by the start/end of the string.
If the number of parameters is not 1, or if there are no words, simply display a newline.
Examples:
$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

1-2 Assignment name  : ft_swap | Expected files   : ft_swap.c | Allowed functions: 
Write a function that swaps the contents of two integers the adresses of which are passed as parameters.
Your function must be declared as follows:
void    ft_swap(int *a, int *b);

1-3 Assignment name  : rev_print | Expected files   : rev_print.c  |  Allowed functions: write
Write a program that takes a string, and displays the string in reversefollowed by a newline.
If the number of parameters is not 1, the program displays a newline.
Examples:
$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
1-4 Assignment name  : rotone | Expected files   : rotone.c | Allowed functions: write
Write a program that takes a string and displays it, replacing each of its letters by the next one in alphabetical order.
'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.
The output will be followed by a \n.
If the number of arguments is not 1, the program displays \n.
Example:
$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
Assignment name  : ft_putstr |  Expected files   : ft_putstr.c | Allowed functions: write
Write a function that displays a string on the standard output.
The pointer passed to the function contains the address of the string's first character.
Your function must be declared as follows:
void    ft_putstr(char *str);

2-0 Assignment name  : ft_atoi | Expected files   : ft_atoi.c | Allowed functions: None
Write a function that converts the string argument str to an integer (type int) and returns it.
It works much like the standard atoi(const char *str) function, see the man.
Your function must be declared as follows:
int    ft_atoi(const char *str);

2-0 Assignment name  : ft_strdup | Expected files   : ft_strdup.c | Allowed functions: malloc
Reproduce the behavior of the function strdup (man strdup).
Your function must be declared as follows:
char    *ft_strdup(char *src);

2-0 Assignment name  : inter | Expected files   : inter.c | Allowed functions: write
Write a program that takes two strings and displays, without doubles, the characters that appear in both strings, in the order they appear in the first one.
The display will be followed by a \n.
If the number of arguments is not 2, the program displays \n.
Examples:
$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
2-0 Assignment name  : last_word | Expected files   : last_word.c | Allowed functions: write
Write a program that takes a string and displays its last word followed by a \n.
A word is a section of string delimited by spaces/tabs or by the start/end of the string.
If the number of parameters is not 1, or there are no words, display a newline.
Example:
$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

2-0 Assignment name  : reverse_bits | Expected files   : reverse_bits.c | Allowed functions:
Write a function that takes a byte, reverses it, bit by bit (like the example) and returns the result.
Your function must be declared as follows:
unsigned char    reverse_bits(unsigned char octet);
Example:
  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010
2-0 Assignment name  : swap_bits | Expected files   : swap_bits.c | Allowed functions:
Write a function that takes a byte, swaps its halves (like the example) and returns the result.
Your function must be declared as follows:
unsigned char    swap_bits(unsigned char octet);
Example:
  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100


2-0 Assignment name  : union | Expected files   : union.c | Allowed functions: write
Write a program that takes two strings and displays, without doubles, the characters that appear in either one of the strings.
The display will be in the order characters appear in the command line, and will be followed by a \n.
If the number of arguments is not 2, the program displays \n.
Example:
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
2-1 Assignment name  : alpha_mirror | Expected files   : alpha_mirror.c |  Allowed functions: write
Write a program called alpha_mirror that takes a string and displays this string after replacing each alphabetical character by the opposite alphabetical character, followed by a newline.
'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'
and so on.
Case is not changed.
If the number of arguments is not 1, display only a newline.
Examples:
$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
2-1 Assignment name  : max |  Expected files   : max.c | Allowed functions:
Write the following function:
int        max(int* tab, unsigned int len);
The first parameter is an array of int, the second is the number of elements in the array.
The function returns the largest number found in the array.
If the array is empty, the function returns 0.

2-3 Assignment name  : wdmatch | Expected files   : wdmatch.c | Allowed functions: write
Write a program that takes two strings and checks whether it's possible to write the first string with characters from the second string, while respecting the order in which these characters appear in the second string.
If it's possible, the program displays the string, followed by a \n, otherwise it simply displays a \n.
If the number of arguments is not 2, the program displays a \n.
Examples:
$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
2-4 Assignment name  : do_op | Expected files   : *.c, *.h |  Allowed functions: atoi, printf, write
Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %
The program must display the result of the requested arithmetic operation, followed by a newline. If the number of parameters is not 3, the program just displays a newline.
You can assume the string have no mistakes or extraneous characters. Negative numbers, in input or output, will have one and only one leading '-'. The result of the operation fits in an int.
Examples:
$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$

2-4 Assignment name  : print_bits | Expected files   : print_bits.c | Allowed functions: write
Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.
Your function must be declared as follows:
void    print_bits(unsigned char octet);
Example, if you pass 2 to print_bits, it will print "00000010"
2-5 Assignment name  : ft_strcmp | Expected files   : ft_strcmp.c | Allowed functions:
Reproduce the behavior of the function strcmp (man strcmp).
Your function must be declared as follows:
int    ft_strcmp(char *s1, char *s2);

2-5 Assignment name  : ft_strrev | Expected files   : ft_strrev.c | Allowed functions:
Write a function that reverses (in-place) a string.
It must return its parameter.
Your function must be declared as follows:
char    *ft_strrev(char *str);

2-6 Assignment name  : is_power_of_2 |  Expected files   : is_power_of_2.c |  Allowed functions: None
Write a function that determines if a given number is a power of 2.
This function returns 1 if the given number is a power of 2, otherwise it returns 0.
Your function must be declared as follows:
int        is_power_of_2(unsigned int n);

3-0 Assignment name: add_prime_sum | Expected files : add_prime_sum.c | Allowed functions: write, exit
Write a program that takes a positive integer as argument and displays the sum of all prime numbers inferior or equal to it followed by a newline.
If the number of arguments is not 1, or the argument is not a positive number, just display 0 followed by a newline.
Yes, the examples are right.
Examples:
$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>

3-0 Assignment name  : epur_str | Expected files   : epur_str.c | Allowed functions: write
Write a program that takes a string, and displays this string with exactly one space between words, with no spaces or tabs either at the beginning or the end, followed by a \n.
A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string.
If the number of arguments is not 1, or if there are no words to display, the program displays \n.
Example:
$> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
vous voyez c'est facile d'afficher la meme chose$
$> ./epur_str " seulement          la c'est      plus dur " | cat -e
seulement la c'est plus dur$
$> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./epur_str "" | cat -e
$
$>
3-0 Assignment name  : ft_list_size | Expected files   : ft_list_size.c, ft_list.h | Allowed functions:
Write a function that returns the number of elements in the linked list that's passed to it.
It must be declared as follows:
int    ft_list_size(t_list *begin_list);
You must use the following structure, and turn it in as a file called
ft_list.h:
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;




3-0 Assignment name  : ft_rrange | Expected files   : ft_rrange.c | Allowed functions: malloc
Write the following function:
int     *ft_rrange(int start, int end);
It must allocate (with malloc()) an array of integers, fill it with consecutive values that begin at end and end at start (Including start and end !), then return a pointer to the first value of the array.
Examples:
- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.



3-0 Assignment name  : hidenp | Expected files   : hidenp.c  | Allowed functions: write
Write a program named hidenp that takes two strings and displays 1 followed by a newline if the first string is hidden in the second one, otherwise displays 0 followed by a newline.
Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to find each character from s1 in s2, in the same order as they appear in s1. Also, the empty string is hidden in any string.
If the number of parameters is not 2, the program displays a newline.
Examples :
$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>



3-0 Assignment name  : pgcd | Expected files   : pgcd.c | Allowed functions: printf, atoi, malloc, free
Write a program that takes two strings representing two strictly positive integers that fit in an int.
Display their highest common denominator followed by a newline (It's always a strictly positive integer).
If the number of parameters is not 2, display a newline.
Examples:
$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
3-0 Assignment name  : print_hex | Expected files   : print_hex.c | Allowed functions: write
Write a program that takes a positive (or zero) number expressed in base 10, and displays it in base 16 (lowercase letters) followed by a newline.
If the number of parameters is not 1, the program displays a newline.
Examples:
$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
3-0 Assignment name  : rstr_capitalizer | Expected files   : rstr_capitalizer.c | Allowed functions: write
Write a program that takes one or more strings and, for each argument, puts the last character of each word (if it's a letter) in uppercase and the rest in lowercase, then displays the result followed by a \n.
A word is a section of string delimited by spaces/tabs or the start/end of the string. If a word has a single letter, it must be capitalized.
If there are no parameters, display \n.
Examples:
$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "Premier PETIT TesT" | cat -e
premieR petiT tesT$
$> ./rstr_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
deuxiemE tesT uN peU moinS  facilE$
   attentioN c'esT paS duR quanD memE$
alleR uN dernieR 0123456789pouR lA routE    E $
$>


3-1 Assignment name  : expand_str | Expected files   : expand_str.c | Allowed functions: write
Write a program that takes a string and displays it with exactly three spaces between each word, with no spaces or tabs either at the beginning or the end, followed by a newline.
A word is a section of string delimited either by spaces/tabs, or by the start/end of the string.
If the number of parameters is not 1, or if there are no words, simply display a newline.
Examples:
$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>


3-1 Assignment name  : tab_mult | Expected files   : tab_mult.c | Allowed functions: write
Write a program that displays a number's multiplication table.
The parameter will always be a strictly positive number that fits in an int, and said number times 9 will also fit in an int.
If there are no parameters, the program displays \n.
Examples:
$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
3-2 Assignment name  : ft_atoi_base | Expected files   : ft_atoi_base.c | Allowed functions: None
Write a function that converts the string argument str (base N <= 16) to an integer (base 10) and returns it.
The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".
Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
Minus signs ('-') are interpreted only if they are the first character of the string.
Your function must be declared as follows:
int    ft_atoi_base(const char *str, int str_base);

3-3 Assignment name  : ft_range | Expected files   : ft_range.c | Allowed functions: malloc
Write the following function:
int     *ft_range(int start, int end);
It must allocate (with malloc()) an array of integers, fill it with consecutive values that begin at start and end at end (Including start and end !), then return a pointer to the first value of the array.
Examples:
- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.


3-4 Assignment name  : lcm | Expected files   : lcm.c | Allowed functions:
Write a function who takes two unsigned int as parameters and returns the  computed LCM of those parameters.
LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive integer divisible by the both integers.
A LCM can be calculated in two ways:
- You can calculate every multiples of each integers until you have a common multiple other than 0
- You can use the HCF (Highest Common Factor) of these two integers and  calculate as follows:
    LCM(x, y) = | x * y | / HCF(x, y)  
  | x * y | means "Absolute value of the product of x by y"
If at least one integer is null, LCM is equal to 0.
Your function must be prototyped as follows:
  unsigned int    lcm(unsigned int a, unsigned int b);

3-4 Assignment name  : paramsum | Expected files   : paramsum.c | Allowed functions: write
Write a program that displays the number of arguments passed to it, followed bya newline.
If there are no arguments, just display a 0 followed by a newline.
Example:
$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>

3-4 Assignment name  : str_capitalizer | Expected files   : str_capitalizer.c | Allowed functions: write
Write a program that takes one or several strings and, for each argument, capitalizes the first character of each word (If it's a letter, obviously), puts the rest in lowercase, and displays the result on the standard output, followed by a \n.
A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string. If a word only has one letter, it must becapitalized.
If there are no arguments, the progam must display \n.
Example:
$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "Premier PETIT TesT" | cat -e
Premier Petit Test$
$> ./str_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
Deuxieme Test Un Peu Moins  Facile$
   Attention C'est Pas Dur Quand Meme$
Aller Un Dernier 0123456789pour La Route    E $
$>

