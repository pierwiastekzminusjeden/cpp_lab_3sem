#pragma once
/**
*@brief     Klasa służąca do wydajnych operacji kątach.
*/
class Angle{

public:
/**
*@brief     Funkcja statyczna pełniąca rolę konstruktora. Wstawia kąt zadany w radianach.
*
*@return zwraca kopie obiektu.
*/
  static const Angle fromRadians(double rad = 0);
/**
*@brief     Funkcja statyczna pełniąca rolę konstruktora. Wstawia kąt zadany w stopniach.
*
*@return zwraca kopie obiektu.
*/
  static const Angle fromDegrees(double deg = 0);
/**
*@brief     Funkcja obliczająca różnicę między kątami zawarymi w dwóch obiektach będącymi argumentami.
*
*@return zwraca nowy obiekt, którego wartością kąta jest ta różnica.
*/
  static const Angle distance(const Angle &first, const Angle &second);
/**
*@brief     Funkcja dodająca kąt o wartości kąta z zadanego jako argument obiektu, do obiektu na której
*operuje.
*
*@return    Zwraca referencję do obiektu na którym operuje.
*/
  Angle &add(const Angle &toAdd);
/**
*@brief     Funkcja zwracająca wartość kąta w stopniach z danego obiektu.
*/
  double toDeg() const;
/**
*@brief     Funkcja zwracająca wartość kąta w radianach z danego obiektu
*/
  double toRad() const;
/**
*@brief     Funkcja pomocnicza zmniejszająca "rozmiar" kąta w radianach.
*/
  void less();
/**
*@brief     Funkcja konwertująca na double
*/ 
  operator double() const;

  ~Angle();

private:
/**
*@brief     Zmienna przechowująca wartość kąta w radianach
*/
    double _rad;
/**
*@brief     Konstruktor prywatny w celu braku możliwości utworzenia instancji inaczej niż przed metody
*@fromRadians oraz @fromDegress
*/
    Angle(double rad);
};
