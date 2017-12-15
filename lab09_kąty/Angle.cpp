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
    toRet._rad = (deg/180) * M_PI;
    toRet.less();

    return toRet;
}

Angle Angle::distance(const Angle &first, const Angle &second){
    Angle toRet = Angle();
    toRet._rad =  first.toRad() - second.toRad();
    if(second.toRad() - first.toRad() < toRet._rad)
        toRet._rad = second.toRad() - first.toRad();
    return toRet;
}
    
double Angle::toRad() const{
    return _rad;
}

double Angle::toDeg() const{
    return (_rad / M_PI) * 180;
}

void Angle::add(const Angle & toAdd){
    _rad = toAdd.toRad();
}

void Angle::less(){
    if(_rad > 2 * M_PI){
        while(_rad > 2 * M_PI)
            _rad -= 2 * M_PI;
    }
    if(_rad < (-2) * M_PI){
        while(_rad < 2 * M_PI)
            _rad += 2 * M_PI;
    }

}