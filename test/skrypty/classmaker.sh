#!/bin/bash
echo -n "nazwy klas: "
read classnames


for x in $classnames ; do
	touch $x.cpp
    echo "#include <iostream>">"$x.cpp"
	echo "#include \""$x.h"\"">>"$x.cpp"
    echo "">>"$x.cpp"
    echo "$x::$x(){ ">>"$x.cpp"
    echo "">>"$x.cpp"
    echo "}">>"$x.cpp"

    touch $x.h
    echo "#pragma once">"$x.h"
	echo "">>"$x.h"
    echo "class $x{">>"$x.h"
    echo "">>"$x.cpp"
    echo "  $x(); ">>"$x.h"
    echo "">>"$x.h"
    echo "};">>"$x.h"
 
done
