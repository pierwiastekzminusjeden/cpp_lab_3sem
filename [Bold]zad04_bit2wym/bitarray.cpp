#include <iostream>
#include <cstdlib>
#include "bitarray.h"

void init(BitArray *bit, int rows, int columns){
    bit->nCols = columns;
    bit->nRows = rows;
    bit->chCols = columns / (8 * sizeof(char));
    if (columns % (8 * sizeof(char)) != 0)
        ++bit->chCols;

    bit->tab = new char *[bit->nRows] ;
    for (int i = 0; i < bit->nRows; i++)
        bit->tab[i] = new char [bit->chCols];
}

unsigned int rows(BitArray *bit){
    return bit->nRows;
}

unsigned int cols(BitArray *bit){
    return bit->nCols;
}

void set(BitArray *bit, int row, int column, int value){
    int cell = column / (8 * sizeof(char));
    int bitPos = column % (8 * sizeof(char));

    if (value)
        bit->tab[row][cell] = bit->tab[row][cell] | (1 << bitPos);
    else
        bit->tab[row][cell] = bit->tab[row][cell] & ~(1 << bitPos);
}

void print(const BitArray *bit, const char *comment){
    std::cout << comment << std::endl;
    int cell;
    int bitPos;

    for (int i = 0; i < (bit->nRows); i++){
        for (int j = 0; j < bit->nCols; j++){
            cell = j / (8 * sizeof(char));
            bitPos = j % (8 * sizeof(char));
            std::cout << ((bit->tab[i][cell] & (1 << bitPos)) != 0);
        }
        std::cout << std::endl;
    }
}

void clear(BitArray *bit){
    if(bit->nRows == 0)
        return;

    for (int i = 0; i < bit->nRows; i++)
        delete [] bit->tab[i];
    delete [] bit->tab;

    bit->nRows = 0;
    bit->nCols = 0;
}

BitArray *negate(BitArray *bit){  
    for (int i = 0; i < (bit->nRows); i++){
        for (int j = 0; j < bit->chCols; j++){  
            bit->tab[i][j] = ~(bit->tab[i][j]);
        }
    }
    return bit;
}

void xor_arrays(BitArray *bit, const BitArray *b1, const BitArray *b2){

    for (int i = 0; i < (bit->nRows); i++){
        for (int j = 0; j < bit->chCols; j++){
            bit->tab[i][j] = (b1->tab[i][j]) ^ (b2->tab[i][j]);
        }
    }
}
