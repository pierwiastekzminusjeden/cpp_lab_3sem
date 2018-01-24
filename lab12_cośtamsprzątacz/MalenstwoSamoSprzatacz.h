#pragma once

class Malenstwo;

//Klasa bedaca prosta implementacja sprytnego wskaznika. 
class MalenstwoSamoSprzatacz{

public:
//Konstruktor konwertujacy. Przypisuje wskaznik na obiket klasy Malenstwo do pola przechowujacego 
//wskaznik w obiekcie na ktorym pracuje.
    MalenstwoSamoSprzatacz(Malenstwo *toPtr);
//Dekonstruktor
    ~MalenstwoSamoSprzatacz();
//Przeciazenie operatora ->. Pozwala na bezposredni dostep do elementów oraz metod
//obiektu klasy Malenstwo.
    Malenstwo *operator->() const;

private:
//Wskaznik na obiekt klasy Malenstwo.
    Malenstwo *_ptr;
};
