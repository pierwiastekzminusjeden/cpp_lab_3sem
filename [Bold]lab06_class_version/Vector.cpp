#include <iostream>
#include "Vector.h"
#include "Matrix.h"

int MAX_VEC;

Vector::Vector(int size){
    _size = size;
    if(size > MAX_VEC){
        _tab = NULL;
        _size = 0;
    }
    else{
        _size = size;
        _tab = new int [_size];
        for (int i = 0; i < _size; i++)
            _tab[i] = 0;
    }
}

Vector::Vector(Matrix &mat, unsigned row){
    _size = mat.get_columns();

    _tab = new int[_size];

    for(int i = 0; i < _size ; i++)
        _tab[i] = mat.get_element(row * mat.get_columns() + i);
}

void Vector::value_set(int index, int value){
    if(index >= _size)
        return;
    else
        _tab[index] = value;
}
void Vector::print() const{
    if(_tab == NULL){
        std::cout << "empty" << std::endl;
        return;
    }
    for (int i = 0; i < _size; i++)
        std::cout << _tab[i] << " ";
    std::cout << std::endl;
}

int Vector::get_size() const{
    return _size;
}

int Vector::get_element(int index) const{
    return _tab[index];
}

Vector::~Vector(){
    delete [] _tab;
}
