#!/bin/bash
echo -n "nazwy klasy: "
read classname
echo -n "nazwy zmiennych prywatnych: "
read bibl

for x in $bibl ; do
    touch $classname.cpp
    echo "void $classname::set$x(WSTAWTYP$x $x){ 
this->$x = $x;
}
">>"$classname.cpp"

    touch $classname.h
    echo "    void set$x(WSTAWTYP$x $x);
">>"$classname.h"

done
