#ifndef MATRIX_H
#define MATRIX_H

struct Vector;
/** 
*struktura @Matrix jest implementacją tablicy dwuwymiarowej. Przechowuje podstawowe parametry, takie jak rozmiar, liczba wierszy i kolumn, 
    oraz tablica przechowująca dane.
*/
struct Matrix{
    int *tab;
    int columns;
    int rows;
    int size;

};
/**
*Funkcja @make_matrix transformuje zadany wektor integerów na tablicę dwuwymiarową o zadanej liczbie wierszy i kolumn.
*Alokuje pamiec na strukturę @Matrix oraz tablicę jednowymiarową int o rozmiarze odpowiadającym ilości danych z przekazanego 
    wektora @Vector. Dane są kopiowane z @Vector do @Matrix.

*/
Matrix *make_matrix(Vector *vec, int rows, int columns);
/**
*Funkcja @print_matrix wypisuje tablicę dwuwymiarową  typu @Matrix wierszami w nowych liniach.
*/
void print_matrix(Matrix *mat);
/**
*Funkcja @del_matrix zwalnia pamiec zaalokowana przez funkcje @make_matrix.
*/ 
void del_matrix(Matrix *mat);

#endif
