#include <iostream>
#include <string>
#include "Karta.h"

using std::cout;
using std::string;
using std::endl;

Karta::Karta(string _imie , string _nazwisko , int _rok)
{
    this->_imie = _imie;
    this->_nazwisko = _imie;
    this->_rok = _rok;
}

void Karta::wypisz(){
        cout << "To jest klasa" << endl;
        cout << _imie << endl;
        cout << _nazwisko << endl;
        cout << _rok << endl;
}

string &Karta::get_imie() const {
return _imie;
}

string Karta::get_nazwisko() const {
return _nazwisko;
}

int Karta::get_rok() const {
return _rok;
}

void Karta::set_imie(string _imie){ 
this->_imie = _imie;
}

void Karta::set_nazwisko(string _nazwisko){ 
this->_nazwisko = _nazwisko;
}

void Karta::set_rok(int _rok){ 
this->_rok = _rok;
}

