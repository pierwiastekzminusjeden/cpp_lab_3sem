#pragma once
#include "MalenstwoSamoSprzatacz.h"


class Malenstwo{

public:
//Konstruktor domyślny. Ustawia _value na zero, zwiększa _counter 
//(licznik referencji) o jeden
    Malenstwo();
//Konstruktor konwertujący, Ustawia wartość value w obiekcie klasy Malenstwo
//Zwiększa counter o jeden.
    Malenstwo(int value);
//Dekonstruktor, Zmniejsza counter o jeden.
    ~Malenstwo();
//Zwraca wartosc znajdującą się pod polem _value w obiekcie klasy Malenstwo.
    int & wartosc();
//Przeciazenie operatora new. Alokuje pamiec na tablice 100 obiektow klasy Malenstwo.
//Jezeli tablica juz istnieje zwraca nastepne wolne miejsce w tablicy. Pamiec nalezy zwolnic.
    void * operator new(size_t size);
//Przeciazenie operatora delete. Jeżeli nie ma już obiektow klasy Malenstwo w tablicy 
//dealokuje miejsce zarezerwowane na tablice.
    void operator delete(void * toDel);
//Przeciazenie operatora (). 
    Malenstwo *operator()();
//Przeciazenie operatora +. Zwraca adres elementu tablicy.
    Malenstwo * operator+(int index);

private:
//Wartosc int przechowywana przez obiekt. 
    int _value;
//Statyczny licznik utworzonych obiektów.
    static int _counter;
//Statyczna tablica obiektow klasy malenstwo.
    static Malenstwo *_tab;
};
