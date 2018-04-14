#include <iostream>
#include "MyArray.h"

MyArray::MyArray(int size): size(_privSize){
    _privSize = size;
    tab = new int [this->size];
}

MyArray::MyArray(const MyArray &toCopy): size(toCopy.size){
    _privSize = toCopy._privSize;
    tab = new int [size];
    for(int i = 0; i < size ; i++)
        tab[i] = toCopy.tab[i];
}

MyArray::~MyArray(){
    delete [] tab;
}

int & MyArray::at(int index) const{
    return tab[index];
}

void MyArray::print() const{
    std::cout << "Array content:";
    for(int i = 0; i < size ; i++){
        std::cout << std::endl; 
        std::cout << "array[" << i <<"] = " << tab[i]; 
    }
}

void MyArray::resize(int newSize){
    int *tmp = new int [newSize];
    for(int i=0; i < size; i++){
        tmp[i] = tab[i];
    }
    //inicjalizacja zerami
    for(int i = size; i < newSize; i++)
        tmp[i] = 0;
    
    delete [] tab;
    tab = tmp;

    _privSize = newSize;   
}
