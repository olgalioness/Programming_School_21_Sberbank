> Deci acum ca am văzut cum sa ne plimbam in sistemul de fișiere, si ce este un sistem de fișiere, sperând ca ati inteles bine, vom vedea cateva comenzi care va vor fi utile in piscina sperând ca ati înțeles bine, vom vedea cateva comenzi care va vor fi utile in piscina si de altfel, care va vor fi utile tot timpul.

Итак, теперь, когда мы увидели, что такое файловая система и как ее просматривать, надеюсь, вы самостоятельно запомнили, как это делать, то давайте посмотрим на некоторые команды, которые будут полезны вам до конца Бассейна по Си и сам факт пользы будет периодический.

> Prima e comanda "touch", care va permite sa creați un fișier, comanda "cat" care va permite sa vedeți ce e in fișier si vi-l afiseaza pe ecran, comanda "cp" care copiaza, "mv" care muta, "rm", pe care am vazut-o deja impreuna, si va permite sa stergeti, si "chmod" care va permite sa schimbați drepturile pe un fișier sau un director, lucru important, ca prietenii voștri sa nu se amuze stergandu-va fișierele de exemplu; știind ca oricum vor incerca.
>The first is the "touch" command, which will allow you to create a file, the "cat" command that will allow you to see what's in the file and display it on the screen, the "cp" command that copies, "mv" that moves, " rm ", which we have already seen together, and will allow you to delete, and" chmod "which will allow you to change the rights on a file or a directory, important thing, that your friends will not have fun deleting your files. example; knowing they'll try anyway.
>the first command line is "touch" - create file, "cat" - previewer files content (displays a file content on screen), "cp" - copy, "mv" - move, "rm" - remove (as seen earlier on), "chmod" - changes access permissions to file system objects, that's important to know in order to dodge classmates pranks on your work, they'll try anyway.

Первая команда "touch" - создать файл, "cat" - обзор содержимого файла (выводит содержимое на экран), "cp" - копировать, "mv" - переместить, "rm" - удалить (как вы уже видели), "chmod" - сменить права доступа к объектам файловой системы, это очень важно знать, чтобы избежать пранков над вашей работой, вашими одноклассниками.

> Deci, prima comanda: "touch".

И так, первая команда "touch".

> La fel, când nu stiti, tastati, vedeți ce se intampla, si daca sunteti șmecheri faceți "man touch", si asa stiti cu ce opțiuni o puteti utiliza.

И как всегда, давайте попробуем. Очевидно, что "touch" просто бесполезно, поэтому давайте введем "man touch". Как обычно, краткое содержание, описание и опции.

> La fel: rezumatul, descrierea si opțiunile, si asa mai departe.
> Deci, "touch"... Fac "cd", sunt in directorul meu, fac "ls”, bine, creez un director.
>so, "touch"... If I type "cd" and then "pwd"  in my directory, "ls -la" lists all the files in the directory, let's create a new directory "mkdir Krpestbeu", "ls" my directory is being created.

И так, "touch"... Я напишу "cd", потом "pwd" в своем каталоге, выведу подробно информацию о содержимом в каталоге через "ls -la", теперь создам новый каталог "mkdir Krpestbeu", затем "ls" и собственно увижу созданный каталог.

> Directorul e creat aici.
> let's go in "cd Krpestbeu" and "ls" it's empty. now let's create our first file "touch beeoneestpasbeau", here we go, "ls -la" my new file is here.

Теперь перейдем "cd Krpestbeu" и через "ls" увидим, что там пустой. Теперь создадим первый файл "touch beeoneestpasbeau", ну вот, теперь через "ls -la" видим, что наш новый файл тут.

> Intru in el. Si aici scriu "touch" si imi creez fișierul. Asa, deci am fișierul meu caruia pot sa-i spun oricum. O mica precizare: daca scrieți asta, nu da același rezultat. Va las sa va dati seama singuri ce s-a intamplat, nu va explic.
>just so you know, if you do this "touch bee one est pas beau" here's what happens see on screen, you can figure it out on your own.

И чтобы вы лучше понимали, если я сделаю так "touch bee one est pas beau", то вот что произойдет, посмотрите на экран и думаю вы сами все поймете.

> Si după ce facem curățenie, la fel, cu comanda "rm", si aici iarasi va arat ceva si va las sa va dati seama singuri ce face. Atentie: a se folosi cu precauție! Asa, deci am directorul meu.
> and now if you want to clean it out, you can use the command "rm", I'm going to add a little something to the "RM" command line, you can figure it out for yourselves. but remember to use this with caution.

Теперь, если вам нужно удалить что-то, то вы можете воспользоваться командой "rm", я добавлю некоторые опции к этой команде, думаю вы сами сможете выяснить, за что они отвечают, но не забывайте использовать все это с некоторой осторожностью.

