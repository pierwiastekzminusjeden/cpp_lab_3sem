#include <iostream>
#include "strop.h"

#define CHECK(__COND, __MSG ) if ( ! (__COND) ) { std::cerr << __FILE__ << " " << __LINE__ << " " << __MSG << "\n"; return -1; }

int main(int, const char**) {
  delimited del;
  const char* test1 ="Ala  ma";
  chunk(test1, &del, ' ');

  const char* a = next_delim( test1, &del );
  CHECK( a == test1 + 3, "Przesuniecie do pierwszej spacji nie dziala"); 
  const char* b = next_delim( a, &del );
  CHECK( b == a, "Przejscie przez spacje"); 

  const char* c = next_not_delim( a, &del );  
  CHECK( c == test1 + 5, "Przesuniecie do pierwszej NIE spacji nie dziala"); 

  const char* c1 = next_not_delim( c, &del );  
  CHECK( c1 == c, "Przejscie przez normalny znak"); 
  
  const char* koniec = next_delim( c, &del );
  CHECK( koniec == test1 + 7, "Przeskakujemy koniec");


  CHECK( del.start == test1 , "Start na starcie");
  CHECK( del.end == test1 , "End na starcie");
  

  bool krok1 = next( &del );
  CHECK( krok1 == true, "Mamy jedno slowo");
  CHECK( del.start == test1 , "Start na starcie");
  CHECK( del.end == test1+3 , "End po slowie Ala");
  bool krok2 = next( &del );
  CHECK( krok2 == true, "mamy drugie slowo");
  CHECK( del.start == test1 + 5 , "Start poczatku slowa ma");
  CHECK( del.end == test1 + 7 , "End na koncu ");  
  
  return 0;
}
