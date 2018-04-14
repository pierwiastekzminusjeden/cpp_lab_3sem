#pragma once

extern int MAX_VEC;

class Matrix;

/**
* @brief    Klasa reprezentująca nierozszerzalny wektor integerów.
*/
class Vector{

public:
/**
* @brief    Konstruktor obiektu klasy typu @Vector
*
* Metoda alokuje pamięć na tablicę w strukturze o zadanym rozmiarze @size.
*
* @param size   rozmiar tablicy  
*/
  Vector(int size = 0);
/**
* @brief    Metoda transformująca zadany wiersz z macierzy na wektor.
*
* Metoda alokuje pamięć na tablicę o rozmiarze @mat._row.
* Pamiec należy zwolnić (zwalniana w desktruktorze)
*
* @param mat    referencja do obiektu typu @Matrix
* @param row    wiersz, który ma zostać przetworzony na obiekt @Vector
*/
  Vector(Matrix &mat, unsigned row);
/**
* @brief Metoda wstawiająca wartość w zadane miejsce w wektorze.
*
* @param value  zadana wartosc
* @param index  indeks pod który wartość ma zostać wstawiona
*/
  void value_set(int index, int value);
/**
* @brief    Metoda informująca o całkowitym rozmiarze tablicy w @Vector.
*/
  void print() const;
/**
* @brief   Metoda zwracająca informacje o rozmiarze wektora
*/
  int get_size() const;
/**
*@brief  Metoda zwracajaca wartosc pod danym indeksem w wektorze
*
*@param index   index spod ktrego ma byc zwrócona wartosc.
*/
  int get_element(int index) const;
/*
*@brief   destruktor, zwalnia pamiec na element _tab w obiekcie
*/
  ~Vector();

private:
/**
* @param _tab    wskaźnik na tablicę jednowymiarową
* @param _size   rozmiar tablicy                                       //czy bez param
*/
  int *_tab;
  int _size;
};
