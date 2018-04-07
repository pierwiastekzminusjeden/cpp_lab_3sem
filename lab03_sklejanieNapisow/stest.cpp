/**
 * Celem zadania jes napisanie pomocniczej strukttory i funkcji umozliwajace 
 * efektywne dzielenie napisau na fragmenty.
 * Nie mozna w nim uzywac zadnych struktur c++ ani dynamiczej alokacji pamieci.
 * 
 * Funkcja chunk przygotowuje pomocniczą strukturę "delimited".
 * Funkcja next zwraca wartość "true" jeśli w napisie jest następna część napisu. 
 *  a jednocześnie przygotowuje "delimited" do pobrania tego podnapisu. 
 * Funkcja part kopiuje do bufora bierzącą część napisu.
 *
 * UWAGA: jednoczesnie odbywa sie  podzial dwoch napisow i
 * uzycie zmiennych globalnych bedzie prowadzic do konfliktow.
 *  
 * Program należy skompilować do pliku "stest" w systemie cmake.
 */
#include <iostream>
#include "strop.h"
#include "strop.h"

int main ( int argc, const char** argv ) {

  delimited d1;
  delimited d2;
  const char* test1 = "Ala ma kota    a kot ma    mysz";
  const char* test2 = "To zadanie, bardzo proste, juz zrobilem";

  chunk(test1, &d1, ' ');
  chunk(test2, &d2, ',');

  char buffer[256];

  while ( next(&d1) && next(&d2) ) {
    part(&d1, buffer);
    std::cout << "-- >" << buffer <<"<";

    part(&d2, buffer);
    std::cout << ">" << buffer << "<"<< std::endl;
  }
}
/* wynik
-- >Ala<>To zadanie<
-- >ma<> bardzo proste<
-- >kota<> juz zrobilem<

 */
