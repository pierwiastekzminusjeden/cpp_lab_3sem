#include <iostream>
#include <cstdlib>
#include "bitarray.h"

void init(BitArray *bit, int rows , int columns){

    bit->numberOfColumns = columns;
    bit->numberOfRows = rows;
    bit->numberOfBitColumns = columns / (8*sizeof(char));
    if(columns % (8*sizeof(char)) != 0)
        bit->numberOfBitColumns++;
    bit->tab = (char **)malloc(bit->numberOfRows * sizeof(char *));
    for(int i = 0; i < rows; i++)
        bit->tab[i] = (char *)malloc(bit->numberOfBitColumns*sizeof(char));
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

void print(const BitArray *bit, const char *sign){
    std::cout<< sign <<std::endl;
    int index;
    int cell;

    for(unsigned i = 0; i < (bit->numberOfRows); i++){
        for(unsigned j = 0; j < bit->numberOfColumns; j++){
            index=j/8;
            cell=j%8;
                std::cout<< ((bit->tab[i][index] & (1 << cell))!=0);
        }
        std::cout<<std::endl;
    }
}

void clear(BitArray *bit){
    if(bit->tab == NULL)
        return;
    for(int i=0; i < bit->numberOfRows; i++)
         free(bit->tab[i]);
    free(bit->tab);
    bit->tab = NULL;
    
}

BitArray *negate(BitArray *bit){
    int index;
    int cell;

    for(unsigned i = 0; i < (bit->numberOfRows); i++){
        for(unsigned j = 0; j < bit->numberOfBitColumns; j++){
            index=j/8;
            cell=j%8;
            bit->tab[i][index] = ~(bit->tab[i][index]);
        }
    }
    return bit;
}

void xor_arrays(BitArray *bit, const BitArray *b1, const BitArray *b2){
    init(bit, b1->numberOfRows, b1->numberOfColumns);
    
    int index;
    int cell;
    for(unsigned i = 0; i < (bit->numberOfRows); i++){
        for(unsigned j = 0; j < bit->numberOfBitColumns; j++){
            index=j/8;
            cell=j%8;
            bit->tab[i][index] = (b1->tab[i][index])^(b2->tab[i][index]);
        }
    }
}
