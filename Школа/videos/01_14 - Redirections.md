> Vom vedea acum cum putem inlantui aceste comenzi.

We will now see how we can chain these commands.

> Pentru asta vom vedea cateva noțiuni.

For this we will see some notions.

> Ce putem deja retine e ca comenzile pe care le-am văzut pana acum sunt foarte unitare Putem afișa un fișier, putem sa recuperam primele 10 linii (sau primele "n"), sau ultimele "n", si putem filtra.

What we can already remember is that the commands we have seen so far are very unitary. We can display a file, we can retrieve the first 10 lines (or the first "n"), or the last "n", and we can filter.

> Dar nu putem sa facem aceste operațiuni legate intre ele.

But we cannot do these operations related to each other.

> Al doilea lucru pe care-l putem observa, e ca totul se afiseaza pe ieșirea standard, deci in principiu ecranul.

The second thing we can see is that everything is displayed on the standard output, so in principle the screen.

> Daca reluam exemplul de mai devreme, daca fac un "cat" pe fișier, conținutul va fi afișat pe ecranul nostru.

If we resume the example earlier, if I do a "cat" on the file, the content will be displayed on our screen.

> Dar mai exista un comportament al tuturor acestor comenzi, e comportamentul fara fișier.

But there is a behavior of all these commands, it is the behavior without a file.

> Daca de exemplu tastez doar "cat", "cat” va aștepta sa-i dam informații pe intrarea standard.

If, for example, you just type "cat", "cat" will wait to give you information on the standard input.

> Va aștepta sa tastez ceva ce va înlocui apoi conținutul fișierului.

It will wait to type something that will then replace the contents of the file.

> Daca tastez "bonjour", o data ce apaș Enter imi va reafisa "bonjour".

If I type "bonjour", once I press Enter it will redial "bonjour".

> In mare, tot ce va citi pe intrarea standard (tastatura), va reafisa pe ieșirea standard (ecranul).

In general, everything you read on the standard input (keyboard) will reappear on the standard output (screen).

> Pentru a ieși din modul citire e "Ctrl+D".

To exit reading mode is "Ctrl + D".

> Deocamdată nu e foarte interesant, dar vom vedea cum sa redirectionam aceste ieșiri si intrări standard, ceea ce va va permite sa inlantuiti comenzile.

For the moment, it is not very interesting, but we will see how to redirect these standard outputs and inputs, which will allow you to chain the commands.

> Reluând exemplul de mai devreme, exemplul de baza cu 'echo "bonjour'", va afișa doar "bonjour" pe ieșirea standard.

Resuming the earlier example, the basic example with 'echo' bonjour '' will only display 'bonjour' on the standard output.

> Daca vreau ca aceasta ieșire standard sa nu fie ecranul, ci un fișier, va trebui sa redirectionez ieșirea standard spre fișier.

If I want this standard output to be not the screen, but a file, I will have to redirect the standard output to the file.

> Pentru astafolosim caracterul ">" care va spune "in loc sa afișezi pe ecran, afiseaza in fișierul din parametru".

For this we use the ">" character that will say "instead of displaying on the screen, display in the parameter file.

> Daca fac 'echo "bonjour" > output', nu se va intampla nimic pe ecran, in schimb daca ne uitam a fost creat fișierul "output”, si daca ne uitam in conținutul lui, exista "bonjour”.

If I do 'echo "bonjour"> output', nothing will happen on the screen, however if we look at the "output" file was created, and if we look at its contents, there is "bonjour".

> Deci redirectarea noastra a funcționat.

So our redirection worked.

> In schimb daca reincep o a doua, a treia si a patra oara, si ma uit in fișier, avem doar un singur "bonjour".

However if I restart a second, third and fourth time, and look at the file, we have only one "bonjour".

> De ce? Pentru ca la fiecare redirectare, va șterge conținutul fișierului "output" si-l va inlocui cu noua ieșire.

Why? Because at each redirect, it will delete the contents of the "output" file and replace it with the new output.

