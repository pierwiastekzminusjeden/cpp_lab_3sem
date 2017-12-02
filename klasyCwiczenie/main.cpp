#include <iostream>
#include "Karta.h"

int main() {
    Karta k = Karta();
    k.Wypisz();
    k.setImie("Marian");
    k.setNazwisko("Zając");
    k.setRok(50);
    k.Wypisz();

    return 0;
}