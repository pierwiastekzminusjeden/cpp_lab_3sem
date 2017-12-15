#include <iostream>
#include "Angle.h"
#include <cmath>


Angle::Angle(){
    _rad = 0;
}

Angle::~Angle(){
}

const Angle Angle::fromRadians(double rad){
    Angle toRet = Angle();
    toRet._rad = rad;
    toRet.less();

    return toRet;
}

const Angle Angle::fromDegrees(int deg){
    Angle toRet = Angle();
    toRet._rad = (deg * M_PI) / 180;
    toRet.less();

    return toRet;
}

Angle Angle::distance(const Angle &first, const Angle &second){
    Angle toRet = Angle();
    if(first.toRad() > second.toRad())
        toRet._rad = first.toRad() - second.toRad();
    else
        toRet._rad = second.toRad() - first.toRad();

    if(toRet._rad > M_PI)
        toRet._rad = 2 * M_PI - toRet._rad;    
        
    return toRet;
}
    
double Angle::toRad() const{
    return _rad;
}

double Angle::toDeg() const{
    return (_rad * 180)/ M_PI;
}

void Angle::add(const Angle & toAdd){
    _rad += toAdd.toRad();
}

void Angle::less(){
    if(_rad > 2 * M_PI){
        while(_rad > 2 * M_PI)
            _rad -= 2 * M_PI;
    }
    else if(_rad < 0){
        while(_rad < 0)
           _rad += M_PI;
    }
}