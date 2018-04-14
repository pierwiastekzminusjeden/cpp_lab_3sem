#include <iostream>
#include "FractionArray.h"
#include "Fraction.h"

FractionArray::FractionArray(int size){
    _index = 0;
    _arraySize = size;
    _arr = new Fraction [size];
}

void FractionArray::AddFration(Fraction &toAdd){
    _arr[_index] = toAdd;
    ++_index;
}

Fraction FractionArray::Sum() const{
    Fraction toReturn = Fraction(0, 1);
    for (int i = 0; i < _index; i++){
        toReturn.Add(_arr[i]);
    }
    return toReturn;
}

void FractionArray::Print() const{
    for (int i = 0; i < _index; i++){
        std::cout << i << ": ";
        _arr[i].Print();
    }
}

FractionArray::~FractionArray()
{
    delete [] _arr;
}