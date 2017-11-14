/*
Celem zadania jest napisanie stuktury "rope".
Jest to  lista polaczona tablic, rozmiar tablic definijemy podczas inicjalizacji.
Taka struktura laczy zalety wektora (ciaglosc pamieci) i nie wymaga kopii/realokacji przy 
rozszerzaniu.

Elementem listy powinna byc struktura zawierajaca poza zwyklymi skladnikami elementu listy: 
tablice o okreslonej wielkosci
wraz z jakas dodatkowa informacja jak wiele elementow w tej tablicy jest juz zajetych.
(oczywiscie mozna to tez zorganizowac inaczej).

Struktura Rope nie pozwala na dostep z uzyciem indeksu ale pozwala na iteracje po wszystkich
 elementach poprzez funkcje
iterate_over_elements. Funkcja ta pobiera wskaznik do struktury i iterujac po elementach 
wywoluje zadana funkcje z dwoma argumentami:
pierwszym jest indeks (gdybysmy chcieli cos specjalnego zrobic dla kazdego indeksu jak w
przypadku ponizej)
i wartoscia pod zadanym indeksem.
To co zwracamy staje sie nowa wartoscia (f. print powinna wiec zwrocic argument).

Progam ma sie skompilowac do pliku wykonywalnego o nazwie "main"
*/
#include <iostream>
using namespace std;
#include "rope.h"
#include "rope.h"

int mulby2every3rd(unsigned index, int a) {
  return index % 3 == 0 ?  2*a : a;
}

int main() {
  Rope* r1 = make_rope(4); // ilosc miejsca w pojedynczej tablicy 4   
  Rope* r2 = make_rope(8); // ilosc miejsca w pojedynczej tablicy 8   
  for (int i = 0; i < 15; ++i ) {
    insert(r1, i+5);
    insert(r2, i+5);
    cout << "Ilosc elementow "<< size(r1) << ":" << size(r2) << " zaalokowane " << capacity(r1)<<":"<<capacity(r2)  << endl;

  }

  iterate_over_elements(r1, print);
  cout << endl;
  iterate_over_elements(r1, mulby2every3rd);
  cout << "po przemnozeniu" << endl;
  iterate_over_elements(r1, print);
  cout << endl << "r2 sie nie zmienia" << endl;
  iterate_over_elements(r2, print);
  cout << endl;
  clear(r1);
  clear(r2);

}
/* wyniki
Ilosc elementow 1:1 zaalokowane 4:8
Ilosc elementow 2:2 zaalokowane 4:8
Ilosc elementow 3:3 zaalokowane 4:8
Ilosc elementow 4:4 zaalokowane 4:8
Ilosc elementow 5:5 zaalokowane 8:8
Ilosc elementow 6:6 zaalokowane 8:8
Ilosc elementow 7:7 zaalokowane 8:8
Ilosc elementow 8:8 zaalokowane 8:8
Ilosc elementow 9:9 zaalokowane 12:16
Ilosc elementow 10:10 zaalokowane 12:16
Ilosc elementow 11:11 zaalokowane 12:16
Ilosc elementow 12:12 zaalokowane 12:16
Ilosc elementow 13:13 zaalokowane 16:16
Ilosc elementow 14:14 zaalokowane 16:16
Ilosc elementow 15:15 zaalokowane 16:16
0[5] 1[6] 2[7] 3[8] 4[9] 5[10] 6[11] 7[12] 8[13] 9[14] 10[15] 11[16] 12[17] 13[18] 14[19] 
po przemnozeniu
0[10] 1[6] 2[7] 3[16] 4[9] 5[10] 6[22] 7[12] 8[13] 9[28] 10[15] 11[16] 12[34] 13[18] 14[19] 
r2 sie nie zmienia
0[5] 1[6] 2[7] 3[8] 4[9] 5[10] 6[11] 7[12] 8[13] 9[14] 10[15] 11[16] 12[17] 13[18] 14[19] 
 */