> Acest comportament nu e neaparat ceea ce vreți sa vedeți, si de asta avem o dubla redirectare spre dreapta, care va permite, in loc sa inlocuiti conținutul fișierului, sa adaugati la sfârșitul fișierului ("append").

This behavior is not necessarily what you want to see, and that's why we have a double redirect to the right, which will allow you, instead of replacing the contents of the file, to add at the end of the file ("append").

> Daca fac asta si afișez conținutul fișierului "output", avem al doilea "bonjour" care a fost pus la sfârșitul fișierului, si după primul "bonjour".

If I do this and display the contents of the "output" file, we have the second "bonjour" that was placed at the end of the file, and after the first "bonjour".

> Acestea sunt redirectarile drepte, redirectarile ieșirii standard.

These are the straight redirects, the standard output redirects.

> Putem redirecta intrarea standard de asemenea.

We can also redirect standard input.

> Depi daca fac "cat", in loc sa scriu pe tastatura a-i da ceva de citit, pot redirectiona un fișier, pe intrarea lui standard.

Since if I do "cat" instead of typing on the keyboard to give it something to read, I can redirect a file to its standard input.

> Deci ce va face aici? In loc sa citească pe tastatura, va citi din fișier.

So what will he do here? Instead of reading on the keyboard, it will read from the file.

> Deci de fapt aceasta sintaxa e echivalenta a celeilalte, doar ca nu lucrează la fel.

So actually this syntax is equivalent to the other, just not working the same way.

> Aici va deschide fișierul, aici va continua sa citească de pe intrarea standard, doar ca i-am "fentat" intrarea standard pentru a citi din fișier.

Here will open the file, here it will continue to read from the standard entry, just as I "tricked" the standard entry to read from the file.

> Deci ce veți putea face cu asta?

So what can you do about it?

> Vedeți de exemplul ca puteti folosi "cat", in loc de a afișa pe ieșirea standard, pentru a redirectionata spre altceva.

See for example that you can use "cat" instead of displaying on standard output to redirect to something else.

> Ce ar fi util ar fi sa puteti redirectiona spre alta comanda.

What would be useful would be to redirect to another command.

> Aici intervine simbolul

Here comes the symbol

> Daca facem un "cat" si ca-l trimitem ("|", "pipe") spre 'grep "Mathieu'", ne va afișa doar liniile cu "Mathieu".

If we make a "cat" and send it ("|", "pipe") to 'Mathieu' grapple, it will only show us the lines with "Mathieu".

> Deci ce s-a întâmplat?

So what happened?

> Comanda "cafjn loc sa scrie pe ieșirea standard, va scrie in "pipe", si "grep", in loc sa citească pe intrarea standard, va citi in "pipe".

The command "coffee instead of writing on the standard output, will write in" pipe ", and" grep ", instead of reading on the standard input, will read in" pipe ".

> Deci pana la urma e ca si cum "cat" ar scrie direct in intrarea standard a "grep", deci "grep" in loc sa pornească de la un fișier va porni de la rezultatul comenzii "cat".

So in the end it is as if "cat" would write directly to the standard input of "grap", so "grap" instead of starting from a file will start from the result of the "cat" command.

> Aceste "pipe" se pot inlantui la infinit.

These "pipes" can be chained to infinity.

> Daca vreau sa recuperez doar prima linie, ajunge sa fac asta.

If I want to recover only the first line, I get to do that.

> Ieșirea standard a "grep", ceea ce avem aici, trece in "head", care ne va selecționa prima linie si avem deci rezultatul dorit.

The standard output of "grep", what we have here, goes to "head", which will select our first line and therefore we have the desired result.

> Aceste "pipe" sunt foarte practice in toata viata de programator, va permit cu aceste mici comenzi unitare sa faceți inlantuiri foarte lungi si foarte complicate care vor face exact ce vreți voi.

These "pipes" are very practical throughout the life of the programmer, they allow you with these small unit commands to make very long and very complicated chains that will do exactly what you want.

> Șî e ce va vom ruga sa faceți foarte des, ca sa ajungeți la rezultatele pe care vi le cerem in exercițiile acestei zile.

And this is what we will ask you to do very often, in order to reach the results that we ask you in the exercises of this day.