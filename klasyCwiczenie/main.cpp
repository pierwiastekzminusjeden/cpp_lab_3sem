#include <iostream>
#include "Karta.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Karta k = Karta();
    k.Wypisz();
    k.setImie("Marian");
    std::cout << k.getImie();

    return 0;
}