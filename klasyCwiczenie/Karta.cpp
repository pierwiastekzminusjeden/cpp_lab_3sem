//
// Created by krystian on 01.12.17.
//
#include <cstring>
#include <iostream>
#include "Karta.h"

Karta::Karta(){
    _imie = NULL;
    _nazwisko = NULL;
    _rok = 0;
}

char *Karta::getImie() const{
    return _imie;
}

char *Karta::getNazwisko() const{
    return _nazwisko;

}

int Karta::getRok() const
{
    return _rok;
}

void Karta::setImie(const char *imie)
{
    _imie = new char[strlen(imie) + 1];
    strcpy(_imie, imie);
}

void Karta::setNazwisko(const char *nazwisko)
{
    _nazwisko = new char[strlen(nazwisko) + 1];
    strcpy(_nazwisko, nazwisko);
}

void Karta::setRok(int rok)
{
    _rok = rok;
}

void Karta::Wypisz()
{
    std::cout << getImie() << " " << getNazwisko() << "rok studiów: " << getRok() << std::endl;
}
