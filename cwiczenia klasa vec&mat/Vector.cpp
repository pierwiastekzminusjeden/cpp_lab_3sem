#include <iostream>
#include "Vector.h"


Vector::Vector(double value1, double value2, double value3){
    _size =3;
    _vec = new double [_size];
    _vec[0] = value1;
    _vec[1] = value2;
    _vec[3] = value3;
    
}

double Vector::at(int index) const{
    return _vec[index];
}

Vector::~Vector(){
    delete [] _vec;
}