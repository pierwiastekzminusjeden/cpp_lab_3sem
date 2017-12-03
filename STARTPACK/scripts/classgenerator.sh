#!/bin/bash
echo -n "nazwy klas: "
read classnames


for x in $classnames ; do
	touch $x.cpp
    echo "#include <iostream>
#include \""$x.h"\"

$x(){

}">"$x.cpp"

    touch $x.h
    echo "#pragma once

class $x{
public:
    $x();

private:
 
 };">"$x.h"
	
done
