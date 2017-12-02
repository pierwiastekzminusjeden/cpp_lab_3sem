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

    MyString tmp;

    tmp.size = obj2.size;
    tmp.str = new char [tmp.size];
    strcpy(tmp.str, obj2.str);
    
    obj2.size = obj1.size;
    delete [] obj2.str;
    obj2.str = new char [obj2.size];
    strcpy(obj2.str, obj1.str);

    obj1.size = tmp.size;
    delete [] obj1.str;
    obj1.str = new char [obj1.size];
    strcpy(obj1.str, tmp.str);

    delete [] tmp.str;
}

void swap(MyString *obj1, MyString *obj2){
    
    MyString *tmp = new MyString;
    
    tmp->size = obj2->size;
    tmp->str = obj2->str;

    obj2->size = obj1->size;
    obj2->str = obj1->str;

    obj1->size = tmp->size;
    obj1->str = tmp->str;
    
    delete tmp;
}

void del(MyString &s1, MyString &s2, MyString &s3, MyString &s4, MyString &s5){
    
    delStr(s1);

    if(&s2 == &toDel)
        return;
    else
        delStr(s2);
        
    if(&s3 == &toDel)
        return;
    else
        delStr(s3);
        
    if(&s4 == &toDel)
        return;
    else
        delStr(s4);
        
    if(&s5 == &toDel)
        return;
    else
        delStr(s5);
}

void delStr(MyString &s){
    if(s.size != 0){
        std::cout << "deleting " << s.str << std::endl;
        delete [] s.str;
        s.size = 0;
    }
}
   