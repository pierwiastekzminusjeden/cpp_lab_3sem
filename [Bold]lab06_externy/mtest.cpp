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


int main() {

  MAX_VEC = 20;
  Vector* v1 = make_vec( 5 );
  value_set_vec( v1, 2,  99 ); // wartosc 99 pod indeksem 2 (liczmy od 0) 
  print_vec( v1 );
  Vector* v2 = make_vec( 25 ); // utworzenie nie powodlo sie, przekroczony rozmiar maksymalny
  print_vec( v2 );

  MAX_VEC = 10;
  Vector* v3 = make_vec( 15 ); // utworzenie nie powiodlo sie 
  print_vec( v3 );

  Vector* v4 = make_vec( 9 );
  print_vec( v4 );
  for ( int i = 0; i < size_vec( v4 ); ++i )
    value_set_vec( v4, i, i*2 );
  print_vec( v4 );
  
  Matrix *m = make_matrix( v4, 3, 3 );
  std::cout << "m 3 x 3\n" ;
  print_matrix( m );

  Vector* v5 = from_matrix_row( m, 1 ); // rzedy liczymy od 0
  std::cout << "rzad 1\n" ;
  print_vec( v5 );
  
  del_vec( v1 );
  del_vec( v2 );
  del_vec( v3 );
  del_vec( v4 );
  del_vec( v5 );
  del_matrix( m );
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
