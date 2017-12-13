#include <iostream>
#include "MyArray.h"

MyArray::MyArray(int size): size(_privSize){
    _privSize = size;
    tab = new int [this->size];
}
MyArray::~MyArray(){

}



int & MyArray::at(int index) const{

    
}

void MyArray::print() const{

}

void MyArray::resize(int newSize){

}
