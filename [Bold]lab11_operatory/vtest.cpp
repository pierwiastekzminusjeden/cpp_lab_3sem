/*
  Celm zadania jest napisanie kopiowalnego i przypisywalnego wektora. 
  Troche specjalne jest w tym wektorze to ze jest on adresowany indeksami 
  w dowolnym zakesie liczb czlkowitcyh. Np. od 5 do 10, od -200, -100 itp.
  Wektor ma operator [] aby umozliwic semantyke podobna do zwyklych tablic z C.
  
  UWAGA: Nie trzeba obslugiwac zlego uzycia tego wektora
  UWAGA: Aby obliczyc indeks w rzeczywistej tablicy (to jest od 0) 
         wystarczy odejmowac od przkazanago indeksu wartosc begin()!!! 
         Naprawde tylko tyle.
  UWAGA: Operatory, tak jak i metody, moga miec dwa warianty const i "nie-const".

 */
#include <iostream>
#include "FVec.h"

int main() {

  FVec a(5); // wektor 5 elementowy indeksowany od 0 do 4
  a[0] =7;
  a[1] =6;
  a.set(2,5).set(3,-1);  
  a.print();
  FVec& aref = a;
  std::cout << aref[2] << std::endl;

  FVec b(-2, 2); // wektor o indeksach -2, -1, 0, 1
  for ( int i = b.begin(); i < b.end(); ++i ) // uwaga end jest juz poza dozwolonym zakresem indeksow (tu -2)
    b[i] = i;
  b[-1] = -4;
  b[-2] = -44;
  std::cout << b[-2] << std::endl;
  b.print("Wektor b:");  



  const FVec c = b; // a to kopia czy przypisanie?
  b = a; // przypisanie
  c.print("Wektor c:");
  b.print("Wektor b po przypisaniu:");

  const FVec d(-10, 0);
  d.print();
  
}
/* wynik
idx[0,5] 7 6 5 -1 0 
5
-44
Wektor b:idx[-2,2] -44 -4 0 1 
Wektor c:idx[-2,2] -44 -4 0 1 
Wektor b po przypisaniu:idx[0,5] 7 6 5 -1 0 
idx[-10,0] 0 0 0 0 0 0 0 0 0 0 


 */
