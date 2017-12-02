#!/bin/bash
echo -n "nazwy klasy: "
read classname
echo -n "nazwy zmiennych prywatnych: "
read bibl

for x in $bibl ; do
    touch $classname.cpp
    echo "void $classname::set$x(/*WSTAWTYP*/ $x){ ">>"$classname.cpp"
    echo "  this->$x = $x;">>"$classname.cpp"
    echo "}">>"$classname.cpp"
    echo "">>"$classname.cpp"

    touch $classname.h
    echo "void set$x(/*WSTAWTYP*/ $x); ">>"$classname.h"
    echo "">>"$classname.h"
done