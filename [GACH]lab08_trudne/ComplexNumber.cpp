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

void ComplexNumber::Save(Register &reg) const{
    reg.Write(*this);
}

ComplexNumber &ComplexNumber::SetReal(int re){
    _re = re;
    return *this;
}

ComplexNumber &ComplexNumber::SetImaginary(int im){
    _im = im;
    return *this;
}

ComplexNumber ComplexNumber::Add(const ComplexNumber &toAdd) const{
    return ComplexNumber(toAdd.GetReal() + _re, toAdd.GetImaginary() + _im );
}

int ComplexNumber::GetReal() const {
    return _re;
}

int ComplexNumber::GetImaginary() const {
    return _im;
}

