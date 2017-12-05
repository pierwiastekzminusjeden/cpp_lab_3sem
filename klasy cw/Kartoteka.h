#pragma once
#include "Karta.h"

class Karta;

class Kartoteka{

    friend class Karta;

public:
    Kartoteka(std::string nazwa);
    
    ~Kartoteka();
    
    std::string get_nazwa() const;
    
    void set_karts(Karta &k);

    void printAll();
    
    Karta *_karts;
private:
    Kartoteka();
    int _size;
    std:: string _nazwa;
    
};


