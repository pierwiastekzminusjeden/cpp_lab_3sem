#include <iostream>
#include "SmartPointer.h"

SmartPointer::SmartPointer(SmartPointerValueType *ptr): _ptr(ptr){
    
}

SmartPointer::SmartPointer(const SmartPointer &toCopy){
    if (&toCopy != this)
        _ptr = NULL;
    else{
        _ptr = toCopy.get();
        _numberOfReferences++;
    }
}

SmartPointer::~SmartPointer(){
    if(_numberOfReferences == 1){
    }
    
}

SmartPointerValueType *SmartPointer::abandon(){
}

SmartPointerValueType *SmartPointer::operator->(){
    return _ptr;
}

SmartPointerValueType *SmartPointer::operator*() const{
    

}

SmartPointer & SmartPointer::operator=(const SmartPointer &ex){
    if(this->_ptr == ex.get())
        return *this;

    _ptr = ex.get();
    return *this;
}

SmartPointer &SmartPointer::operator=(SmartPointerValueType *newPtr){
    if(newPtr == NULL)
        _ptr = newPtr;

    else if(_ptr != newPtr){
        delete _ptr;
        _ptr = newPtr;
    }
    return *this;
}
