#include <iostream>
#include <cmath>
#include "Angle.h"

Angle::Angle(double rad){
    _rad = rad;
}
Angle::~Angle(){
}
const Angle Angle::fromRadians(double rad){
    Angle toRet = Angle(rad);
    toRet.less();
    return toRet;
}

const Angle Angle::fromDegrees(double deg){
    Angle toRet = Angle((deg * M_PI) / 180);
    toRet.less();
    return toRet;
}

const Angle Angle::distance(const Angle &first, const Angle &second){
    Angle toRet = Angle(0);
    if (first > second)
        toRet._rad = first - second;
    else
        toRet._rad = second - first;
    
    if(toRet > M_PI)
        toRet._rad = 2 * M_PI - toRet;

    return toRet;
}

Angle &Angle::add(const Angle &toAdd){
    _rad += toAdd;
    less();
    return *this;
}

double Angle::toDeg() const{
    return (_rad * 180) / M_PI;
}

double Angle::toRad() const{
    return _rad;
}

void Angle::less(){
    if(_rad > 2* M_PI){
        while(_rad > 2* M_PI)
            _rad -= 2 * M_PI;
    }
    else if(_rad < 0){
        while(_rad < 0)
            _rad += 2 * M_PI;
    }
}

Angle::operator double() const{
    return _rad;
}
