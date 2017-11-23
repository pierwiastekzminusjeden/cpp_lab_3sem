#ifndef LIST_H
#define LIST_H

#include <cstdlib>
#include <cstring>
/**
*Struktura @Element jest podstawowym węzłem listy. Przechowuje informacje o położeniu następnego węzła oraz
    dane.
*/
struct Element{
    char *data;
    Element *next;
};
/**
*struktura @List zawiera wskaznik do głowy listy. Dostawanie się do listy odbywa się za pomocą tej przekazania do
    odpowiedniej funkcji stuktury @List.
*/
struct List{
    Element *head;
};
/**
*funkcja @prepare inicjuje liste i ustawia wskaznik na głowę listy jako NULL.
*/
void prepare(List *list);
/**
*funkcja @add alokuje pamięć na nowy węzeł listy i dodaje element przekazany w 2 argumencie na koniec listy.
    Kopiuje łańcuch znakowy z argumentu @buffor i dodaje na koniec listy.
*/
void add(List *list, char *buffor);
/**
*funkcja @empty sprawdza czy lista jest pusta. Zwraca wartosc true jesli jest pusta, false jesli nie.
*/
bool empty(const List *list);
/**
*funkcja @dump wyswietla kolejne wezly listy poczawszy od pierwszego wstawiajac pomiedzy kolejne 
    ciagi znakow bedace danymi w liscie spacje. Czyta liste poczawszy od głowy.
*/
void dump(const List *list);
/**
*funkcja @clear zwalnia pamiec zaalokowana w funkcji @add na kolejne elementy listy 
    oraz tablice znakowe.
*Po zwolnieniu pamieci inicjowana jest pusta lista.
*/
void clear(List *list);


#endif
