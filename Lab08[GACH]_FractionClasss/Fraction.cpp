#include <iostream>
#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator){
    _number = numerator / denominator;
    _numerator = numerator % denominator;
    _denominator = denominator;
}

void Fraction::Print() const{
    if(_number != 0)
        std::cout << _number << " " << _numerator << "/" << _denominator << std::endl;
    else
        std::cout << _numerator << "/" << _denominator << std::endl;
}

void Fraction::Add(const Fraction &toAdd){

    _denominator *= toAdd._denominator;
    _numerator *= toAdd._denominator;
    _numerator += _denominator * toAdd._numerator;


    _number += _numerator / _denominator;
    _numerator = _numerator % _denominator;
}

void Fraction::SetValue(int numerator, int denominator){
    _number = numerator / denominator;
    _numerator = numerator % denominator;
    _denominator = denominator;
}
