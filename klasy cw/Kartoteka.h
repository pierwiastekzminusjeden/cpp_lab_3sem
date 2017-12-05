#pragma once
#include "Karta.h"

class Karta;

class Kartoteka{

    friend class Karta;

public:
    Kartoteka();
    ~Kartoteka();

    void set_karts(Karta &k);

    void printAll();
    
    Karta *_karts;
private:
    
    int _size;
};
