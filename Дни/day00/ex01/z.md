|                    |	ex01		      |
| ------------------ | -------------------|
| Only the best know how to display Z	  |
| Turn-in directory  | 	ex01/			  |
| Files to turn in   | 	z				  |

1. Создайте файл с названием ‘z’, который будет возвращать/выводить/returns ‘Z’ с новой строки, всякий раз, когда команда ‘cat’ будет использоваться на этом файле.
   > Create a file called z that returns "Z", followed by a new line, whenever the command cat is used on it.

2. Example:
```
?>cat z
Z
?>
```

---

## Решение: ##
* По сути, эта задача – шутка, т.к. если посмотреть [‘man cat’](https://losst.ru/komanda-cat-linux), то мы увидим, что она "concatenate files and print on the standard output / склеивает файлы и отображает содержимое файла".
* Поэтому надо просто создать файл ‘z’, написать в нем ‘Z’ и проверить прописав cat z.
    ```
    $> echo "Z" >> z // запись   (> перезапись)
    $> cat z // Проверяем
    chmod a+x z   исполняемый для всех
    chmod a+w z   запись для всех    (r чтение для всех)
    
    
    ```

> перезаписать
>> записать
сделать исполняемым


