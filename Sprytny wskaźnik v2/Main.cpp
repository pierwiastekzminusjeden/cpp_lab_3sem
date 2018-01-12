/*
 * Celem zadania jest napisanie klasy sprytnego wskaznika.
 * Prosze sobie to przecwiczyc, na nastepny raz zrobimy zadanie z dziedziczenia.
 *
 * Jest to klasa opakowujaca zwykly wskaznik w nastepujacey sposob.
 * Podczas konstrukcji przekazywany do tej klasy jest wskaznik. 
 * W obiekcie oprocz wskaznika przechowywany pownien byc licznik referencji.
 * Kazdy nastepny sprytny wskaznik pokazujacy na dany obiekt (to znaczy
 * sprytny wskaznik skonsruowany z innego sprytnego wskaznika) powinien 
 * zwiekszac ten licznik. Jesli sprytny wskaznik jest kasowany 
 * n.p. wychodzi poza zakres lub jesli zaczyna pokazywac na inny obiekt 
 * zmniejsza licznik referencji. Jesli licznik ten dojdzie do zera nalezy
 * skasowac tez obiekt wskazywany przez wskaznik.
 *
 * Dodatkowa funkcjonalnoscia jest metoda abandon, ktora pozwala na odebranie sprytnym 
 * wskaznikom prawa zarzadzania obiektem. Takie opuszczone sprytne wskazniki wskazuja na 0.
 *
 * Kod nalzy napisac w ten sposob aby za pomoca dyrektywy define SmartPointerValueType
 * moc zredefiniowac nazwe klasy jaka obsluguje.
 *
 * Klasa TestClassA jest trywialne (moze to byc nawet strutura)
 * ma jedynie nietrywalne konstruktory 
 * i destruktory wypisujace informacje o swoim wywolaniu (copy/paste z wyniku) 
 * a takze metode nazwa();
 * Jak ktos umie moze w implementacji uzyc klasy std::string.
 * (a jak nie to char* prosze pamietac o alokacji).
 * 
 * Skompilowac do pliku stest z flagami -Wall -g
 */
 
#include <iostream>

#include "TestClassA.h"
#define SmartPointerValueType TestClassA
#include "SmartPointer.h"



void print(const SmartPointer::value_type* t) {
  std::cout <<"..... TestClassA nazwa " << t->name() << std::endl;
}

int main() {
  {
    TestClassA a("test_A_0");
    print(&a);
  }
  std::cout << std::endl;
  char buffer[100];
  strcpy(buffer, "test_A_1");
  SmartPointer smart1(new TestClassA(buffer));
  print(*smart1);
  
  strcpy(buffer, "test_A_2");
  SmartPointer smart2(new TestClassA(buffer));
  print(*smart2);
 
  {
    SmartPointer smart3 = smart2; 
    std::cout << " ile wskaznikow wskazuje na ten obiekt? " << smart2.ref() << std::endl;
    print(*smart3);
    smart3 = smart1;
    std::cout << " ile wskaznikow wskazuje na ten obiekt? " << smart2.ref() << std::endl;
  }
  std::cout << " ile wskaznikow wskazuje na ten obiekt? " << smart2.ref() << std::endl;
  
  std::cout << std::endl;
  SmartPointer smart3(new TestClassA("test_A_3"));
  SmartPointer smart4 = smart3;
  TestClassA* x = smart3.abandon();
  delete x;
  
  x = *smart3;
  if ( x != 0 ) {
    std::cout <<"..... cos jest zle poniewaz smart3 nie powinien juz posiadac zadnego obiektu" << std::endl;
  }
  
  
}
/* wynik
.. Konstruuje TestClassA test_A_0
..... TestClassA nazwa test_A_0
.. Usuwam  TestClassA test_A_0

.. Konstruuje TestClassA test_A_1
..... TestClassA nazwa test_A_1
.. Konstruuje TestClassA test_A_2
..... TestClassA nazwa test_A_2
 ile wskaznikow wskazuje na ten obiekt? 2
..... TestClassA nazwa test_A_2
 ile wskaznikow wskazuje na ten obiekt? 1

.. Konstruuje TestClassA test_A_3
.. Usuwam  TestClassA test_A_3
.. Usuwam  TestClassA test_A_2
.. Usuwam  TestClassA test_A_1

 */
