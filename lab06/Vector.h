#ifndef VECTOR_H
#define VECTOR_H

extern int MAX_VEC;

struct Matrix;
/**
*Struktura @Vectorjest nierozszeżalnym wektor integerów.
*/
struct Vector{
    int *tab;
    int size;
};
/**
*Funkcja @make_vec inicjalizuje wektor o zadanym rozmiarze, o ile nie przekracza on maksymalnego możliwego rozmiaru @MAX_VEC.
*Alokuje pamieć na wektor @Vec.
*Alokuje pamięć na tablicę w strukturze @Vec o zadanym rozmiarze.
*/
Vector *make_vec(int size);
/**
*@value_set_vec wstawia do wektora wartość @value pod zadany @index.
*/
void value_set_vec(Vector *vec, int value, int index);
/**
@print_vec wypisuje wektor począwszy od indeksu zerowego aż do ostatniego
*/
void print_vec(Vector *vec);
/**
*@size_vec zwraca całkowity rozmiar wektora.
*/
int size_vec(Vector *vec);
/**
*funkcja @from_matrix_row transformuje zadany wiersz z zadanej macierzy @Matrix
     do zwracanego przez funkcje wektora @Vector.
*/
Vector* from_matrix_row(Matrix* mat, unsigned row);
/**
*funkcja @del_vec zwalnia pamięć, która została zaalokowana na @Vector.
*/
void del_vec(Vector *vec);

#endif
