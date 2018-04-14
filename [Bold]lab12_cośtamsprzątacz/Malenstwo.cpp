#include <iostream>
#include "Malenstwo.h"

int Malenstwo::_counter;
Malenstwo* Malenstwo::_tab;

Malenstwo::Malenstwo(){
}
Malenstwo::Malenstwo(int value){
   _value = value;
   std::cout << "Malenstwo(int) " << _value << std::endl;
}
Malenstwo::~Malenstwo(){
}

int & Malenstwo::wartosc(){
    return _value;
}

void * Malenstwo::operator new(size_t size){
   std::cout << "Alokuje 1" << std::endl; 
   if(_counter == 0){
        std::cout << "Pierwszy obiekt na stercie - prealokuje skladowisko na 100 elementow" << std::endl;
        _tab = new Malenstwo [100];
        _counter++;
        return &(_tab[0]);
    }
    _counter++;
    return &(_tab[_counter]);
}

void Malenstwo::operator delete(void * toDel){
    _counter--;
    if(_counter == 0){
        std::cout << "Ostatni obiekt na stercie, dealokuje skladowisko" << std::endl;
        delete [] _tab;
        _tab = NULL;
    }
    
}

Malenstwo *Malenstwo::operator()(){
        return(this);
}

Malenstwo *Malenstwo::operator+(int index){
    return (this + index * sizeof(Malenstwo));
}
