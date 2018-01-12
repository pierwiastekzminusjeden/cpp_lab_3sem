#pragma once

#include <cstring>
#include "TestClassA.h"

#define SmartPointerValueType TestClassA

class SmartPointer{

public:
/**
 *@brief Typedef na krótszą nazwę 
*/
  typedef SmartPointerValueType value_type;
  /**
 *@brief konstruktor konwertujący z typu zadanego przez #define SmartPointerValueType
 *@param  
*/
  SmartPointer(SmartPointerValueType *ptr);
  /**
 *@brief konstruktor kopiujący
*/
  SmartPointer(const SmartPointer &sp);

  ~SmartPointer();


  SmartPointerValueType *get() const { return _ptr; }

  void set(SmartPointer *newPtr) { _ptr = newPtr->get(); }

  int ref() const { return _numberOfReferences; }



  SmartPointerValueType *abandon();

  SmartPointerValueType *operator->();

  SmartPointerValueType *operator*() const;

  SmartPointer & operator=(const SmartPointer &ex);

  SmartPointer &operator=(SmartPointerValueType *newPtr);

private: 
    SmartPointerValueType *_ptr;
    int _numberOfReferences;
};
