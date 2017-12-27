#include <iostream>
#include "Register.h"
#include "ComplexNumber.h"

Register * Register::_instance = NULL;
ComplexNumber * Register::_complexNumber = NULL;

Register::Register(){
    _instance = this;
}
Register::~Register(){
}

Register &Register::Retrieve(){
    if(_instance == NULL){
        _instance = new Register();
        std::cout << "Creating Register" <<std::endl;
    }
    return *_instance;
}

void Register::Print() const{
    if(_instance == NULL || _complexNumber == NULL)
        std::cout << "Register is empty" << std::endl;
    else{
        std::cout <<"Register stores number: ";
        _complexNumber->Print();
    }
}

void Register::Write(const ComplexNumber &num){
   if(_complexNumber == NULL)
        _complexNumber = new ComplexNumber();
   *_complexNumber = num;
}

ComplexNumber Register::Read() const{
    return *_complexNumber;
}

 void Register::Clear(){
    if(_complexNumber != NULL){
        delete _complexNumber;
        _complexNumber = NULL;
    }
    if(_instance != NULL){
        delete _instance;
        _instance = NULL;
    }
 }
