#!/bin/bash
#echo -n "nazwy klasy: "
#read 1
echo -n "nazwy zmiennych prywatnych: "
read bibl

for x in $bibl ; do
    touch $1.cpp
    echo "//WSTAWTYP$x $1::get$x() const {
return $x;
}
">>"$1.cpp"

   
    touch $1.h
    echo "//WSTAWTYP$x get$x() const;
">>"$1.h"
done