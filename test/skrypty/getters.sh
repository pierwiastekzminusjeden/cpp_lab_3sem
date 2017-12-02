#!/bin/bash
echo -n "nazwy klasy: "
read classname
echo -n "nazwy zmiennych prywatnych: "
read bibl

for x in $bibl ; do
    touch $classname.cpp
    echo "/*WSTAWTYP*/ $classname::get$x() const { ">>"$classname.cpp"
    echo "  return $x;">>"$classname.cpp"
    echo "}">>"$classname.cpp"
    echo "">>"$classname.cpp"

    touch $classname.h
    echo "/*WSTAWTYP*/ get$x() const; ">>"$classname.h"
    echo "">>"$classname.h"
done