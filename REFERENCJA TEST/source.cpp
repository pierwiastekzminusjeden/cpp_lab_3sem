#include <iostream>
#include "source.h"

void AddValue3(int value){
    value += 3;
    std::cout << value << std::endl;
}

void AddReference5(int &value){
    value +=5;
    std::cout << "w trakcie funkcji " << value << std::endl;
}

void AddPointer10(int *value){
    *value +=10;
    std::cout << "w trakcie funkcji " << value << std::endl;
}

void ShiftPointerVal(int *value){
    *value +=1;
    std::cout << "w trakcie funkcji " << value << std::endl;
}

void ShiftPointerRef(int *&value){
    *value +=1;
    std::cout << "w trakcie funkcji " << value << "   " << *value << std::endl;
}

void ShiftPointerPointer(int **value){
    **value +=1;
    std::cout << "w trakcie funkcji " << value <<" "<< *value <<  "   " << **value << std::endl;
}