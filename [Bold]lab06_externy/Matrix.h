#ifndef MATRIX_H
#define MATRIX_H

struct Vector;
/** 
* Struktura odzwierciedlająca tablicę dwuwymiarową.
*
* @param tab        wskaźnik na tablice jednowymiarową.
* @param columns    liczba kolumn
* @param rows       liczba wierszy
* @size             całkowity rozmiar równy @rows * @columns
*/
struct Matrix{
    int *tab;
    int columns;
    int rows;
    int size;

};
/**
* Funkcja transformująca wektor integerów na macierz o zadanej liczbie wierszy i kolumn.
*
* Funkcja alokuje pamieć na tablicę dwuwymiarową typu @Matrix.
* Funkcja alokuje pamięc na tablicę jednowymiarową o rozmiarze @vec.size
*
* @param vec        wskaźnik na wektor, z którego pobrane zostaną dane do macierzy
* @param rows       liczba wierszy tworzonej macierzy
* @param columns    liczba kolumn tworzonej maceirzy
* @return           wskaźnik na utworzoną macierz rozmiarów @rows x @columns z danymi pobranymi z @vec
*
*/
Matrix *make_matrix(Vector *vec, int rows, int columns);
/**
* Funkcja wypisuje tablicę dwuwymiarową typu @Matrix wierszami w nowych liniach.
*
* @param mat    wskaźnik na macierz
*/
void print_matrix(Matrix *mat);
/**
* Funkcja zwalniająca pamiec zaalokowaną przez funkcje @make_matrix.
*
* @param mat    wskaźnik na macierz
*/ 
void del_matrix(Matrix *mat);

#endif
