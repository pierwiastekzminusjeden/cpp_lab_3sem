#pragma once

class Vector;
/** 
*@brief     Struktura odzwierciedlająca tablicę dwuwymiarową.
*/
class Matrix
{

  public:
/**
*@brief Metoda transformująca wektor integerów na macierz o zadanej liczbie wierszy i kolumn.
*
* Metoda alokuje pamięc na tablicę jednowymiarową o rozmiarze _size
*
* @param rows       liczba wierszy tworzonej macierzy
* @param columns    liczba kolumn tworzonej maceirzy
*/
    Matrix(Vector &vec, int rows, int columns);
/**
* Metoda wypisuje tablicę dwuwymiarową typu @Matrix wierszami w nowych liniach.
*/
    void print() const;
/**
* @brief   metoda zwracajaca rozmiar całkowity @Matrix a
*/
    int get_size() const;
/**
* @brief   metoda zwracajaca liczbe kolumn w macierzy.
*/
    int get_columns() const;
/**
* @brief   metoda zwracajaca liczbe wierszy. 
*/
    int get_rows() const;
/**
* @brief   metoda zwracajaca wartosc macierzy pod zadanym indeksem
* indeksowanie od 0 do _size
*
*@param index   index spod którego zwracany jest element
*/
    int get_element(int index) const;
/**
* @brief    desktruktor. Zwalnia pamiec na tablice.
*/
    ~Matrix();
private:
/**
* @param _tab        wskaźnik na tablice jednowymiarową.
* @param _columns    liczba kolumn
* @param _rows       liczba wierszy
* @param _size       całkowity rozmiar równy @rows * @columns
*/
  int *_tab;
  int _columns;
  int _rows;
  int _size;
};




