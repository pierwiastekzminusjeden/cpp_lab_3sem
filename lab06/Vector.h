#ifndef VECTOR_H
#define VECTOR_H

extern int MAX_VEC;

struct Matrix;
/**
* @brief    Struktura reprezentująca nierozszerzalny wektor integerów.
*
* @param tab    wskaźnik na tablicę jednowymiarową
* @param size         rozmiar tablicy                                       //czy bez param
*/
struct Vector{
    int *tab;
    int size;
};
/**
* @brief    Funkcja inicjalizująca wektor jednowymiarową o zadanym rozmiarze, 
* o ile nie przekracza on maksymalnego możliwego rozmiaru @MAX_VEC.
*
* Funkcja alokuje pamieć na strukturę typu @Vector.
* Funkcja alokuje pamięć na tablicę w strukturze o zadanym rozmiarze @size.
*
* @param size   rozmiar tablicy
* @return       wskaźnik na wyzerowany wektor  
*/
Vector *make_vec(int size);
/**
* @brief Funkcja wstawiająca wartość w zadane miejsce w wektorze.
*
* @param vec    wskaźnik na wektor typu @Vector
* @param value  zadana wartosc
* @param index  indeks pod który wartość ma zostać wstawiona
*/
void value_set_vec(Vector *vec, int value, int index);
/**
* @brief    Funkcja wypisująca wektor począwszy od zerowego indeksu w tablicy.
*
* @param vec    wskaźnik na wektor typu @Vector
*/
void print_vec(Vector *vec);
/**
* @brief    Funkcja informująca o całkowitym rozmiarze tablicy w @Vector.
*
* @param vec    wskaźnik na wektor typu @Vector
*/
int size_vec(Vector *vec);
/**
* @biref    Funkcja transformująca zadany wiersz z macierzy na wektor.
*
* Funkcja alokuje pamięć na wektor typu @Vector.
* Funkcja alokuje pamięć na tablicę o rozmiarze @mat.row.
*
* @param mat    wskaźnik na zadaną macierz typu @Matrix
* @param row    wiersz, który ma zostać przetworzony na wektor
* @return       wskaźnik na wektor typu @Vector o rozmiarze wiersza @mat oraz danymi skopiowanymi z tego wersza
*/
Vector* from_matrix_row(Matrix* mat, unsigned row);
/**
* @brief    Funkcja zwalnia pamięć, która została zaalokowana na @Vector.
*
* @param vec    wskaźnik na wektor typu @Vector
*/
void del_vec(Vector *vec);

#endif
