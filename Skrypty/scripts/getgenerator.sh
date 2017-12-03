#!/bin/bash
echo -n "nazwy klasy: "
read classname
echo -n "nazwy zmiennych prywatnych: "
read bibl

for x in $bibl ; do
    touch $classname.cpp
    echo "WSTAWTYP$x $classname::get$x() const {
return $x;
}
">>"$classname.cpp"

   
    touch $classname.h
    echo "    WSTAWTYP$x get$x() const;
">>"$classname.h"
done