> Am văzut "touch". Acum ca am văzut cum creem fișiere, ne vom uita ce e inauntru fișierului. Pentru asta exista comanda "cat". Nu va arat manualul de fiecare data, cred ca ati înțeles logica. Deci daca fac "cat" pe un fișier .c, sau de orice alt fișier, ce e in fișier va aparea pe ecran.
> I saw "touch". Now that we've seen how we create files, we'll look at what's inside the file. For this there is the command "cat". I will not show you the manual every time, I think you understand the logic. So if I do "cat" on a .c file, or any other file, what's in the file will appear on the screen.
>so we've covered touch, now that we can create files let's check out their content. in order to do that we'll use the following command line "cat". I'm not going to read you the man every single time, I hope you get it by now. so "cat" on a file .c or whatever type of file for that matter. what is in that file will be displayed on-screen.

И так, мы рассмотрели команду "touch", теперь, когда мы можем создавать файлы, то давайте просмотрим их содержимое. Чтобы это сделать, мы будем использовать команду "cat". Я надеюсь вы поняли, что я не собираюсь каждый раз читать вам man. И так "cat" файла с расширением ".c" или любого другого расширения, которое нас будет волновать. То, что будет находиться в файле будет выведено на экран.

> Atentie, merge cu orice; cu fișierele de tip text, si de asemenea cu fișierele binare. Vom vedea mai târziu; veți avea surprize, nu va da același rezultat. Deci știu crea un fișier, știu sa ma uit in el, acum vom invata sa copiem fișierul. Ma intorc in super directorul meu unde nu e nimic, fac un "touch". Vom schimba, ceva mai original de data asta. Fac un "ls", si vad fișierul meu. Acum, am greșit si am creat fișierul in directorul "Krpestbeau", dar voiam sa-l pun in directorul meu "home".
>
> Attention, it goes with everything; with text files, and also with binary files. We will see later; you will have surprises, it will not give the same result. So I know how to create a file, I know how to look in it, now we will learn how to copy the file. I go back to my super director where there is nothing, I make a "touch". We will change, something more original this time. I'm doing an "ls", and I see my file. Now, I made the mistake and created the file in the "Krpestbeau" directory, but I wanted to put it in my "home" directory.
>
> works on everything, files .c, files txt, binary files, we'll see that later on. so now you know how to create a file, I also know how to look inside one, now I need to know how to copy a file. Lets go back to my awesome directoty which is empty. "touch" something original, the name of the file has no importance. "ls"...yeap it's here. Oh nooo, I've made a mistake, it's in my "Krpestbeau" directory I want to be it in my home directory.

