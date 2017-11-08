#include <iostream>
#include <cstdlib>
#include "tab.h"


void init(Tab *tab, int collumns, int rows,  int value){    
  tab->arr = (int *)malloc(collumns * rows *sizeof(int));
 // odpowiednia tablica jednowymiarowa
  tab->sep = collumns;  //(*tab[9]=tab[6][3])
  tab->numberOfCollumns = collumns;
  tab->numberOfRows = rows;                        //tab[6]=tab[1][0]
  for(int i = 0; i < collumns * rows; i++)
    tab->arr[i] = value;
}

void diag(Tab *tab, int value){
  for(int i=0; i< tab->numberOfRows; i++)
      tab->arr[i*tab->sep + i] = value ;
}

void set(Tab *tab, int collumn, int row, int value){
  if(collumn >= tab->numberOfCollumns || row >= tab->numberOfRows)
    return;
  else
    tab->arr[tab->sep * row + collumn] = value;
}

void set_part(Tab *tab, TabRange tabRange, int value){

}

void print(Tab *tab){
  int separate=0;
  std::cout << "| ";

  for(int i=0; i<tab->numberOfCollumns * tab->numberOfRows ; i++){
    td::cout << tab->arr[i] << " ";
    if(separate++ != 0 && separate % tab->sep == 0){
      std::cout << "|"<< std::endl;
      std::cout << "| ";
    }
//   poprawić kreske w nowej lini na koncu
  }
  
}

Tab *extract(Tab *tab, TabRange tabRange){
   
   return tab;
}

void clean(Tab *tab){

}
