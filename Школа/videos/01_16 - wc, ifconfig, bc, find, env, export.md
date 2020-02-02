> Vom vedea acum un mic numar de comenzi care va vor fi foarte utîle. 

We will now see a small number of commands that will be very useful to you.

> Tunt niste comenzi foarte usoare, pe care nu vom petrece foarte mult timp. 

Tune some very easy commands, which we will not spend much time.

> Prima e "wc" si pur si simplu va calcula numarul de linii, de caractere si de cuvinte care sunt inf^jrHÎsîer 

The first is "wc" and it will simply calculate the number of lines, characters and words within a file so if

> Daca iau fisierul exemplu de inainte, si fac un "wc" pe acest fisier, voi vedea ca sunt 400 de linii, 405 cuvinte si 7446 caractere. 

If I take the example file before, and make a "wc" on this file, I will see that there are 400 lines, 405 words and 7446 characters.

> "wc" poate primi mai multe fisiere ca si parametri. 

"wc" can receive more files as parameters.

> "wc *" imi va da pentru fiecare fisier din director numarul de linii, etc., si-mi va da si totalul. 

"wc *" will give me for each file in the directory the number of lines, etc., and will give me the total.

> Aceasta comanda, ca toate celelalte vazute azi, poate sa citeasca pe intrarea standard. 

This command, like all the others seen today, can read on the standard input.

> Daca fac "cat" si numele fisierului nostru, recuperez numele "Thomas", si apoi il redirectez spre "wc -I" pentru a avea doar numarul de linii,  voi vedea ca exista 7 "Thomas" in baza de date. 

If I make "cat" and the name of our file, I retrieve the name "Thomas", and then redirect it to "wc -I" to have only the number of lines, I will see that there are 7 "Thomas" in the database.

> E foarte practic pentru a numara rezultatele. 

It's very practical to count the results.

> Alta comanda simpla e comanda "file". 

High simple command and "file" command.

> "file" va va da pur si simplu informatii despre fisierul dat ca parametru. 

"file" will simply give you information about the given file as a parameter.

> Aici putem vedea ca acest fisier e in UTF-8, ca e fisier text, deci are un tip MIME care corespunde la text, numarul magic al fisierului, etc.

Here we can see that this file is in UTF-8, that it is a text file, so it has a MIME type that corresponds to the text, the magic number of the file, etc.

> Alta comanda, "ifconfig", care va va da informatii despre reteaua voastra. 

Another command, "ifconfig", which will give you information about your network.

> De exemplu puteti vedea adresele IP, adresele MAC, etc. 

For example, you can see IP addresses, MAC addresses, etc.

> Ultima comanda tot destul de usoara: comanda "bc". 

Last command quite easy: command "bc".

> "bc" e foarte simplu: e un calculator. 

"bc" is very simple: it's a computer.

> Daca tastati "2+3", va va da rezultatul "5", nimic complicat. "bc" e foarte puternic, poate face multe calcule stiintifice, cosinus, sinus, exponentialele, puterile, etc.

Daca tastati "2+3", va va da rezultatul "5", nimic complicat. "bc" e foarte puternic, poate face multe calcule stiintifice, cosinus, sinus, exponentialele, puterile, etc.

> oate face calcule de baza de numeratie: poate face un calcul in baza 2 si sa va dea rezultatul in baza 16, etc. 

one can do basic numeration calculations: can do a base 2 calculation and give the result based on 16, etc.

> Deci "bc" e foarte util, si in plus, citeste din intrarea standard, deci daca fac "echo 1 +2" si il trec prin "bc", imi va da "3".

So "bc" is very useful, and in addition, it reads from the standard input, so if I make "echo 1 +2" and pass it through "bc", it will give me "3".

> Deci "bc" poate fi util daca vrem sa calculam de exemplu suma numarului de linii, sau alte lucruri de genul asta. 

So "bc" can be useful if we want to calculate for example the sum of the number of lines, or other things like that.

> Ultima comanda pe care o vom vedea azi, care e putin mai complicata, dar nici ea nu e foarte grea, e comanda "find". 

The last command we will see today, which is a little more complicated, but it is not too heavy, is the "find" command.

> "find" in mod normal va lista toate fisierele din directorul pe care i-l dam ca parametru. 

