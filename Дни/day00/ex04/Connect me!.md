|                    |	ex04	          |
| ------------------ | -------------------|
| Connect me!                             |
| Turn-in directory  | 	ex04/	      	  |
| Files to turn in   | 	klist.txt         |

1. Убедитесь, что у вас есть не просроченный Kerberos тикет. Если его нет, то получите его.
   > Make sure you have a valid (non-expired) Kerberos ticket. If you don’t have one yet, get one.

2. Как только вы получите хотябы один Kerberos тикет, то запишите все ваши тикеты в файл с именем klist.txt.
   > Once you’ve got at least one Kerberos ticket, write a list of all your tickets into a file named klist.txt

* ! Название файла не было выбрано рандомно.
  > The file’s name was not chosen randomly.

* ! Эти команды будут сегодня еще использованы, постарайтесь их не забыть.
  > Those commands will be of use later in the day, so try not to forget them!

---

## Материал: ##

* https://github.com/colundrum/42_vogsphere_access
* https://habr.com/ru/company/aktiv-company/blog/170829/
* https://help.ubuntu.ru/wiki/руководство_по_ubuntu_server/авторизация_по_сети/kerberos
* https://www.altlinux.org/Домен/Использование_Kerberos
* Kerberos (протокол аутентификации) – с ним не было связано заданий, но спустя какое-то время пользования компьютером, например, нужно было бы перелогиниться.

---

## Решение: ##

```
$> cd .. && mkdir ex03 && cd ex03 // Сразу подготовим папку

$> kinit [USER][@REALM] // Подключаемся (и получаем тикет) к серверу через login Intra, если по дефолту не стоит нужный сервер, если стоит, то нет смысла писать user@21-SCHOOL.RU (может отличаться) → Далее прописываем пароль (!он не печатается в поле, тобишь его не видно при печати!), который нам выдали, при регстрации.
$> klist //  Выводим список тикетов Kerberos

$> klist > klist.txt //Создаем klist.txt с информацией из klist
$> touch klist.txt; gedit klist.txt // Вставляем скопированный текст и сохраняем

$> kdestroy // Удалить получ. билет из кэша и закрыть соединение, сразу не выполнять, только после работы за пк.
```

klist должен выглядеть следущим образом:
```
Credentials cache: API:7040
Principal: [user]@21-SCHOOL.RU

Issued          Expires          Principal
Feb 25 09:39:38 2019 Feb 25 19:39:38 2019 krbtgt/21-SCHOOL.RU@21-SCHOOL.RU
Feb 25 09:39:40 2019 Feb 25 19:39:38 2019 ldap/ldap-master.21-school.ru@21-SCHOOL.RU
Feb 25 09:39:40 2019 Feb 25 19:39:38 2019 HTTP/storage-student.21-school.ru@21-SCHOOL.RU
```