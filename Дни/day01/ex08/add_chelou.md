| 	             |	ex08	          |
| ------------------ | -------------------|
| Turn-in directory  | 	ex08/	      	  |
| Files to turn in   |  add_chelou.sh     |

1. Напишите командную строку, которая будет получать числа из переменных FT_NBR1, на базе ‘\”?! , и FT_NBR2, на базе mrdoc, и выводить сумму этих двух на базе gtaio luSnemf.
   > Write a command line that takes numbers from variables FT_NBR1, in ’\"?! base, and FT_NBR2, in mrdoc base, and displays the sum of both in gtaio luSnemf base.

* Example 1:
```
FT_NBR1=\'?"\"'\
FT_NBR2=rcrdmddd
```
* The sum is:
```
Salut
```

* Example 2:
```
FT_NBR1=\"\"!\"\"!\"\"!\"\"!\"\"!\"\"
FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
```
* The sum is:
```
Segmentation fault
```

---

## Решение: ##

```bash
#!/bin/bash
echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\"?!" 01234 | tr "mrdoc" 01234 | xargs echo "ibase=5; obase=13;" | bc | tr 0123456789ABC "gtaio luSnemf"
```

1. Берем переменные окружения FT_NBR1 и FT_NBR2 - echo $FT_NBR1 + $FT_NBR2.
2. Нужно получить числа из переменных:
```
FT_NBR1=\’?”\”’\    на базе		’\"?!
FT_NBR2= rcrdmddd	на базе		mrdoc
```

Алфавит систем счисления начинается начинается с 0
```
Основание   Назначение          Алфавит
q = 2       Двоичная            0, 1
q = 3       Троичная            0, 1, 2
q = 8       Восьмиричная        0, 1, 2, 3, 4, 5, 6, 7
q = 16      Шестнадцатеричная   0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
```
т.к. не уточняется, какая именно система счисления нужна (там просто numbers), то начинаем с 0. Получаем 01234 (т.к. базы из 5 символов) – 5 значную систему счсисления, где *базис ОСНОВАНИЯ системы счисления и там и там является 5*.

```
Переменная \’?”\”’\ (преобразуем в 01234 на базе ’\"?!)
echo \’?”\”’\   |   tr "\'\\\"?!"	01234   // используем esc символ \
//	(‘ → 0 / \ → 1 / “ → 2 / ? → 3 / ! → 4) = 10321201

Переменная rcrdmddd (преобразуем в 01234 на базе mrdoc)
echo rcrdmddd    |    tr "mrdoc"	01234
//	(m → 0 / r → 1 / d → 2 / o → 3 / c → 4) = 14120222
```
3. xargs echo – считаем сумму
4. Переводим сумму преобразованных переменных с базиса основания 5 на базис основания 13 через команду bc (т.к. база gtaio luSnemf имеет 13 символов, а значит и базис осн. ее является 13)
xargs echo “ibase=5;obase=13” | bc https://ru.wikipedia.org/wiki/Bc
= получаем 82671
5. Полученную переменную 82671 (преобразуем в 0123456789ABC на базе gtaio luSnemf)
6. Salut

```
FT_NBR1=\'?"\"'\        FT_NBR2=rcrdmddd

        std0                               std1
echo $FT_NBR1 + $FT_NBR2            \'?"\"'\ + rcrdmddd
| sed "s/\'/0/g"                    \0?"\"0\ + rcrdmddd
| tr '\\\"\?\!' 1234                10321201 + rcrdmddd
| tr 'mrdoc' 01234                  10321201 + 14120222
| xargs echo'obase=13; ibase=5;'    obase=13; ibase=5; 10321201 + 14120222
| bc                                82671
| tr 0123456789ABC 'gtaio luSnemf'  Salut
```