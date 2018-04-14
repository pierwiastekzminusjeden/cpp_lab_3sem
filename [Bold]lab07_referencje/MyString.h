#pragma once
/**
*@brief         struktura przechowujaca łancuch znakowy wraz z informacja o jej długosci
*
*@param str     wskaźnik na łańcuch znakowy
*@param size    rozmiar łancucha znakowego
*/
struct MyString{
    char *str;
    int size;
};
/**
*@brief zmienna pomocnicza do funkcji @del.
*/
extern MyString toDel;
/**
*@brief    Inicjuje strukture @Mystring i wprowadzajac do niej zadany łańcuch.     
*
* Alokuje pamiec na tablice znakowa o długości łańcucha wprowadzonego jako @param string;
* Pamiec należy zwolnić.
*
*@param obj     referencja do struktury @MyString 
*@param string  łańcuch wprowadzany do struktury inicjowanej
*/
void init(MyString &obj, const char *string);
/**
*@brief     łączy napisy z dwóch struktur @MyString.
*
* Alokuje pamiec na tablice znakowa o długości łańcucha wprowadzonego jako @param string;
* Pamiec należy zwolnić.
*
*@param obj1     referencja do pierwszej struktury @MyString 
*@param obj2     referencja do drugiej struktury @MyString 
*@return         struktura @MyString z połączonymi napisami
*/
MyString join(const MyString obj1,const MyString obj2);
/**
*@brief     Zamienia napisy z zadanych struktur miejscami na stałe
*
*@param obj1     referencja do pierwszej struktury @MyString 
*@param obj2     referencja do drugiej struktury @MyString 
*/
void swap(MyString &obj1, MyString &obj2);
/**
*@brief     Zamienia wskaźniki na napisy z zadanych struktur miejscami.
*           Po odczytaniu oryginalnej wartości wynik zostaje taki sam.
*
*@param obj1     wskaźnik do pierwszej struktury @MyString 
*@param obj2     wskaźnik do drugiej struktury @MyString 
*/
void swap(MyString *&obj1, MyString *&obj2);
/**
*@brief    Zwalnia pamieć która została zaalokowana w strukturach @MyString i 
*          zeruje ich rozmiar.
*          Przyjmuje od jednego do pięciu argumentów i wywołuje funkcje @delStr.
*
*@param s1     wskaźnik do 1 struktury @MyString 
*@param s2     wskaźnik do 2 struktury @MyString
*@param s3     wskaźnik do 3 struktury @MyString
*@param s4     wskaźnik do 4 struktury @MyString
*@param s5     wskaźnik do 5 struktury @MyString
*/
void del(MyString &s1, MyString &s2 = toDel, MyString &s3 = toDel, 
    MyString &s4 = toDel, MyString &s5 = toDel);
/**
*@brief     Funkcja pomocnicza dla funkcji @del, zwalniajaca pamiec.
*
*@param s   struktura typu @MyString, w której zostanie zwolniona pamiec
*/
void delStr(MyString &s);
