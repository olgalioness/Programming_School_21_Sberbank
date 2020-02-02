> Acum ca am vazut cum functioneaza redirectarile, vom putea folosi acest sistem pentru a continua sa manipulam fisierele. 

Now that we have seen how the redirects work, we will be able to use this system to continue handling the files.

> Vom vedea о comanda foarte simpla care e "sort". 

We will see the very simple command which is "sort".

> Cum indica si numele, va va permite sa sortati ce ii dati ca parametri, deci ce ii dati sa citeasca de pe intrarea standard in cazul nostru.

As the name indicates, it allows you to sort what you give them as parameters, so what you give them to read from the standard entry in our case.

> Aici vedem ca a sortat in ordine alfabetica toti utilizatorii.

Here we see that all users sorted in alphabetical order.

> Atentie, e о sortare lexicografica, deci bazata pe codul ASCII al caracterelor, deci majusculele sunt inaintea literelor mici.

Attention, it is a lexicographic sorting, so based on the ASCII code of the characters, so the capital letters are before the small letters.

> Pentru a nu avea acest comportament exista optiuni, alte optiuni pentru a sorta numerele, optiuni pentru a sorta invers. 

To avoid this behavior there are options, other options to sort the numbers, options to sort the other way around.

> Va las sa cititi "man sort"; ca toate comenzile are multe optiuni. 

I will let you read "man sort"; check out all of its options.

> О data sortata iesirea, veti putea de exemplu sa recuperati doar prenumele. 

Once the date has been sorted out, you can for example only recover the first name.

> Pentru asta exista comanda "cut", care va va permite sa taiati fiecare linie in functie de un delimitator. 

For this there is the "cut" command, which will allow you to cut each line according to a delimiter.

> Keiexemplu daca fac "cut" cu optiunea "jd" pentru delimitator sivoi putea recupera campurile care ma intereseaza. 

If I made a "cut" option with the "jd" option for the delimiter saw, I could recover the fields that interest me.

> Daca vreau numai primul camp adaug optiunea "-f 1" si recuper doar primele campuri. 

If I want only the first field, I add the "-f 1" option and recover only the first fields.

> Revenind la ce am spus mai devreme, adaug optiunea "cat -e" pentru a afisa caracterele non-afisabile, si voi vedea ca aici e un spatiu dupa "maxime", ceea ce nu puteam vedea fara "cat -e". 

Going back to what I said earlier, I add the "cat -e" option to display non-display characters, and I will see that there is a space after "max", which I couldn't see without "cat -e".

> Comanda "cat" e foarte puternica, va permite sa faceti tot felul de lucruri; veti putea de exemplu recupera mai multe campuri, sau о дата de campuri.

The "cat" command is very powerful, it allows you to do all kinds of things; for example, you will be able to retrieve more fields, or more fields.

> Va fi foarte practic pentru a recupera doar informatiile care va intereseaza  din fisiere de genul acesta care sunt separate prin niste delimitatori, fie prin virgula, fie prin punct si virgula, etc. 

It will be very practical to retrieve only the information that interests you from files of this kind that are separated by some delimiters, either by comma or by semicolon, etc.

> О data се ati reusit sa vedeti asta, (sa zicem pastrand doar prenumele) vom putea modifies aceste prenume.

Once you've managed to see this, (let's just keep the first name) we will be able to modify these first names.

> De exemplu daca vreau sa schimb sa zicem "thomas" in "Thomas" (cu majuscula), voi putea folosi comanda "sed". 

For example, if I want to change to say "thomas" in "Thomas" (in capital letters), I can use the "sed" command.

> Comanda "sed" e о comanda foarte puternica, ce va permite sa modificati fluxul de date. 

The sed command is a very powerful command that allows you to change the data flow.

> De exemplu ii vom cere sa schimbe "thomas" in "Thomas". 

For example, we will ask them to change "Thomas" into "Thomas".

> (cu un slash in plus...) 

(with an extra slash ...)

> Si vedem aici ca "Thomas" incepe acum cu о majuscula. 

And we see here that "Thomas" starts with the capital letter.

> In mare ce face? 

What's he doing?

> Primul caractep fs"), spune ca facem о inlocuire, deci vom inlocui al doilea parametru cu cel de-al treilea parametru. 

The first character ("s"), says that we do о replacement, so we will replace the second parameter with the third parameter.

> E foarte simplu. 

It's very simple.

> Е о functionalitate simpla a comenzii "sed", in schimb putem face foarte multe cu aceasta comanda, ьо! deci va sfatuiQSc inca о data sa cititi manualul, sau sa va uitati si la exemple pe Internet, vor fi mai sem initiative.

It's a command "sed", instead we can do a lot with this command, ьо! so you will advise QSc once you read the manual, or look at examples on the Internet, there will be more initiatives.

> Puteti face multe modificari, sa modificati un element din doua, sa folositi expresii regulate, cu diverse modele, lucruri foarte complicate, care pot fi foarte puternice daca reusiti sa le stapaniti bine.

You can make many changes, modify an element of two, use regular expressions, with different models, very complicated things, which can be very powerful if you manage to master them well.

> Ultima comanda de modificare de fisiere pe care о vom vedea se numeste "tr". 

The last file modification command we will see is called "tr".

> De exemplu, vedem aici accentul in cuvantul "melanie". 

For example, we see here the accent in the word "melanie".

> Asa il inlocuiesc printr-un "e" normal. 

That's how I replace it with a normal "e".

> tr" e simplu: ia doi parametri, un caracter pe care-l vom inlocui, si un al doilea cu care il vom inlocui. 

"tr" is simple: it takes two parameters, one character that we will replace, and a second one that we will replace.

> De exemplu pot sa adaug un "X" pentru a schimba "x"-ul din "xavier" in majuscula. 

For example, I can add an "X" to change the "x" from "xavier" to uppercase.

> Si va face schimbarea. 

And it will make the change.

> Toate aceste comenzi sunt foarte simple; inca о data: uitati-va la manuale, cautati pe internet, sunt foarte simplu de utilizat, trebuie doar experimentat putin la inceput pentru a vedea cum functioneaza.

All these commands are very simple; again: look at textbooks, search the internet, they are very simple to use, you just have to experiment a little at first to see how they work.