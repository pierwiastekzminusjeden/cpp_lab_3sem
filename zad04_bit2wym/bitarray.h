#ifndef BITARRAY_H
#define BITARRAY_H

struct BitArray{
    char *tab;
    int numberOfbits;
    int numberOfRows;
    int numberOfColumns;
};

void init(BitArray *bit, int columns , int rows);

int rows(BitArray *bit);

int cols(BitArray *bit);

int set(BitArray *bit, int rows, int columns, int value);

void print(BitArray *bit, char *etykieta);

void clear(BitArray *bit);

void negate(BitArray *bit);

//void xor_arrays(BitArray *bit, )

#endif