#include <iostream>
#include "MalenstwoSamoSprzatacz.h"
#include "Malenstwo.h"

MalenstwoSamoSprzatacz::MalenstwoSamoSprzatacz(Malenstwo *toPtr){
    _ptr = toPtr;
}

MalenstwoSamoSprzatacz::~MalenstwoSamoSprzatacz(){
    delete _ptr;
}

Malenstwo *MalenstwoSamoSprzatacz::operator->() const{
    return(this->_ptr);
}
