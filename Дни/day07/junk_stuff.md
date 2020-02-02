## help ##
* [42test + repos_ass](https://github.com/dayfine/Piscine_42)
* [42test + repos_ass](https://github.com/davidcharlat/j07test/blob/master/ft_range.test.c)
* [42test + repos_per](https://github.com/moonsonu/Piscine_C/tree/022f41292aa12766fcb4c7795eb8c7825d2d64b2)
* [42test + stup_fork](https://github.com/alexdrean/42_norminette)
* [42test + stup_fork](https://github.com/yyang42/moulitest)

* [libft_описание1](https://github.com/pbie42/libft42commented)
* [libft_описание2](https://github.com/PofigistVip/Libft/wiki/Manual-RUS)
* [libft_описание3](https://github.com/moonlightcrystal/Libft/blob/2252eba4c7d5da02f8deea52da2eb3c0782a329b/lib_by_chamomilla/Doc)
* [libft_описание4_ru](https://github.com/kirillwinter/filler/tree/017f08dc4d56e265b349725e0da167cebbe8ab25/libft/srcs)
* [libft_описание5_ru](https://github.com/sCube207/school42/blob/c46fc30f828d7668386c0710b5076a5d70b4b052/KirALib/README%20copy.txt)
* [libft_описание6_en](https://github.com/gcamerli/libft/wiki/Part-1#ft_strlcat)
* [libft_описание7_en](https://github.com/Chr0nos/libft)

* [repos:5+ h920032](https://github.com/h920032/42-picine-C/tree/8bd3120b732f5c29f4c4ba1a11d17bb7e0ebbd6a)
* [repos:5+ jody](https://github.com/jody-frankowski/42/tree/4a05f588e1949676ed245b346b50e227f97c2855/piscine)
* [repos:5+](https://github.com/fwuensche/42-piscine-c)
* [repos: jraleman](https://github.com/jraleman/42_Piscine-C)
* [repos: sebastiencs - done 100%](https://github.com/sebastiencs/piscine_42)
* [repos: uael](https://github.com/uael/42piscine)
* [repos: dovran - русский репоз](https://github.com/Dovran-Annakuliev/Piscine-C)
* [repos: PDillis](https://github.com/PDillis/42SiliconValley)
* [repos: oulhafiane](https://github.com/oulhafiane/1337-42-Pool)
* [repos: bclaudios](https://github.com/bclaudios/42-Pool_C/tree/747f4149acb430c63ee1a392abe301946b8a9c97)

* [заметки](https://github.com/HalimHamidov/C-Exam-Alone-In-The-Dark---Beginner/tree/656739928e58aece3caba00e04daf88e16b8455f)

---------

# Trash #
* [заметки: anononamemo](https://github.com/anononamemo/42_Piscine_Reloaded/blob/master/README.md)
* [заметки: tsetsefly](https://github.com/tsetsefly/42-piscine_self_study/blob/master/d05/README.md)

* [materlas1](https://github.com/SagarShah77/42_piscine)
* [materlas2](https://github.com/toymechqm/JanPiscine/tree/e8f4702ca33e0a6f0c9fc3977f52fd7975b89b00/PDF)

* [blog: pmila jj](https://42-21-school.blogspot.com/)
* [blog: Фрая jj](https://win-not-lose.blogspot.com/search?updated-max=2019-01-29T08:23:00%2B03:00&max-results=7&start=14&by-date=false)
* [blog: 42 inside](https://getawayposts.com/category/42-piscine-insider-day-to-day-chronics)
* [blog: alexkassil](https://alexkassil.github.io/)
* [blog: theodora](https://vk.com/theocoding)

# Sort #
Как тестировать свой код, чтобы не править его перед отправкой
Если тебе надоело в каждую свою функцию постоянно добавлять реализацию ft_putchar и main,
по несколько раз править и компилировать до тех пор, пока не заработает,
а потом вычищать это перед git push, то можешь сделать так же, как и я.
В рабочем каталоге я создал файл test.c со следующим содержанием:

#include <unistd.h>

int ft_putchar( char c )
{
    // Здесь моя реализация ft_putchar (почти такая же, как и в видео к Day02)
}

#include "XXXXX" // XXXXX надо заменить на имя файла с твоей функцией, которую и надо тестировать, например #include "ex04/ft_print_combo.c"

int main( void )
{
    YYYYY(); // Подставь вместо YYYYY имя функции тестируемой, например ft_print_comb();
    return (0);
}

Компилирую я это командой: gcc -Wall -Wextra -Werror -o test test.c,
если есть ошибки, то редактирую vim ex04/ft_print_comb.c, и так до тех пор, пока не получу рабочую функцию.
Потом захожу в каталог с функцией, проверяю на соответствие Norm (norminette),
когда ошибок не будет - проверяю работоспособность ещё раз, и файл с функцией можно отправлять на vogsphere (в git).
А для того, чтобы файлы тестов не попадали в git, у меня в корневом .gitignore записано test*