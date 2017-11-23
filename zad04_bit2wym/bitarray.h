#ifndef BITARRAY_H
#define BITARRAY_H

struct BitArray{
    char **tab;
    int numberOfbits;
    int numberOfRows;
    int numberOfColumns;
    int numberOfBitColumns;
};

void init(BitArray *bit, int columns , int rows);

unsigned int rows(BitArray *bit);

unsigned int cols(BitArray *bit);

void set(BitArray *bit, int row, int column, int value);

void print(BitArray *bit, char *etykieta);

void clear(BitArray *bit);

void negate(BitArray *bit);

void xor_arrays(BitArray *bit, const BitArray *b1, const BitArray *b2);

#endif
