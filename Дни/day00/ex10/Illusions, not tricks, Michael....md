    | 			   |	ex10              |
| ------------------ | -------------------|
| Illusions, not tricks, Michael...       |
| Turn-in directory  | 	ex10/             |
| Files to turn in   | 	ft_magic          |

1. Создайте magic файл с названием ‘ft_magic’, который будет отформатирован так, чтобы его можно было распознать (42 file type : построен с string (magic:type:string) “42” (magic:test), на 42nd byte (magic:offset)).
   > Create a magic file called ft_magic that will be formatted appropriately to detect files of 42 file type, built with a "42" string at the 42nd byte.

* man file

---

## Матеиал: ##

* http://man7.org/linux/man-pages/man1/file.1.html
* http://docs.kpda.ru/index.jsp?topic=%2Fru.kpda.doc.neutrino_utilities_ru%2Ff%2Ffile.html&cp=0_2_8_6
* http://docs.kpda.ru/index.jsp?topic=%2Fru.kpda.doc.neutrino_utilities_ru%2Fm%2Fmagic.html
* https://it.wikireading.ru/13739

---

## Решение: ##

1. Есть формат записи данных в магические файлы, через tab: `offset	type:string 	test	message`. ты пишешь в файл `42  string      42    42 file`
      *	offset – specifies the offset, in bytes, into the file of the data which is to be tested.
      *	type – the type of the data to be tested (see here for a list of all possible values).
      *	test – the value to be compared with the value from the file.
      *	message – the message to be printed if the comparison succeeds.
2. Дальше компилируем в магический файл (m switch to specify the source file) - `file –C –m <file>`
   * -C --compile. Write a magic.mgc output file that contains a pre-parsed version of the magic file or directory. Вывести файл определения типов magic после синтаксического анализа в целях проверки. Обычно используется вместе с опцией -m для отладки нового файла определения типов перед его установкой.
   * -m, --magic-file magicfiles Specify an alternate list of files and directories containing magic. This can be a single item, or a colon-separated list. If a compiled magic file is found alongside a file or directory, it will be used instead. Альтернативный файл "магических" чисел. По умолчанию используется файл /usr/share/misc/magic.
3. дальше создаёшь файл, который будешь проверять, который удовлетворяет условиям (с текстом внутри, где у нас будет офсет из 42 символов и тестовое значние 42, на котором будем тестить наш magic файл):
   `echo "12345678901234567890123456789012345678901242" > 42_magic_test`
4. проверяем файл по магическому файлу - `file –m <magic file>  тестовый_файл`
