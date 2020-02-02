
| 			         |	ex06	          |
| ------------------ | -------------------|
| GiT commit?                             |
| Turn-in directory  | 	ex06/	      	  |
| Files to turn in   | 	git_commit.sh     |

1. Понимание и использование GiT это очень важное умение для разработчика, как и в бассейне, в вашем образовании или в вашей проф. сфере. В этом упражнении ты должен будешь вывести 5 последних commit id. Пример:
   > Understanding and using GiT is a very important skill for a developper, may it be for your piscine, your formation or your professional life. In this exercice, you will have to list the 5 last commits’ id. Example:

```
%> bash git_commit.sh | cat -e
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
%>
```

* Чтобы протестировать ваш скрипт мы будем использовать свое собственное оборудование. Не следует делать того, чего не просили!
  > To test your script, we will use our own environment. What’s not asked for should not be done!

---

## Материал: ##
https://git-scm.com/book/ru/v2/Основы-Git-Просмотр-истории-коммитов* https://stackoverflow.com/questions/10345182/log-first-10-in-git/10347287
* https://stackoverflow.com/questions/2231546/git-see-my-last-commit
* https://aakinshin.net/ru/posts/git-log/
* https://git-scm.com/book/ru/v1/Основы-Git-Создание-Git-репозитория

---

## Решение: ##

```sh
#!/bin/sh
git log -n 5 --pretty="tformat:%Hn"
```

1. git log
2. -n 5
3. [--pretty=](https://ru.hexlet.io/courses/git_base/lessons/introduction_to_git_log/theory_unit)
   * [%H](https://git-scm.com/book/ru/v2/Основы-Git-Просмотр-истории-коммитов)
   * %Hn - \n на последней строке
