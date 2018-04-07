#pragma once
/**
 * @brief Klasa będąca implementacją wydajnej tablicy intów
 */
class MyArray{

public:
/**
 * @brief stała referencja do zmiennej prywatnej przechowującej rozmiar tablicy
 */
    const int &size;
/**
 * @brief   konstruktor inicjalizujący tablicę intów
 * 
 *@warn     Alokuje pamięć na tablicę intów o zadanym rozmiarze.
 *
 * @param size  Rozmiar tablicy
 */
    MyArray(int size);
/**
 * @brief   konstruktor kopiujący
 * 
 * @warn    alokuje pamięć na tablicę intów o rozmiarze tablicy w klasie zadanej 
 *          do skopiowania.
 *
 * @param toCopy  Klasa z której kopiowane są wartości do nowej.
 */
    MyArray(const MyArray &toCopy);
/**
 * @warn    Dealokuje pamięć zaalokowaną podczas tworzenia obiektów
 */
    ~MyArray();
/**
 * @brief   Pozwala na dostęp do pola tablicy pod zadanym indeksem
 * 
 * @param index     indeks w tablicy
 * @return          referencja do zawartości pola tablicy
 */    
    int & at(int index) const;
/**
 * @brief   wypisuje całą tablicę
 */
    void print() const;
/**
 * @brief   zmienia rozmiar tablicy na na nowy.
 * 
 * @warn    Alokuje pamięć na nową powiększoną tablice (o rozmiarze newSize)
 *          dealokuje pamięć po starej tablicy
 * 
 * @param newSize   nowy rozmiar tablicy
 */
    void resize(int newSize);

private:
/**
 * @brief   prywatna zmienna przechowująca rozmiar tablicy.
 */
    int _privSize;
/**
 * @brief   wskaźnik na tablicę intów
 */    
    int *tab;
};

