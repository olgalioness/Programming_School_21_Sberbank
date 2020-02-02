/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:04:03 by marvin            #+#    #+#             */
/*   Updated: 2020/01/15 16:04:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |      ex10/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_strcapitalize.c             |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию, которая делает заглавной первую букву каждого слова, а другие буквы преобразует в строчные.
//    > Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase.
// 2. Слово - это строка буквенно-цифровых символов.
//    > A word is a string of alphanumeric characters.
// 3. Here’s how it should be prototyped: char *ft_strcapitalize(char *str);
// 4. It should return str.
// 5. For example: salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
//    Becomes:     Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un

/* -------------------------------------------------------------------------- */
/* Материал                                                                   */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* ft_strlowcase                                                              */
/* -------------------------------------------------------------------------- */
int		is_alphanumeric(char c)
{
	return ((c >= '0' && c <= '9')
			|| (c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z'));
}

char	to_lower(char c)
{
	return (c >= 'A' && c <= 'Z') ? (c + 32) : c; // c = A ? Если да, то (c) + 32 = a, если нет, то (c)
}

char	to_upper(char c)
{
	return (c >= 'a' && c <= 'z') ? (c - 32) : c;
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && is_alphanumeric(str[i + j]))		// Проверяем текущую позицию на \0 и наличие is_alpha/numeric
		{																// каждый раз, когда будет новый alphanumeric, создается новый массив
			str[i + j] = j == 0 ? to_upper(str[i + j]) : to_lower(str[i + j]);
		 // Проверяем, это первый символ или нет: (str[i.0 + j.0 => i.0] = j.0) == 0, если первый то to_upper, если нет, то to_lower
		 // в j мы будем записывать измененные значения и потом отдовать их i
			j++;	// едем дальше
		}
		i += j == 0 ? 1 : j; // если i после всех условий цикла, проверяем на управляющие символы \n \r
	}// i.5=0 = i.0 + j.0 == 0-null да(i.1 - start of heading, игнорируем), нет(i.5 = j.0 → i.0 и возвращаемся к циклу, пока i != \0 )
	return (str);
}