#ifndef BITARRAY_H
#define BITARRAY_H

struct BitArray{
    char **tab;
    int nRows;
    int nCols;
    int chCols;
};

void init(BitArray *bit, int rows , int columns);

unsigned int rows(BitArray *bit);

unsigned int cols(BitArray *bit);

void set(BitArray *bit, int row, int column, int value);

void print(const BitArray *bit,const char *comment);

void clear(BitArray *bit);

BitArray *negate(BitArray *bit);

void xor_arrays(BitArray *bit, const BitArray *b1, const BitArray *b2);

#endif
