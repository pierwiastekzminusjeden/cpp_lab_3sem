#include <iostream>
#include "bitarray.h"


void init(BitArray *bit, int rows , int columns){

    bit->numberOfColumns = columns;
    bit->numberOfRows = rows;

    bit->tab = new char * [rows];

    int numberOfBitColumns = columns / (8*sizeof(char));
    if(numberOfBitColumns % columns != 0)
        numberOfBitColumns++;
    bit->numberOfBitColumns = numberOfBitColumns;

    for(int i = 0; i < rows; i++)
        bit->tab[i] = new char [bit->numberOfBitColumns];

}

unsigned int rows(BitArray *bit){

    return bit->numberOfRows;
}

unsigned int cols(BitArray *bit){

    return bit->numberOfColumns;
}

void set(BitArray *bit, int row, int column, int value){

    int cell = column / (8 * sizeof(char));
    int position = column % (8 * sizeof(char));

    if(value)
        bit->tab[row][cell] =  bit->tab[row][cell] | (1<<position);
    else
        bit->tab[row][cell] =  bit->tab[row][cell] & ~(1<<position);
    
}

void print(BitArray *bit, char *etykieta){
  
    
}



void clear(BitArray *bit){
    for(int i=0; i < bit->numberOfRows; i++)
        delete [] bit->tab[i];
    delete bit->tab;
    
}

void negate(BitArray *bit){

}

void xor_arrays(BitArray *bit, const BitArray *b1, const BitArray *b2){

}
