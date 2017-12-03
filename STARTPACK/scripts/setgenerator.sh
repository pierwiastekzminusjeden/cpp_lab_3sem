#!/bin/bash
#echo -n "nazwy klasy: "
#read 1
echo -n "nazwy zmiennych prywatnych: "
read bibl

for x in $bibl ; do
    touch $1.cpp
    echo "void $1::set$x(WSTAWTYP$x $x){ 
this->$x = $x;
}
">>"$1.cpp"

    touch $1.h
    echo "void set$x(WSTAWTYP$x $x);
">>"$1.h"

done