#include <iostream>
#include<cstring>
#include "TestClassA.h"

TestClassA::TestClassA(){
    _text = NULL;
}

TestClassA::TestClassA(char *buff)
{
    _text = new char [strlen(buff)];
    std::cout << "Konstruuje TestClassA " << _text << std::endl;
}
TestClassA::~TestClassA(){
    std::cout << "Usuwam TestCLassA " << _text << std::endl;
    delete [] _text;
}

