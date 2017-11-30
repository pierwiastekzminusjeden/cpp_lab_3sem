#include <iostream>
#include "source.h"



int main(){
    using namespace std;

    int number = 5;
    int &r_number = number;
    int *p_number = &number;
    const int* cp_number = number;

    cout << "porównanie adresów " << &number <<"   wsk " << &r_number << endl;

    cout << "przed funkcją AddValue3 " << number << endl;
    AddValue3(r_number);
    cout << "po funkcji AddValue3 " <<  number << endl;
    cout << endl;
   
    cout << "przed funkcją AddReference5 " << number << endl;
    AddReference5(r_number);
    cout << "po funkcji AddReference5 " <<  number << endl;
    cout << endl;
    
    
    cout << endl;
    cout << "porównanie adresów " << &number <<"   wsk " << p_number << endl;

    cout << "przed funkcją AddPointer10 num " << number << "     wsk " << *p_number << endl;
    AddPointer10(p_number);
    cout << "po funkcji AddPointer10 num " << number << "       wsk " << *p_number << endl;
    cout << endl;

    ShiftPointerVal(p_number);
    cout << "po funkcji ShiftPointerVal num " << number << "       wsk " << *p_number << endl;
    cout << endl;

    cout << "porównanie adresów " << &number <<"   wsk " << p_number << endl;
    ShiftPointerRef(p_number);
    cout << "po funkcji ShiftPointerRef num " << number << "       wsk " << *p_number << endl;
    cout << endl;

    
    ShiftPointerPointer(&p_number);
    cout << "po funkcji ShiftPointerPointer num " << number << " " << &p_number << "       wsk " << *p_number << endl;
    cout << endl;

    return 0;
}