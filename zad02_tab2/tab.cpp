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

void set_part(Tab *tab, TabRange range, int value){
  
  for(int j = range.y1; j < range.y2; j++){
    for(int i = range.x1 ; i < range.x2; i++)
      tab->arr[j*tab->sep + i] = value;
  }

}

void print(Tab *tab){
  int separate=0; //zmienna pomocnicza

  for(int i=0; i<tab->numberOfCollumns * tab->numberOfRows ; i++){
    if(separate % tab->sep == 0)
      std::cout << "| ";

    std::cout << tab->arr[i] << " ";

    if(separate++ != 0 && separate % tab->sep == 0)
      std::cout << "|"<< std::endl;
  }
}

Tab *extract(Tab *tab, TabRange range){
  Tab *newTab = new Tab;
  newTab->numberOfCollumns = (range.x2 - range.x1);
  newTab->numberOfRows = (range.y2 - range.y1);
  newTab->sep = newTab->numberOfCollumns;
  newTab->arr = (int *)malloc(newTab->numberOfCollumns * newTab->numberOfRows * sizeof(int));
  
  int k=0;
  for(int j = range.y1; j < range.y2; j++){
    for( int i = range.x1 ; i < range.x2; i++)
      newTab->arr[k++] =tab->arr[j*tab->sep + i];
  }
  return newTab;
}

void clean(Tab *tab){
  free(tab->arr);
}
