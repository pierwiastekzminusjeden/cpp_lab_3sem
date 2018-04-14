#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(const char *text){
    _tab = new char [strlen(text) +1];
    strcpy(_tab, text);
}

MyString::~MyString(){
    std::cout << "deleting " << _tab << std::endl;
    delete [] _tab;
}
    
void MyString::join(const MyString &obj){
    char *tmp = new char [strlen(_tab) + strlen(obj._tab) +1];
    strcpy(tmp, _tab);
    strcat(tmp, obj._tab);
    delete [] _tab;
    _tab = tmp; 
}
    
void MyString::replace(const char *toReplace){
    delete [] _tab;
    _tab = new char [strlen(toReplace)+1];
    strcpy(_tab, toReplace);
}

char *MyString::str() const{
    return _tab;
}

int MyString::getSize() const{
    return  strlen(_tab) + 1;
}

void swap(MyString &obj1, MyString &obj2){
    char *tmp = new char [obj1.getSize()];
    strcpy(tmp, obj1.str() );
    obj1.replace(obj2.str());
    obj2.replace(tmp);
    delete [] tmp;
}