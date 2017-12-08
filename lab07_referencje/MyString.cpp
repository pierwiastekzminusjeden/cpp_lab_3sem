#include <iostream>
#include <cstring>

#include "MyString.h"

MyString toDel;

void init(MyString &obj, const char *string){

    obj.size = strlen(string) + 1;
    obj.str = new char [obj.size];
    strcpy(obj.str, string);
}

MyString join(const MyString obj1, const MyString obj2){
    MyString obj;

    obj.size = obj1.size + obj2.size;
    obj.str = new char [obj.size];
    strcpy(obj.str, obj1.str);
    strcat(obj.str, obj2.str);
    
    return obj;
}

void swap(MyString &obj1, MyString &obj2){
    MyString tmp = obj1;
    obj1 = obj2;
    obj2 = tmp;

}

void swap(MyString *&obj1, MyString *&obj2){
    MyString *tmp = obj1;
    obj1 = obj2;
    obj2 = tmp;

}

void del(MyString &s1, MyString &s2, MyString &s3, MyString &s4, MyString &s5){
    
    delStr(s1);

    delStr(s2);
        
    delStr(s3);
        
    delStr(s4);
        
    delStr(s5);
}

void delStr(MyString &s){
    if(&s == &toDel)
        return;
    if(s.size != 0){
        std::cout << "deleting " << s.str << std::endl;
        delete [] s.str;
        s.size = 0;
    }
}
   