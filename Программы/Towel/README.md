# Towel.sh
### 5.3 - Code check: Towel ###
Упрощает работу (на основе 42Stupidity), действие в одну команду.
1. Клонируем репозиторий в домашний каталог в новую папку Towel
```
git clone https://github.com/oscardemadriz/towel.git ~/Towel
```
2. Переходим в созданный каталог ```cd ~/Towel```
2. Клонируем свой репоз. с выполненными заданиями day05 в текущий каталог Towel
```
git clone vogsphere@vogsphere.21-school.ru:intra/2019/activities/piscine_c_day_05/nick day05
```
3. Возможно понадобится сменить права доступа ```chmod +x towel.sh```
4. Проверяем на Norminette, комплируем и тестим ```./towel.sh day05```

### 5.4 - Code check: lifehack's
1. В ~/.zshrc, компилируем с флагами и проверяем main.c
```
alias main="gcc -Wall -Wextra -Werror main.c -o test && ./test"
```
>  ## If you're gonna survive out here, you've gotta know...where your towel is!

Towel will be handy if you're in 42, to run towel just needs the day number.

Will download Stupidity and your repository code from dayXX. You can also use it for reviews!

* Check with Normanette

* Build

* Test with Stupidity

Warning: Maybe you need add execute rights before execute it:
>chmod +x towel.sh

Usage example (./towel.sh DD)
> ./towel.sh 03

___

Towel for 42 School Silicon Valley
