#include <iostream>
#include "Kartoteka.h"

Kartoteka::Kartoteka(){
    _karts = NULL;
    _size = 0;
}

Kartoteka::~Kartoteka(){
    delete [] _karts;
    _karts = NULL;
    _size = 0;
}

void Kartoteka::set_karts(Karta *karta){ 
    if(_karts == NULL){
        _karts = new Karta *[1];
        _karts[0] = karta;
        ++_size; 
    }
    else{
        Karta **tmp = new Karta *[_size];
        for (int i = 0; i < _size; i++){
            tmp[i] = _karts[i];
        }
        delete [] _karts;

        _karts = new Karta *[_size+1];
        for (int i = 0; i < _size; i++){
            _karts[i] = tmp[i];
        }
        delete[] tmp;

        _karts[_size] = karta;
    }
}

void Kartoteka::printAll(){
    
    for (int i = 0; i < _size; i++){
        _karts[i]->wypisz();
    
    }
}
