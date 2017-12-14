#include <iostream>
#include "Register.h"
#include "ComplexNumber.h"

Register::Register(int re, int im){
    _im = im;
    _re = re;
}
Register::~Register(){

}

Register &Register::Retrieve(){
    Register *reg = new Register();
    std::cout << "Creating Register" <<std::endl;
    return *reg;
}

void Register::Print() const{
    if(_im == 0 && _re == 0)
        std::cout << "Register is empty" << std::endl;
    else{
        std::cout << "Register stores number: ";
        std::cout << _re << " + " << _im << "i" << std::endl;
    }
}

void Register::Write(ComplexNumber &num){
    _im = num.GetImaginary();
    _re = num.GetReal();
}

ComplexNumber &Register::Read() const{
    ComplexNumber *toRet =new ComplexNumber(this->_re, this->_im);
    return *toRet;
}

 void Register::Clear(){
     
}
