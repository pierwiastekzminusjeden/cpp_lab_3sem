#ifndef ext_h
#define ext_h

/**
*struktura @Ext przechowuje podstawowe informacje na temat wektora
*@startSize - rozmiar poczatkowy
*@policy    - wartosc aktualnego przydzialu pamieci
*@funPolicy - wskaznik na funkcje okreslajaca polityke pamieci
*@size      - aktualny rozmiar tablicy
*@tab       - wskaznik na tablice alokowana dynamicznie
*/
struct Ext{
    int startSize; //rozszerzanie pamieci
    int policy;
    int (*funPolicy)(int);
    int size;
    int *tab;
};
/**
*@init(Ext *vec) funkcja inicjalizująca wektor o standardowych parametrach.
*@vec.startSize okresla standardowo na wartosc 5
*@vec.policy jest zwieksza sie stale o @startSize, gdy potrzebny jest nowy przydzial pamieci
*@vec.funPolicy=NULL brak okreslonej polityki przydzialu pamieci
*@vec.tab dynamicznie zaalokowane na rozmiar okreslony przez @vec.startSize
*/
void init(Ext *vec);
/**
*@init_with_size_and_policy(Ext *vec, int start, int(*fun)(int)) funkcja inicjalizująca wektor o zadanych parametrach .
*@vec.startSize rowne argumentowi funkcji @start
*@vec.funPolicy przechowuje wskaznik na funkcje int(*fun)(int) okreslajaca polityke przydzialu pamieci
*@vec.policy rowne @vec.funPolicy(@vec.startSize)   
*@vec.tab dynamicznie zaalokowane na rozmiar okreslony przez @vec.startSize
*/
void init_with_size_and_policy(Ext *vec, int start , int (*fun)(int) );
/**
*@insert(Ext *vec, int value)   funkcja wstawiajaca wartosc value na koniec tablicy
*Jesli jest dostepne miejsce (@vec.size < vec.policy) wstawia wart @value na koniec i inkrementuje @vec.size .
*W przeciwnym wypadku zwieksza rozmiar tablicy zgodnie z zadana lub nie polityka, a nastepnie tak jak w 1 przypadku.
*/
void insert(Ext *vec, int value);
/**
*@size(Ext *vec) wyswietla aktualny rozmiar wektora.
*/
int size(Ext *vec);
/**
*@wyswietla aktualna pojemnosc wektora
*/
int capacity(Ext *vec);
/**
@at(Ext *vec, int value)    zwraca element pod indeksem @value wektora
*/
int at(Ext *vec, int value);
/**
*@for_each_element(Ext *vec, void (*fun)(int *)) wykonuje dla wszyskich elementow czynnosc zadana
    przez funkcje bedaca 2 argumentem wywolania funkcji.
*/
void for_each_element(Ext *vec, void (*fun)(int *)); //nie jestem pewien drugiego argumentu
/**
*@clone(Ext *vec) klonuje wektor vec i zwraca wskaznik do klona
*/
Ext *clone(Ext *vec);
/**
*@clear(Ext *vec) zwalnia pamiec na dynamicznie zaalokowane tablice @vec.tab
*/
void clear(Ext *vec);
/**
*@print funkcja pomocnicza wypisujaca element
*/
void print(int *x);
/**
*@zero funkcja pomocnicza zerujaca element
*/
void zero(int *x);

#endif
