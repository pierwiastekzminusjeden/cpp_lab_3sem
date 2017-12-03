#pragma once
using std::string;

class Karta{
    friend class Kartoteka;

public:
    string &nazwiskoRef;

    Karta(string _imie = "brak danych", string _nazwisko = "brak danych", int _rok = 0);

    void wypisz() const;

    const string &get_imie() const;

    string get_nazwisko() const;

    int get_rok() const;

    void set_imie(string _imie);

    void set_nazwisko(string _nazwisko);

    void set_rok(int _rok);

private:
    string _imie;
    string _nazwisko;
    int _rok;
};

