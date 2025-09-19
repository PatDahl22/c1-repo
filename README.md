# c--repo1
# c--repo1
# c--repo1
# Mina C++ exempel

- **main.cpp** – källkod med variabler och utskrifter
- **main** – kompilerad version av `main.cpp`
- **demo** – kompilerad version av `main.cpp` med annan körbar fil
- **a.out** – standardnamnet när man kompilerar utan `-o`

Jag behåller alla för att se skillnaden i framtiden.



✅ Sammanfattning
main.cpp = din källkod (C++-fil du själv skriver i).
a.out = kompilerat program, standardnamn om du inte anger något.
main = kompilerat program, men du har själv valt namnet via -o main.
demo = ännu ett kompilerat program, du valde namnet via -o demo.

👉 Du behöver inte alla – det räcker med en körbar fil åt gången. Om du kompilerar många gånger med olika namn får du flera körbara filer i mappen.

✅ 1, Rensa manuellt med terminalkommando
Om du vill ta bort alla körbara filer (t.ex. a.out, main, demo) kan du köra:
rm a.out main demo


👉 Det raderar de filerna, men lämnar kvar din källkod (main.cpp).
Vill du ta bort alla filer utan filändelse (dvs bara körbara program):
rm -f !(*.*)

(Det kräver att du kör i bash med extglob aktiverat → shopt -s extglob)


✅ 2, Automatisk städning med Makefile. Användning:
 Bygga programmet:
  make

 Köra programmet:
  ./main

 Rensa körbara filer:
  make clean