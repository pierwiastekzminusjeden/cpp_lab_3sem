#include <iostream>
#include "bitarr.h"

void set_size(Bitarr *bit, const unsigned nbits){
    tab->numberOfBits = nbits;
    bit->tab = (char *)malloc(tab->numberOfBits / 8 * sizeof(char));
}

void fill_pattern(Bitarr *bit, const char *pattern){

}

void print_bitarray(Bitarr *bit){

}

void print_bitarray(const Bitarr *bit){

}

int n_set(const Bitarr *bit){

    return 0;
}

void xor_and_set(Bitarr *bit2, const Bitarr *bitPtr, Bitarr *bit1){

}

void clear(Bitarr *bit){
    free(bit->tab);
}