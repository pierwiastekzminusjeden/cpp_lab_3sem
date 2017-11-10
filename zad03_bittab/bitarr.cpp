#include <iostream>
#include <cstdlib>
#include "bitarr.h"

void set_size(Bitarr *bit, const unsigned nbits){
    bit->numberOfBits = nbits;
    bit->numberOfCells = bit->numberOfBits / 8 * sizeof(char);
    bit->tab = (char *)malloc(bit->numberOfCells);
}

void fill_pattern(Bitarr *bit, const char *pattern){
    int k=0;
    for(int i=bit->numberOfCells -1; i >= 0; i++){
        for(int j=0 ; j<bit->numberOfBits; j++){
            if(pattern[k++]== '0')
                bit->tab[i] = bit->tab[i] & (char)~(1 << bit->numberOfBits);
            else if(pattern[k] == '1')
                bit->tab[i] = bit->tab[i] | (char) (1 << bit->numberOfBits);
            else if(pattern[k]=='\0')
                k=0;
        }
    }
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
