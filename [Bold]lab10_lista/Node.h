#pragma once

//klasa reprezentująca wezel listy
class Node{

public:
//konstruktor konwertujący 
    Node(int value);
//konstruktor kopiujący
    Node(const Node *value);

    ~Node();
//Funkcja zwracajaca dane przechowywane w wezle obiektu
    int data() const;
//Funkcja zwracajaca wskaźnik na następny element listy
    Node *next();
//Funkcja ustawiająca wskaźnik na następny element listy na zadaną pozycje w pamieci
    void setNext(Node *n);

private:
//Dane int przechowywane w obiekcie
    int _data;
//Wskaźnik na następ[ny element listy
    Node *_next;
};
