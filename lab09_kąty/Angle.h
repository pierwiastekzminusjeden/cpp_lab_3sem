#pragma once

/**
*Klasa służąca do wydajnych operacji kątach.
*/
class Angle{

public:
/**
*Funkcja statyczna pełniąca rolę konstruktora. Wstawia kąt zadany w radianach.
*
*@return zwraca kopie obiektu.
*/
    static const Angle  fromRadians(double rad);
/**
*Funkcja statyczna pełniąca rolę konstruktora. Wstawia kąt zadany w stopniach.
*
*@return zwraca kopie obiektu.
*/
    static const Angle  fromDegrees(int deg);
/**
*Funkcja obliczająca różnicę między kątami zawarymi w dwóch obiektach będącymi argumentami.
*
*@return zwraca nowy obiekt, którego wartością kąta jest ta różnica.
*/
    static Angle distance(const Angle &first, const Angle &second);
/**
*Funkcja zwracająca wartość kąta w radianach z danego obiektu
*/    
     double toRad() const;
/**
Funkcja zwracająca wartość kąta w stopniach z danego obiektu.
*/
     double toDeg() const;
/**
*Funkcja dodająca kąt o wartości kąta z zadanego jako argument obiektu, do obiektu na której
*operuje.
*/
    void add(const Angle & toAdd);
/**
*Funkcja pomocnicza zmniejszająca "rozmiar" kąta w radianach.
*/
    void less();

    ~Angle();

private:
/**
*Zmienna przechowująca wartość kąta w radianach
*/
    double _rad;
/**
*Konstruktor prywatny w celu braku możliwości utworzenia instancji inaczej niż przed metody
*@fromRadians oraz @fromDegress
*/
    Angle();

};
