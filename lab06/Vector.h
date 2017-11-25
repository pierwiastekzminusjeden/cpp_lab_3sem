#ifndef VECTOR_H
#define VECTOR_H

extern int MAX_VEC;

struct Matrix;
/**
* Struktura reprezentująca nierozszerzalny wektor integerów.
*
* @param tab    wskaźnik na tablicę jednowymiarową
* @size         rozmiar tablicy
*/
struct Vector{
    int *tab;
    int size;
};
/**
* Funkcja inicjalizująca wektor jednowymiarową o zadanym rozmiarze, o ile nie przekracza on maksymalnego możliwego rozmiaru @MAX_VEC.
*
* @param size   rozmiar tablicy
* @return       Zwraca wyzerowany wektor integerów 
*
* Funkcja alokuje pamieć na strukturę typu @Vector.
* Funkcja alokuje pamięć na tablicę w strukturze o zadanym rozmiarze @size.
*/
Vector *make_vec(int size);
/**
* Funkcja wstawiająca wartość w zadane miejsce w wektorze.
*
* @param vec    wektor typu @Vector
* @param value  zadana wartosc
* @param index  indeks pod który wartość ma zostać wstawiona
*/
void value_set_vec(Vector *vec, int value, int index);
/**
* Funkcja wypisująca wektor począwszy od zerowego indeksu w tablicy.
*
* @param vec    wektor typu @Vector
*/
void print_vec(Vector *vec);
/**
* Funkcja zwraca całkowity rozmiar wektora.
*
* @param vec    wektor typu @Vector
*/
int size_vec(Vector *vec);
/**
* Funkcja transformująca zadany wiersz z macierzy na wektor.
*
* @param mat    zadana macierz typu @Matrix
* @param row    wiersz, który ma zostać przetworzony na wektor
* @return       wektor typu @Vector o rozmiarze wiersza @mat oraz danymi skopiowanymi z tego wersza
*
* Funkcja alokuje pamięć na wektor typu @Vector.
* Funkcja alokuje pamięć na tablicę o rozmiarze @mat.row.
*/
Vector* from_matrix_row(Matrix* mat, unsigned row);
/**
* Funkcja @del_vec zwalnia pamięć, która została zaalokowana na @Vector.
*
* @param vec    wektor typu @Vector
*/
void del_vec(Vector *vec);

#endif
