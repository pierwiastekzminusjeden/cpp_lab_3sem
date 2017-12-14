#include <iostream>
#include "ComplexNumber.h"
#include "Register.h"

ComplexNumber::ComplexNumber(int re, int im){
    _re = re;
    _im = im;

    std::cout << "Creating number: ";
    Print();
    
}
ComplexNumber::~ComplexNumber(){

}

void ComplexNumber::Print() const{
    std::cout << _re << " + " << _im << "i" << std::endl;
}

void ComplexNumber::Save(Register &reg)
{

} //todo

ComplexNumber &ComplexNumber::SetReal(int re){
}

ComplexNumber &ComplexNumber::SetImaginary(int im){
}

ComplexNumber &ComplexNumber::Add(ComplexNumber &toAdd) const{
}

void ComplexNumber::Clear(){
}

int ComplexNumber::GetReal() const {
    return _re;
}

int ComplexNumber::GetImaginary() const {
    return _im;
}

