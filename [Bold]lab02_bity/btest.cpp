/*
  Celem zadania jest napisanie zestawu funkcji do operacjach na ciagu bitow.
  W tym celu potrzeban bedzie struktura przechowujaca dodatkowa informacje or rozmiarze zestawu bitow.
  Do przechowyania nalezy uzyc tablicy znakow/intow/shortow. Jak kto woli.

  Czynnosci poszczegolnych funkcji sa opisane w miejscach ich uzycia.
  
  UWAGA: bity musza byc spakowane w opymalny sposob, to znaczy jeden bit nie moze zajmowac calego slowa
  W przeciwnym razie zadanie zostanie uznane za zadanie nie na temat == 0 pkt.

 */

#include <iostream>
#include "Bits.h"

int main() {
  struct Bits a;
  set_size( &a, 4); // miesce na 4 bity
  struct Bits b;
  set_size( &b, 40); // miesce na 40 bitow

  int status = set_bit( &a, 7, 1 ); // ustaw 7 bit na 1 (funcja nie powinna zadzialac bo wychodzimy poza zakres)
  std::cout << " status " << status << std::endl;
  status = set_bit( &a, 2, 1 );

  std::cout << " status " << status << std::endl;
  print_bits( &a ); // wypisanie tablicy bitow 

  std::cout << get_bit( &a, 0 ) << " " << get_bit( &a, 2 ) << std::endl; // pobieramy wartosc bitow z pozycji 0 i 2
  
  set_bit( &b, 25, 1 );
  set_bit( &b, 26, 1 );
  set_bit( &b, 27, 1 );
  set_bit( &b, 26, 0 ); // ustawiamy warosc bitu na 0
  print_bits( &b ); 
  std::cout << "Po clearowaniu " << std::endl;
  clear_bits( &b );  // ustawaimy wszystkie bity na 0
  print_bits( &b );
  std::cout << "Po kopiowaniu " << std::endl;
  copy_bits( &a, &b ); // kopiujemy wartosci bitow z a do b (zakladamy ze ciag a jest krotszy niz b)
  print_bits( &b );

  // UWAGA: brak jest funkcji pozwalajacych zwolnic pamiec (gdyby komus przyszlo do glowy ja dynamicznie alokowac)
}
/* wynik
 status -1
 status 0
0100 
0 1
00000000 00001010 00000000 00000000 00000000 
Po clearowaniu 
00000000 00000000 00000000 00000000 00000000 
Po kopiowaniu 
00000000 00000000 00000000 00000000 00000100 
 */