Это работает со всеми расширениями, .c файлы, .txt файлы, бинарные файлы, все это мы позже рассмотрим. И так теперь вы знаете как создавать файлы, также знаете как просматривать то, что находится внутри этих файлов, теперь нам нужно узнать, как копировать файлы. Давайте вернемся в мой офигенный пустой каталог. Создадим что-нибудь оригинальное через "touch", имя файла особой роли не играет. "ls"... и агамс, файл тут. О нееет( Я кое-где ошибся, он находится в каталоге "Krpestbeau", а мне нужно, чтобы он был в моем "home" каталоге.

> In cazul asta, folosesc comanda "cp", care copiaza, pun fișierul sursa, sursa a ceea ce vreau sa copiez, si destinația. De cele mai multe ori sub Unix ordinea e sursa, apoi destinație. Si deci directorul părinte. Daca fac asta, mal am inca fișierul acoJo unde ma aflu, si daca fac "cd pentru a urca in directorul de deasupra, si fac un "ls", vad fișierul "30_1estgentir care a fost copiat. Si, bineînțeles, daca șterg fișierul "30_1estgentil", si ma intorc in "Krpestbeau", il am inca aici (pentru ca a fost copiat).
>
> In this case, I use the "cp" command, which copies, puts the source file, the source of what I want to copy, and the destination. Most times under Unix order is the source, then destination. And so the parent director. If I do this, I still have the file where I am, and if I do "cd to go up to the directory above, and do a" ls ", I see the file" 30_1estgentir that was copied. And, of course, if I delete the file "30_1stgentil", and I go back to "Krpestbeau", I still have it here (because it was copied).
>
> that's okay though, I know "cp". "cp source destination" source equals file, destination equals the directory, you'll notice that source destination is pretty standard in UNIX. So, "cp" "myfile" "myparentdirectory", in this case is my home directory.  if I do "ls" my file is still here and if I do "cd" then "ls" my files also here as it's been copied. If I remove this one with "rm" the file is gone, but the original copy is still there.

Ничего страшного, я ведь знаю команду "cp". "cp soure destination", source - это ваш файл, destination - каталог, вы потом еще заметите, что source и destination довольно стандартизированы в UNIX. И так, "cp" "myfile" "myparentdirectory", в данном случае это "home" каталог. Теперь, если я сделаю "ls" то мой файл все еще здесь, а если я сделаю "cd", потом "ls", то мой файл также здесь, так как я его скопировал. Если я удалю файл через "rm", то он исчезнет, но его копия останется здесь.

> Mai departe: l-am copiat, dar voiam sa-l mut (m-am încurcat prima data, nu sunt prea talentat). Imi zic, de data asta chiar il voi deplasa: deci exista o comanda care se numește "mv". Toate comenzile in Unix, ca regula generala, au o logica. "cp" - copiez, "mv" - "move", "ls" - listez, si asa mai departe. Deci "mv", sursa, si destinația. Acum daca fac "ls", nu mai e aici, "30_1estgentil” a plecat, si e aici. In plus veți vedea ce data e aici, deci ca a fost mutat acum.
>
> Further: I copied it, but I wanted to move it (I got confused the first time, I'm not too talented). I tell myself, this time I will actually move it: so there is a command called "mv". All Unix commands, as a general rule, have a logic. "cp" - copy, "mv" - "move", "ls" - list, and so on. So "mv", the source, and the destination. Now if I do "ls", he is not here anymore, "30_1stgentil" is gone, and he is here. In addition you will see what date he is here, so he has been moved now.

I've created a copy of my file but I wanted to move it. I'm gonna try again and this time I'll get it right and move it, not copy it. so I'm going to try "mv". All UNIX command lines are pretty straight for a copy. CP equals copy, mv equals move, LS equals list etc. So, MV the source, and the destination. if we do LS we can see that it's gone. if we do CD then LS, here it is. little extra, date we can see that the time stamp matches my last change.

> Asa, deci știu deplasa, știu copia, știu șterge (asa, deci a dispărut), ne mai ramane un lucru de văzut, "chmod". "chmod”, cum indica si numele, schimba "modul", schimba drepturile pentru a fi mai exact. Revin in directorul meu. Un mic sfat, Unix e "case sensitive", bănuiesc ca stiati, dar in caz ca nu, asta inseamna ca daca puneți o majuscula in numele fișierului vostru, tine cont de majuscula. Puteti avea doua fișiere cu același nume, unul cu majuscule, unul cu litere mici, nu e același fișier. Deci "chmod", fac un "touch", asa, mi-am creat fișierul.
>
> So, so I know the move, I know the copy, I know delete (so it disappeared), we still have something to see, "chmod". "chmod", as the name indicates, change the "mode", change the rights to be more accurate. I'm back in my directory. A little advice, Unix is "case sensitive", I guess you knew, but in case you don't, that means like if you put a capital letter in the name of your file, you capitalize it. You can have two files with the same name, one with uppercase letters, one with lowercase letters, it's not the same file. So "chmod", I make a "touch", I created my file.

so, now I know how to move, how to copy and how to delete / erase (see, it's gone). last topic for day is chmod. changes modes as its name suggest it. it changes permissions to be exact. let's go back to my directory. little warning, UNIX is very case sensitive, I suppose you already knew that, but just in case you didn't, which means that if you add an uppercase letter to a filename that doesn't have any - it'll take that into account. you could have two files of the same name, one in uppercase, the other in lowercase, those two files are different. back to chmod, so touch new file.

И так, теперь я знаю как перемещать, копировать и удалять (видите? все пропало). Последняя тема на сегодня - это "chmod". chmod расшифровывается - сhange mode. Если быть точнее, то она изменяет права доступа. Давайте вернемся обратно к моему каталогу.

> O data creat, aveți ca de obicei numele, si drepturile asociate. Deci, nu are "d", e un fișier, "r" pentru "read", "w" pentru "write", "x" pentru "execute". De fiecare data veți avea drepturile voastre (unu, doi, trei), drepturile pentru cei din același grup ca voi (care e grupul "staff' in cazul de fata), Si drepturile pentru restul planetei. Adică cei care nu sunt in grupul vostru, si care nu ești tu.
>
> Once created, you usually have the name, and associated rights. So it doesn't have "d", it's a file, "r" for "read", "w" for "write", "x" for "execute". Each time you will have your rights (one, two, three), rights for those in the same group as you (which is the "staff" group in this case), and rights for the rest of the planet. , and who you are not.

LS and it's here. you know those columns layout, remember the permissions column, there's no D here so we're sure it's a file, R for read, W for write and X for execute. the first set of three letters are WX are your permissions for that file. the second set of three letters are the permissions for your group, in this case the group, in this case group is staff. and the third set is for the rest of the world, meaning people who aren't in your group.

> Va voi da doua exemple, si apoi va veți descurca cu "man", experimentând si vazand ce se intampla. Dacâ fac un "chmod.OOO" deci 0 pentru mine, 0 pentru cei din grupul meu, 0 pentru planeta intreaga, cu numele fișierului meu, ce se intampla: nu mai e nici un drept pe fișier. Imi veți spune, cum pot schimba acum drepturile? Unix e inteligent, știe ca e fișierul vostru, va aparține.
>
> I will give you two examples, and then you will deal with "man", experimenting and seeing what happens. If I make a "chmod.OOO" so 0 for me, 0 for those in my group, 0 for the entire planet, with the name of my file, what happens: there is no file right anymore. You will tell me, how can I change the rights now? Unix is smart, it knows it's your file, it will belong.

I'm going to show you a couple of things, as for the rest, you can figure it out for yourselves like grown-ups with the man page. if we type chmod 000 *my file*, so 0 for me, 0 for my group, 0 for the rest. what happens? try LS -La. check up the permissions column, no more permissions for anybody. you're going to ask well how do I regain permissions. UNIX is intelligence it knows it's your file and it belongs to you.

> Daca faceți "7" pentru voi, deci "700", Enter, si faceți un "ls -la" (atentie, doar "ls" nu va afiseaza drepturile), "ls -la" si numele de fișier, am deci drepturile de citire, scriere, executare. Grupul meu nu are drepturi, si restul planetei nu are drepturi. Daca altcineva decât voi incearca sa citească fișierul vostru, nu va avea acces. Nici la citire, nu va putea face "cat" pe el, nu va putea sa-l copieze, nu va putea face nimic cu el.
>
> If you make "7" for yourself, then "700", Enter, and you make an "ls -la" (attention, only "ls" will not display your rights), "ls -la" and the file name, so I have the rights to reading, writing, executing. My group has no rights, and the rest of the planet has no rights. If someone other than me tries to read your file, it won't have access. Even when reading, he will not be able to "do" it, he will not be able to copy it, he will not be able to do anything with it.

So if you type chmod 700 *myfile* :  7 four you, 0 for your group and the rest. ls -la, simple ls doesn't give you info on permission. and now I have the read write and execute permissions, both my group and rest of the world have no permissions. if someone other than you tries to access this file - they won't be able to. they won't be able to read it, do a cat on it, copy it or anything else.

> Daca vreau de exemplu sa fac ca oamenii sa poate doar citi fișierul meu, ”644”, si ce se intampla acum? Eu am drepturile de citire si scriere. Ati remarcat ca am îndepărtat "x"-ul, care se refera la executare pentru fișierele binare, aici e un fișier text, n-avem nevoie sa-l executam, deci l-am sters, nu folosește la nimic. Grupul meu poate citi, si restul planetei poate citi. In schimb nu au "w"-ul, deci nu au drepturile de scriere, si nu vor putea sa scrie in fișier. Daca vin in directorul vostru, si fac un "cat" si numele de fișier, cum v-am aratat inainte, vor vedea ce e in el. In cazul de fata e gol, dar vor vedea ce e in el.
>
> If I want, for example, to make people just read my file, "644", and what's happening now? I have the rights to read and write. You noticed that I removed the "x", which refers to execution for binary files, here is a text file, we don't need to execute it, so I deleted it, it doesn't use anything. My group can read, and the rest of the planet can read. Instead they do not have the "w", so they do not have the writing rights, and will not be able to write to the file. If I come to your directory, and make a "cat" and file name, as I showed you before, they will see what's in it. In this case it is empty, but they will see what's in it.

if I want to allow people to just read my file, chmod 644 *myfile*, what happened? I have the read and write permissions you'll notice my X has gone, I don't need it because my file is a text file, isn't a binary file, so I don't need to execute it. my group can read and so can the rest of the world, however they don't have the W so they can't modify it, but if they go into your directory and throw a cat they can read all of its contents. in this case it's empty but if it wasn't they could check it out.

> Deci "chmod" e un pic complicat la inceput, va trebui sa va obisnuiti, experimentați făceți teste, veți vedea de fiecare data ce se intampla de fiecare data când schimbați "chmod"-ul, "555" de exemplu pentru fanii Subaru, faceți "ls -la", si s-a intamplat ceva. Vedeți ce se intampla, incercati sa intelegeti, si nu va faceți probleme, chiar daca va stergeti toate drepturile, putem sa vi le redăm.
>
> So "chmod" is a bit tricky at first, you will have to get used to it, experiment, do tests, you will see every time it happens every time you change "chmod", for example "555" for Subaru fans, do "ls-her", and something happened. See what happens, try to understand, and do not worry, even if you delete all your rights, we can restore them.

chmod is a little complicated at first, you'll need to get used to it.
you should test it out with different combinations of digits to see what they do. for example what a chmod 555 do for all Subaru fans out there? ls -la something's happened, the permissions have changed. try and figure it out and don't worry if you accidentally remove all of your permissions you've got the power to reverse it.