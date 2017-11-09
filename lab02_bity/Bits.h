#ifndef Bits_h
#define Bits_h
/**
*@Bits struktura przechowujaca tablice bitow @bits oraz 
    informacje o rozmiarze pakietu @size
*/
struct Bits{
    int size;
    char bits[5]; 
};

/**
*@set_size funkcja pobierajaca informacje o rozmiarze pakietu @length
    zapisuje w strukturze @str.size
*/
void set_size(struct Bits *str, int length);

/**
*@set_bit funkcja ustawiajaca bit @position w na zadana wartosc @value
    zwraca status operacji: nie powiodla sie (-1) , powiodla sie (0)
*/
int set_bit(struct Bits *str, int position, int value);

/**
*@print_bits funkcja wypisujaca tablice bitow
*/
void print_bits(struct Bits *str);

/**
*@get_bit funkcja pobierajaca i zwracajaca wartosc bitu z zadanej pozycji @position
*/
int get_bit(struct Bits *str, int position);

/**
*@clear_bits funkcja zerujaca cala tablice bitow w @str.bits
*/
void clear_bits(struct Bits *str);

/**
*@copy_bits funkcja kopiujaca tablice bitow z @str1.bits do @str2.bits
*/
void copy_bits(struct Bits *str1, struct Bits *str2);



#endif