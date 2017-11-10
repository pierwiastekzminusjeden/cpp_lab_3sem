#ifndef BITARR_H
#define BITARR_H

struct Bitarr{
char *tab;
int numberOfBits;
int numberOfCells;

};

void set_size(Bitarr *bit, const unsigned nbits);

void fill_pattern(Bitarr *bit, const char *pattern);

void print_bitarray(Bitarr *bit);

void print_bitarray(const Bitarr *bit);

int n_set(const Bitarr *bit);

void xor_and_set(Bitarr *bit2, const Bitarr *bitPtr, Bitarr *bit1);

void clear(Bitarr *bit);

#endif
