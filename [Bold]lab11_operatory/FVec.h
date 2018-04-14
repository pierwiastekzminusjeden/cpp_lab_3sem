#pragma once

class FVec{

public:
//konstruktor konwertujący. Tworzy tablice o zadanym rozmiarze
//alokuje na nią pamięć, pamięć nalezy zwolnić
    FVec(int size);
//Konstruktor pobierający parametry określające zakres- początek i koniec tablicy.
//alokuje pamięć na tablicę o rozmiarze odpowiadającym zakresowi. Pamięc nalezy zwolnić
//Odwołanie do elementów następuje za pomocą liczb z zakresu i nawiasom kwadratowym
    FVec(int beg, int end);
//konstruktor kopiujący. Alokuje pamięć na taliblicę o rozmiarze talblicy w obiekcie zadanym jako argument. Kopiuje 
//wszystkie dane.
    FVec(const FVec &toCopy);
//destruktor. Dealokuje pamięć zaalokowaną wcześniej na talibcę.
    ~FVec();
//Funkcja wstawiająca wartość pod zadany indeks. Zwraca referencje do obiektu na którym pracuje.
    FVec & set(int index, int value);
//Wypisuje cały wektor typu int.
    void print(const char *desc = NULL) const;
//Zwraca indeks początkowy wektora.
    int begin() const;
//zwraca indeks końcowy wektora.
    int end() const;
//Przeciążenie operatora [], pozwala na użycie Obiekt[] i zwraca wartośc pod danym indeksem
//wektora
    int & operator[] (int index);
//Przeciążenie operatora przypisania. Zwraca obiekt. Realokuje pamięć na tablicę do której przypisuje.
    const FVec & operator= (const FVec &toCopy);
//Zwraca rozmiar tablicy
    int getSize() const;
//Funckaj pomocnicza. Zwraca wartość pod zadanym indeksem licząc od zera.
    int getValue(int index) const;
private:
//Wskaźnik na tablice w której przechowywane są wartości.
    int *_tab;
//Rozmiar tablicy
    int _size;
//Indeks początkowy
    int _begin;
//Indeks końcowy
    int _end;
};
