#include <iostream>
#include "Register.h"
#include "ComplexNumber.h"

Register * Register::_instance = NULL;
ComplexNumber * Register::_complexNumber = NULL;    //o co tu chodzi?

Register::Register(){

}
Register::~Register(){

}

Register &Register::Retrieve(){
    if(_instance == NULL){
        _instance = new Register;
        std::cout << "Creating Register" <<std::endl;
    }
    return *_instance;
}

void Register::Print() const{
    if(_instance == NULL)
        std::cout << "Register is empty" << std::endl;
    else{
        std::cout <<"Register stores number: ";
        _complexNumber->Print();
    }
}

void Register::Write(const ComplexNumber &num){
   
}

ComplexNumber &Register::Read() const{
    return *_complexNumber;
}

 void Register::Clear(){
     
}
