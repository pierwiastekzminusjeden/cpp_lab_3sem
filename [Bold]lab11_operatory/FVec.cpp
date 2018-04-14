#include <iostream>
#include "FVec.h"

FVec::FVec(int size){
    _tab = new int [size];
    _size = size;
    _begin = 0;
    _end = size;
    for(int i = 0; i < _size; i++)
        _tab[i] = 0;
}
FVec::~FVec(){
    delete [] _tab;
    _size = 0;
    _begin = 0;
    _end = 0;
}

FVec::FVec(int beg, int end){
    _begin = beg;
    _end = end;
    _size = end - beg;

    _tab = new int [_size];
    for(int i = 0; i < _size; i++)
        _tab[i] = 0;
}

FVec::FVec(const FVec &toCopy){
    _size = toCopy.getSize();
    _begin = toCopy.begin();
    _end = toCopy.end();
   
    _tab = new int [_size];

    for(int i =0; i < _size; i++)
        _tab[i] = toCopy.getValue(i);
}

FVec & FVec::set(int index, int value){
    _tab[index - _begin] = value;
    return *this;
}
    
void FVec::print(const char *desc) const{
    if(desc != NULL)
        std::cout << desc;

    std::cout << "idx[" <<_begin <<"," << _end << "] "; 

    for(int i = 0; i < _size; i++)
        std::cout << _tab[i] << " ";
    std::cout << std::endl;
}

int FVec::begin() const{
    return _begin;
}

int FVec::end() const{
    return _end;
}

int & FVec::operator[] (int index){
    return (_tab[index - _begin]);
}

const FVec & FVec::operator= (const FVec &toCopy){
    if(&toCopy == this)
        return *this;

    delete [] _tab;
    
    _size = toCopy.getSize();
    _begin = toCopy.begin();
    _end = toCopy.end();

    _tab = new int[_size];

    for(int i =0; i < _size; i++)
        _tab[i] = toCopy.getValue(i);

    return *this;
}

int FVec::getSize() const{
    return _size;
}

int FVec::getValue(int index) const{
    return _tab[index];
}