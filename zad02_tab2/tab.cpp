#include <iostream>
#include <cstdlib>
#include "tab.h"

//dane sa wczytywane w odwrotnej kolejnosci niz zwykle w tablicach dwuwym
void init(Tab *tab, int collumns, int rows, int value){ 

  tab->fullSize = collumns * rows ;     
  tab->arr = (int *)malloc(tab->fullSize * sizeof(int));
  tab->skip = collumns;                                 // wartosc przeskoku do kolejnego wiersza = ilosci kolumn zmienna dla wygody
  tab->numberOfCollumns = collumns;
  tab->numberOfRows = rows;                        
  for(int i = 0; i < tab->fullSize; i++)
    tab->arr[i] = value;
}

void diag(Tab *tab, int value){

  for(int i=0; i< tab->numberOfRows; i++)
      tab->arr[i * tab->skip + i] = value ;
}

void set(Tab *tab, int collumn, int row, int value){

  if(collumn >= tab->numberOfCollumns || row >= tab->numberOfRows || collumn <= 0 || row <= 0)
    return;
  else
    tab->arr[row * tab->skip + collumn] = value;
}

void set_part(Tab *tab, TabRange range, int value){
  
  for(int i = range.row1; i < range.row2; i++){
    for(int j = range.collumn1 ; j < range.collumn2; j++)
      tab->arr[i*tab->skip + j] = value;
  }
}

void print(Tab *tab){

  int position=0; //zmienna pomocnicza

  for(int i=0; i < tab->fullSize ; i++){
    if(position % tab->skip == 0)
      std::cout << "| ";

    std::cout << tab->arr[i] << " ";

    if(++position % tab->skip == 0)
      std::cout << "|"<< std::endl;
  }
}

Tab *extract(Tab *tab, TabRange range){
  
  Tab *newTab = new Tab;
  newTab->numberOfCollumns = (range.collumn2 - range.collumn1);
  newTab->numberOfRows = (range.row2 - range.row1);
  newTab->skip = newTab->numberOfCollumns;
  newTab->fullSize = newTab->numberOfCollumns * newTab->numberOfRows ;
  newTab->arr = (int *)malloc(newTab->fullSize * sizeof(int));
  
  int k=0;                                    //zmienna pomocnicza indeksujaca nowa tablice
  for(int i = range.row1; i < range.row2; i++){
    for( int j = range.collumn1 ; j < range.collumn2; j++)
      newTab->arr[k++] =tab->arr[i*tab->skip + j];
  }
  return newTab;
}

void clean(Tab *tab){
  free(tab->arr);
}
