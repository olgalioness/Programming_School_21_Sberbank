| 			         |	ex07	          |
| ------------------ | -------------------|
| GiT                                     |
| Turn-in directory  | 	ex07/	      	  |
| Files to turn in   | 	git_ignore.sh     |

1. В этой задаче ты должен написать короткий shell script, который будет выводить существующие файлы, которые будут игнорироваться твоей GiT репозиторией. Пример:
   > In this exercice, you will write a short shell script that lists all the existing files ignored by your GiT repository. Example:

```
%> bash git_ignore.sh | cat -e
.DS_Store$
mywork.c~$
%>
```

* Чтобы протестировать ваш скрипт мы будем использовать свое собственное оборудование.
  > To test your script, we will use our own environment.

---

## Материал: ##

* https://stackoverflow.com/questions/56235287/what-does-git-ls-files-do-exactly-and-how-do-we-remove-a-file-from-it
* https://agladky.ru/blog/git-cheat-sheet/
* https://explainshell.com/explain?cmd=git-ls-files+-i+-o+--exclude-standard

---

## Решение: ##

```sh
#!/bin/sh
git ls-files --other --ignored --exclude-standard
```

1. -o относится к файлу .ds_store, а ds_store это untracked http://macnotes.ru/post/ds-store

2. -i --ignored Show only ignored files in the output. When showing files in the index, print only those matched by an exclude pattern. When showing "other" files, show only those matched by an exclude pattern.

3. --exclude-standard – согласно man git ls-files этот паттерн является поднастройкой (обязательной) –i. Т.к. есть другие варианты игнор. Файлов, а этот берет из игнор листа.

* ОБЯЗАТЕЛЬНО СОЗДАТЬ гит и там создать игнор файл, как в example mywork.c~ (почему тильда я хз)