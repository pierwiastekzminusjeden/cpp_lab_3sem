#include <iostream>
#include <cstdlib>
#include "bitarr.h"

void set_size(Bitarr *bit, const unsigned nbits){
    bit->numberOfBits = nbits;
    bit->numberOfCells = bit->numberOfBits / 8 * sizeof(char);
    bit->tab = (char *)malloc(bit->numberOfCells);
}

void fill_pattern(Bitarr *bit, const char *pattern){        //gubi się w 2 wypiosywaniu, zjada jedynki
    int k = 0;
    for(int i = 0; i < bit->numberOfBits; i++){

        if(pattern[k] == '0'){
            set_bit(bit,i,0);
            k++;
        }
        else if(pattern[k] == '1'){
            set_bit(bit,i,1);
            k++;
        }
        else{
            k=0;
            set_bit(bit,i,int(pattern[k]));
            k++;
        }
     }
}

void print_bitarray(const Bitarr *bit){
    int start = bit->numberOfBits-1;
	for (int i = start; i>=0; -- i){
		if ((i != start) && ((i+1)%8)==0)
            std::cout << "_";
        std::cout << get_bit(bit, i);
    }
    std::cout << std::endl;	
}

int n_set(const Bitarr *bit){
    int bitsOn = 0;
    for(int i=0; i < bit->numberOfBits; i++)
        bitsOn +=get_bit(bit, i); 
    return bitsOn;
}

void xor_and_set(Bitarr *bit3, const Bitarr *bit2, Bitarr *bit1){
    int size=0;
    size = (bit2->numberOfBits > bit1->numberOfBits ? bit2->numberOfBits : bit1->numberOfBits);
    for(int i=0; i < size; i++){
        if(get_bit(bit1, i) == get_bit(bit2 , i))   
            set_bit(bit3, i, 0);
        else    
            set_bit(bit3, i, 1);
    }
}

void clear(Bitarr *bit){
    free(bit->tab);
}

int get_bit(const Bitarr *str, int position){
    if(str == NULL || (position+1 > str->numberOfBits) )
        return -1;
    
        int posInArray = position/(sizeof(char) * 8);

        int posInCell = position % (sizeof(char) * 8);

    return (str->tab[posInArray] & (1 << posInCell)) != 0;
}
 

int set_bit(Bitarr *str, int position, int value){
    if(position >= str->numberOfBits)
        return -1;
    
    int posInArray = position / (sizeof(char) * 8); 

    int posInCell = position % (sizeof(char) * 8); 

    if(value == 1)
        str->tab[posInArray] = str->tab[posInArray] | (char)(1 << posInCell ); 

    else
        str->tab[posInArray] = str->tab[posInArray] & (char)~(1 << posInCell); 
         
    return 0;
}
