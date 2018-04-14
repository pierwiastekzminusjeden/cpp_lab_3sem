/**
 * Celem zadania jes napisanie pomocniczej strukttory i funkcji umozliwajace 
 * efektywne dzielenie napisau na fragmenty.
 * Nie mozna w nim uzywac zadnych struktur c++ ani dynamiczej alokacji pamieci.
 * 
 * Funkcja chunk przygotowuje pomocniczą strukturę "delimited".
 * Funkcja next zwraca wartość "true" jeśli w napisie jest następna część napisu. 
 *  a jednocześnie przygotowuje "delimited" do pobrania tego podnapisu. 
 * Funkcja get_fragment kopiuje do bufora bierzącą część napisu.
 *
 * UWAGA: Zadanie jest rozwinięciem zadania z porzedniego tygodnia. 
 * Dodane sa funcje:
 * fragment_size - zwracajaca ilosc bajtow w buforze koniecznych do tego by get_fragment zadzialalo
 * rewind - przesuwajaca indeksy/eskazniki na poczatek napisu, ktory ma byc dzielony
 * i previous - cofajaca sie o jedno slowo w tyl.
 *
 *
 * UWAGA: jednoczesnie odbywa sie  podzial dwoch napisow i
 * uzycie zmiennych globalnych bedzie prowadzic do konfliktow.
 */
#include <iostream>
#include "strop.h"
#include "strop.h"

int main ( int argc, const char** argv ) {

  delimited d1;
  delimited d2;
  const char* test1 = "Ala ma kota    a kot ma    mysz";
  const char* test2 = "To, proste zadanie, juz zrobilem ale sie ciesze";
  
  chunk( test1, &d1, ' ' );
  chunk( test2, &d2, ',' );

  char buffer[20];

  while ( next( &d1 ) and next( &d2 ) ) {
    if ( fragment_size( &d1 ) < sizeof( buffer ) ) {
      get_fragment( &d1, buffer );
      std::cout << " >" << buffer <<"<";
    } else {
      std::cout << " ---za duzy kawalek w d1---" << std::endl;
    }

    if ( fragment_size( &d2 ) < sizeof( buffer ) ) {
      get_fragment( &d2, buffer );
      std::cout << " >" << buffer << "<"<< std::endl;
    }  else {
      std::cout << " ---za duzy kawalek w d2---" << std::endl;
    }
  }

  // powrot na poczatek
  rewind( &d1 );
  // trze kroki w przod, jeden w tyl
  next( &d1 ); 
  next( &d1 );
  next( &d1 );
  previous( &d1 );
  get_fragment( &d1, buffer );
  std::cout << "\n druga część napisu -- >" << buffer << "<\n";

  // krok w tyl
  previous( &d1 ); 
  get_fragment( &d1, buffer );
  std::cout << "\n pierwsza czesc napisu -- >" << buffer <<"<\n";
  
}
/* wynik
 >Ala< >To<
 >ma< > proste zadanie<
 >kota< ---za duzy kawalek w d2---

 druga część napisu -- >ma<

 pierwsza czesc napisu -- >Ala<

 */
