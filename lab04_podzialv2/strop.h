#ifndef strop_h
#define strop_h

/**
*struktura @delimited przechowuje dane do napisu, który zostanie podzielony. 
    @poczatek  - wskaznik na poczatek lancucha z napisem
    @separator - znak rozdzielajacy wyrazy (np spacja, przecinek itp)
    @start     - wskaznik na poczatek segmentu do wyciecia
    @end       - wskaznik na koniec segmentu do wyciecia
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
*funkcja @get_fragment pobiera wskaznik na strukture @delimited oraz wskaznik na tablice @buffer. Kopiuje segment do wyciecia do tablicy @buffer
*ostatni znak @buffer ustawia jako '\0' .
*/
void get_fragment(delimited *del, char *buffer);
/**
*funkcja @next wywoluje funkcje pomocnicze @next_delim oraz @next_not_delim przygotowujac poprzez nie kolejny segment do wyciecia i wstawienia poprzez bufor na ekran. 
*Zwraca wartosc typu bool mowiaca, czy jest to koniec lancucha(czy potrzebne jest pobranie kolejnego segmentu). Jesli jest to koniec lancucha zwraca false i przekazuje informacje
    ze nie ma potrzeby pobierac dalej segmentow. W przeciwnym razie zwraca true.
*/
bool next(delimited *del);
/**
*@next_delim funkcja pomocnicza pobierajaca wskaznik do lancucha i wskaznik na struktre delimited z której odczytuje separator. Przesuwa sie po lancuchu az do momentu napotkania separatora.
* Wyznacza segment do wyciecia
*/
const char *next_delim(const char *test, delimited *del);
/**
*@next_not_delim pobiera wskaznik do lancucha i wskaznik na struktre delimited z której odczytuje separator. Przesuwa po lancuchu do momentu kiedy znak przestanie byc separatore.
*Wyznacza poczatek nastepnego segmentu do wyciecia.
*/
const char *next_not_delim(const char *test, delimited *del);
/**
*@fragment_size . Pobiera wskaznik do struktury del.Zwraca ilosc bajtow fragmentu do wyciecia.
*/
unsigned int fragment_size(delimited *del);
/**
*@funkcja przywraca wskazniki @del.start i @del.end do ustawien poczatkowych (nadanych w funkcji @chunk)
*/
void rewind(delimited *del);
/**
*@previous funkcja cofająca operacje wykonywana przez funkcje @next
*/
void previous(delimited *del);
/**
*@previous_delim funkcja pomocnicza  pobierajaca wskaznik do lancucha i wskaznik na struktre delimited z której odczytuje separator. Przesuwa sie po lancuchu az do momentu napotkania separatora wstecz. Jest funkcja odwrotna do 
* funkcji @next_delim . Zatrzymuje sie jesli napotka separator lub poczatek lancucha.
*/
const char *previous_delim(const char *tekst, delimited *del);
/**
*@previous_not_delim funkcja pomocnicza  pobierajaca wskaznik do lancucha i wskaznik na struktre delimited z której odczytuje separator. Przesuwa sie po lancuchu az do momentu napotkania litery wstecz. Jest funkcja odwrotna do 
* funkcji @next_not_delim . Zatrzymuje sie jesli napotka separator lub poczatek lancucha.
*/
const char *previous_not_delim(const char *tekst, delimited *del);

#endif
