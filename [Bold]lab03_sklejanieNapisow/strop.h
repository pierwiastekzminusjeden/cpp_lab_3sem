#ifndef strop_h
#define strop_h

/**
*struktura @delimited przechowuje dane do napisu, który zostanie podzielony. 
    @poczatek - wskaznik na poczatek lancucha z napisem
    @separator - znak rozdzielajacy wyrazy (np spacja, przecinek itp)
    @start - wskaznik na poczatek segmentu do wyciecia
    @end - wskaznik na koniec segmentu do wyciecia
*/
struct delimited{
    const char *poczatek;
    char separator;
    const char *end;
    const char *start;   
};
/**
*funkcja @chunk pobiera wskaznik na napis (char *), wskaznik na strukture (@delimited) oraz znak (char) rozdzielajacy.
*Pracuje na strukturze.
*Zapisuje do struktury wskaznik na łancuch znakowy (napis) @poczatek oraz znak rozdzielajacy jako @separator
*Ustawia wstepnie wskaznik @end oraz @start na @poczatek.
*/
void chunk(const char *test, delimited *del, char znak);
/**
*funkcja @part pobiera wskaznik na strukture @delimited oraz wskaznik na tablice @buffer. Kopiuje segment do wyciecia do tablicy @buffer
*ostatni znak @buffer ustawia jako '\0'
*/
void part(delimited *del, char *buffer);
/**
*funkcja @next wywoluje funkcje pomocnicze @next_delim oraz @next_not_delim przygotowujac poprzez nie kolejny segment do wyciecia i wstawienia poprzez bufor na ekran. 
*Zwraca wartosc typu bool mowiaca, czy jest to koniec lancucha(czy potrzebne jest pobranie kolejnego segmentu). Jesli jest to koniec lancucha zwraca false i przekazuje informacje
    ze nie ma potrzeby pobierac dalej segmentow. W przeciwnym razie zwraca true.
*/
bool next(delimited *del);
/**
*@next_delim funkcja pomocnicza pobierajaca wskaznik do lancucha i wskaznik na struktre delimited z której odczytuje separator. Przesuwa sie po lancuchu az do momentu napotkania separatora. Wyznacza segment do wyciecia
*/
const char *next_delim(const char *test, delimited *del);
/**
*@next_not_delim pobiera wskaznik do lancucha i wskaznik na struktre delimited z której odczytuje separator. Przesuwa po lancuchu do momentu kiedy znak przestanie byc separatore.
*Wyznacza poczatek nastepnego segmentu do wyciecia.
*/
const char *next_not_delim(const char *test, delimited *del);

#endif
