#ifndef ext_h
#define ext_h

/**
*struktura @Ext przechowuje podstawowe dane na tema v=wektora integerów. Wskaznik na tablice
    alokowaną dynamicznie. Początkowy rozmiar oraz polityke przydzielania pamieci
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
*/
void init(Ext *vec);

void init_with_size_and_policy(Ext *vec, int start , int (*fun)(int) );

void insert(Ext *vec, int value);

int size(Ext *vec);

int capacity(Ext *vec);

int at(Ext *vec, int value);

void for_each_element(Ext *vec, void (*fun)(Ext *)); //nie jestem pewien drugiego argumentu

Ext *clone(Ext *vec);

void clear(Ext *vec);

void print(Ext *vec);

void zero(Ext *vec);

#endif
