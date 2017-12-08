#pragma once
/**
*@brief klasa pozwalająca na wydajne operacje na łańcuchach znakowych w stylu C, przechowywanych
* jako tablica znaków w obiekcie klasy typu @MyString. 
*/
class MyString{

public:
/**
*@brief  tworzy klasę wstawiając wybrany łancuch znakowy do tablicy znakowej w obiekcie.
*
* Alokuje pamiec na łańcuch, pamiec zostaje zwolniona w destruktorze
*
*@param text    tekst do wstawienia 
*/     
    MyString(const char *text);
/**
*@brief Zwalnia pamiec zaalokowana na łańcuch znakowy w konstruktorze.
*/
    ~MyString();
/**
*@brief dokleja łańcuch z do obiektu, z obiektu tego samego typu podanego jako parametr
* Rozszerza pamięć na łańcuch.
*
*@param obj     referencja do obiektu z którego pobieramy łańcuch do doklejenia.
*/    
    void join(const MyString &obj);
/**
*@brief metoda zamieniająca łańcuch w obiekcie na nowy podany jako parametr.
* Zmienia rozmiar pamięci zaalokowanej na łańcuch.
*
*@param toReplace   wskaźnik na łańcuch znakowy, którym zastępujemy obecny.
*/    
    void replace(const char *toReplace);
/**
*@brief metoda zwracająca łańcuch znakowy z obiektu.
*/
    char * str() const;
/**
*@brief metoda zwracająca pamięć zaalokowaną na łańcuch znakowy w obiekcie.
*/
    int getSize() const;
    
private:
/**
*@brief tablica przechowująca łańcuch znakowy.
*/
    char *_tab;
};

/**
*@brief funkcja zamieniająca miejscami łańcuchy znakowe w dwóch obiektach 
*   klasy typu MyString.
*@param obj1    referencja do pierwszego obiektu klasy MyString
*@param obj2    referencja do drugiego obiektu klasy MyString
*/
void swap(MyString &obj1, MyString &obj2);
