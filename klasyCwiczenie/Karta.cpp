//
// Created by krystian on 01.12.17.
//
#include <iostream>
#include <cstring>
#include "Karta.h"

Karta::Karta(){

}
void Karta::Wypisz(){
    std::cout << "To jest Karta" << std::endl;
}

char *Karta::getImie() const {
    return _imie;
}

char *Karta::getNazwisko() const {
    return _nazwisko;
}

int Karta::getRok() const {
    return _rok;
}

void Karta::setImie(char *imie) {
    this->_imie = new char[strlen(imie)];
    Karta::_imie = imie;
}

void Karta::setNazwisko(char *nazwisko) {
    this->_nazwisko = new char[strlen(nazwisko)];
    Karta::_nazwisko = nazwisko;
}

void Karta::setRok(int rok) {
    Karta::_rok = _rok;
}
