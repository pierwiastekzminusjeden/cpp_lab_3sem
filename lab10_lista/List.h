#pragma once
#include "Node.h"
class Node;
//klasa reprezentująca liste jednokierunkową obiektów typu Node
class List{

public:
//enumerator - pomocnicze zmienne określające czy nowy element ma zostać dodany na początek czy na koniec listy
    enum start {
        Begin = 1,
        End = 2
    };
    List();
//konstruktor kopiujący
    List(List &toCopy);
//Funkcja poszukująca zadanej wartości w węzłach listy. Zwraca wskaźnik na węzeł przechowujący
//poszukiwane dane
    const Node *find(int value) const;
//Funkcja wstawiająca zadaną wartość w na poczatek lub koniec listy (zadane enumeratorem)
//Tworzy nowy węzel i alokuje na niego pamiec, pamiec nalezy zwolnic.
    void insert(int value, enum start);

    List insert(int value);
//Funkcja konwertująca - zwraca wskażnik na pierwszy wezel
    operator Node() const;
//funkcja wypisująca liste od poczatku do konca
    void print() const;
//Funkcja zwracająca wskaźnik na pierwszy węzeł listy
    Node * getHead() const;

    ~List();

private:
//Wskaznik na pierwszy element listy
    Node *_head;
};
