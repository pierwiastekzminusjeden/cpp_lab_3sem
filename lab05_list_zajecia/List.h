#ifndef LIST_H
#define LIST_H

#include <cstdlib>
#include <cstring>
/**
*struktura @Element jest pojedynczym wezlem listy. Przechowuje podstawowe informacje o wezle listy (dane oraz wskaznik na nastepne miejsce)
    Przechowuje wskaznik na lancuch znakowy @data oraz wskaznik 
    na nastepny wezel. 
*/
struct Element{
    char *data;
    Element *next;
};
/**
*struktura @Element zawiera wskaznik do głowy listy oraz zmienna typu bool
    @isEmpty przechowujaca informacje czy lista jest pusta.
*/
struct List{
    Element *head;
};
/**
*funkcja @prepare inicjuje liste i ustawia @list->isEmpty 
    na wartosc prawdziwa (lista jest pusta).
*/
void prepare(List *list);
/**
*funkcja @add przyjmuje wskaznik na strukture @List oraz wskaznik na lancuch znakowy
    @buffor. Dodaje do nowego wezla listy w pole @data struktury @Element
    lancuch znakowy kopiujac go z @buffor. 
*Przy dodawaniu pierwszego elementu zmienia wartosc pola @isEmpty ze
    struktury @List na false.
*/
void add(List *list, char *buffor);
/**
*funkcja @empty sprawdza czy lista jest pusta. Zwraca wartość pola @isEmpty ze struktury @List.
*/
bool empty(const List *list);
/**
*funkcja @dump wyswietla kolejne wezly listy poczawszy od pierwszego wstawiajac pomiedzy kolejne 
    ciagi znakow z pol @data struktur @Element spacje.
*/
void dump(const List *list);
/**
*funkcja @clear zwalnia pamiec zaalokowana w funkcji @add na kolejne elementy listy (@Element)
    oraz tablice znakowe (@data ze struktury @Element). 
*Na koncu wywolywana jest funkcja @prepare, ktora inicjuje pusta liste.
*/
void clear(List *list);


#endif
