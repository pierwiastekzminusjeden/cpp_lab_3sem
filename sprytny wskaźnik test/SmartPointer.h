#pragma once
#include "TestClassA.h"

class SmartPointer{

public:
    SmartPointer(TestClassA *ptr);
    
    ~SmartPointer();

    int get_ref() const;

    

private:
    
    TestClassA *_ptr;

    int _ref
};


