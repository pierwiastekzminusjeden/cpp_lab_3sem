//
// Created by krystian on 01.12.17.
//

#pragma once

class Karta {
private:
    char *_imie;
    char *_nazwisko;
    int _rok;

public:
    Karta();
    void Wypisz();

    char *getImie() const;

    char *getNazwisko() const;

    int getRok() const;

    void setImie(char *imie);

    void setNazwisko(char *nazwisko);

    void setRok(int rok);
};