"find" will normally list all the files in the directory that you give as a parameter.

> Deci "find ." ne va da toate fisierele din 

So "find" will give us all the files in

> Daca facem "find /usr" ne va da toate fisierele din 'Vusr".

If we do "find / usr" it will give us all the files in 'Vusr'.

> Observam ca face o cautare recursiva, deci va cauta de asemenea si in subdirectoare. 

We notice that it does a recursive search, so it will also search in subdirectories.

> Unde "find" e foarte puternica, e cand incepem sa filtram fisierele pe care le dorim. 

Where "find" is very powerful, is when we start to filter the files we want.

> exemplu, filțrul cel mai simplu e dupa nume; deci daca vreau toate fisierele care incep cu "Is", aceasta comanda ni le va da. 

for example, the simplest filter is by name; so if I want all the files that start with "Is", this command will give them to me.

> Putem filtra dupagdata ultimei modificari, putem filtra dupa marime, putem filtra dupa faptul ca e un fisier, director, executabil, etc. 

We can filter after the last change, we can filter by size, we can filter by the fact that it is a file, directory, executable, etc.

> "find" va va permite de asemenea sa faceti actiuni pe aceste fisiere. 

"find" also allows you to perform actions on these files.

> Puțem sa le afisam, putem sa le stergem, putem lansa alte comenzi plecand de la "find"; "find" e intr-adevar foarte puternica. 

We can display them, we can delete them, we can issue other commands starting from "find"; "find" is indeed very powerful.

> Nu vom face turul tuturor optiunilor; va rog sa cautati pe Internet, pe "man find" dar si cum oamenii folosesc "find", pentru a vedea toate posibilitatile disponibile pentru aceasta comanda. 

We will not tour all the options; please look on the Internet, on "man find" but also how people use "find", to see all the possibilities available for this order.

> Ultimul lucru pe care vreau sa-l vedem e ceea ce numim "mediul". 

The last thing I want to see is what we call the "environment".

> Ce e mediul ("environement")? 

What is the "environment"?

> E pur si simplu o lista de variabile prezente in "shell" si care sunt transmise in mod automat tuturor fisierelor binare, si tuturor scripturilor. 

It's simply a list of variables present in the "shell" that are automatically transmitted to all binary files, and to all scripts.

> Daca facem "env" vom vedea lista acestor variabile. 

If we do "env" we will see the list of these variables.

> Vedem ca se merge pe un sistem de cheie si valoare; "PATH" are aceasta valoare. 

We see that it works on a key and value system; "PATH" has this value.

> "PATH" e folosit de "shell" de exemplu ca sa stie unde se gasesc toate fisierele binare. 

"PATH" is used by "shell" for example to know where all the binary files are located.

> Vom avea utilizatorul vostru ("user"), care se numeste "bocal" in cazul de fata. 

We will have your user ("user"), who is called "jar" in this case.

> Vom avea "TERM" care la noi e "xterm", etc. 

We will have "TERM" which in us is "xterm", etc.

> La ce foloseste asta? 

To what use?

> La a parametra scripturile "shell". 

When parameterizing the "shell" scripts.

> De exemplu daca vrem sa adaugam o variabila "LINE", care corespunde la numarul de linie pe care sa-l caute scriptul, putem face "LINE=3". 

For example, if we want to add a variable "LINE", which corresponds to the line number to look for in the script, we can do "LINE = 3".

> Daca ne uitam in mediul nostru, variabila "LINE" a fost creata cu valoarea "3 

If we look in our environment, the variable "LINE" was created with the value "3"

> si pentru a o accesa putem scrie pur si simplu "$LINE". 

and to access it we can simply write "$ LINE".

> Daca fac "echo $LINE", se va afisa "3", pentru ca "$LINE" va fi inlocuita de valoarea ei. 

If I make "echo $ LINE", it will display "3", because "$ LINE" will be replaced by its value.

> Pur si simplu. 

Simply.

> Deci variabilele de mediu va vor permite sa configurati scripturile "shell", bocalsi ma* tarzii^sf configurati "makefile"-uri, pentru a putea avea comportamente diferite in functie de variabilele de mediu.

So the environment variables will allow you to configure the "shell" scripts, the later buffers, and the "makefiles", to be able to have different behaviors depending on the environment variables.
