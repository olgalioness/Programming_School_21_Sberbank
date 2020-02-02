| 			         |	ex08	          |
| ------------------ | -------------------|
| Turn-in directory  | 	ex08/	      	  |
| Files to turn in   | 	b	          	  |

1. Создайте файл b (Create a file b), так чтобы:
   > Create a file b, so that:

```
$> cat –e a // -e – показывает символ $ в конце каждой строке (не перепутать, ‘a’ это из скаченного архива с Intra)
STARWARS$
Episode IV, A NEW HOPE It is a period of civil war.$
$
Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.$
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the DEATH STAR,$
an armored space station with enough power to destroy an entire planet.$
$
Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of the stolen plans that can save her people and restore freedom to the galaxy...$
$
```

```
%>diff a b > sw.diff
```

---

## Материал: ##

* [man patch](http://man7.org/linux/man-pages/man1/patch.1.html)
* https://www.ylsoftware.com/news/243

---

## Решение: ##

Решение:
1.	Нам надо воссоздать файл b исходя из файла a. Узнать разницу мы можем в патче sw.diff
2.	Скачаем архив с файлами со страницы проекта на Intra и распакуем файлы в /ex09:
	/. – папка со скрытыми файлами?
	a – файл с текстом 1 версии
	sw.diff – файл полученный при сравнении (diff a b > sw.diff) двух файлов a и b
3.	Открыв файл sw.diff мы увидим следующее:
```
1,2c1,8 // 1-2 строки файла [a] изменены (c) с 1-8 строки файла [b]
1.	< STARWARS
2.	< Episode IV, A NEW HOPE It is a period of civil war.
---
1.	> Episode V, A NEW H0PE It is a period of civil war
2.	> Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.
3.	> During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet.
4.	>
5.	>
6.	> Pursued by the Empire's sinister agents,
7.	> Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie..
8.	>
4,6d9 // 4-6 строки файла [a] удалена (d) с 9 строки файла [b]
9.	< Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.
10.	< During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the DEATH STAR,
11.	< an armored space station with enough power to destroy an entire planet.
8d10 // 8 строка файла [а] удалена (d) с 10 строке файла [b]
12.	< Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of the stolen plans that can save her people and restore freedom to the galaxy...
```
4. Получение обновленного файла [b] из оригинального [a] путем применения патча sw.diff:
`patch <original file> -i patchfile.patch -o <updated file>`
```
$> patch a –i sw.diff –o b // шаг 4
```