#include "Bits.h"
#include <iostream>
#include <cstdlib>


void set_size(Bits *str, int length){
    str->size=length;
  //  for(int i = 0; i < 5; i++)
   //     str->bits[i] = 0;
        
}

int set_bit(Bits *str, int position, int value){
    if(position >= str->size)
        return -1;
    
    int posInArray = position / (sizeof(char) * 8); //indeks do którego należy bit o zadanej pozycji w tablicy

    int posInCell = position % (sizeof(char) * 8); //pozycja bitu względem pozycji w komorce

    if(value)
        str->bits[posInArray] = str->bits[posInArray] | (1 << posInCell ); //wstawienie 1 przekminic

    else
        str->bits[posInArray] = str->bits[posInArray] & (char)~(1 << posInCell); // co?
         
    return 0;
}

void print_bits(Bits *str){      //co?
    int start = str->size-1;
	for (int i = start; i>=0; -- i){
		if ((i!=start) && ((i+1)%8)==0)
            std::cout << " ";
        std::cout << get_bit(str, i);
    }
    
    std::cout << std::endl;	
}

int get_bit(Bits *str, int position){
    if(str==NULL || (position+1 > str->size) )
        return -1;
    
        int posInArray = position/(sizeof(char) * 8);

        int posInCell = position % (sizeof(char) * 8);


    return (str->bits[posInArray] & (1 << posInCell !=0));
}

void clear_bits(Bits *str){
    int limit = str->size;
    for(int i=0; i < limit; i++)
        set_bit(str, i, 0);
}

void copy_bits(Bits *str1, Bits *str2){
    if(str2->size < str1->size)
        return;
    int limit = str1->size;
    for(int i=0; i < limit; i++)
        set_bit(str2, i, get_bit(str1, i));
    return;
}