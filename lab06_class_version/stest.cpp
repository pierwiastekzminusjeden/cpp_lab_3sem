/*
  Tematem zadania jest cwiczenie z radzeniem sobie z krzyzowymi 
  zaleznosciami miedzy fragmentami programu. 
  W takiej sytacjiuzywamy deklaracji wyprzedzajacych.
  
  W zadaniu mamy dwie struktury Vector i Matrix, ktore to musza wspolpracowac. 

  Aby wymusic krzyzowe zaleznosci funkcja
  Vector* from_matrix_row(Matrix* m, unsigned row);
  musi byc zadeklarowana w pliku. Vector.h a zdefiniwana w Vector.cpp

  UWAGA: Nie spelnienie tego warunku skutkuje 0pkt za zadanie.

  Do alokacji nalezy uzyc operatorow new a do dealokacji delete. 
  
  HINT: tablice 2D mozna (i jest optymalniej) przechowac tablicy 1D
 */

#include <iostream>
#include "Vector.h"
#include "Vector.h"
#include "Matrix.h"

int main()
{

    MAX_VEC = 20;
    Vector v1 = Vector(5);
    v1.value_set(2, 99); // wartosc 99 pod indeksem 2 (liczmy od 0)
    v1.print();
    Vector v2 = Vector(25); // utworzenie nie powodlo sie, przekroczony rozmiar maksymalny
    v2.print();

    MAX_VEC = 10;
    Vector v3 = Vector(15); // utworzenie nie powiodlo sie
    v3.print();

    Vector v4 = Vector(9);
    v4.print();
    for (int i = 0; i < v4.get_size(); ++i)
        v4.value_set(i, i * 2);
    v4.print();

    Matrix m = Matrix(v4, 3, 3);
    std::cout << "m 3 x 3\n";
    m.print();

    Vector v5 = Vector(m, 1); // rzedy liczymy od 0
    std::cout << "rzad 1\n";
    v5.print();
}
/* wynik
0 0 99 0 0 
empty
empty
0 0 0 0 0 0 0 0 0 
0 2 4 6 8 10 12 14 16 
m 3 x 3
0 2 4 
6 8 10 
12 14 16 
rzad 1
6 8 10 
 

 */
