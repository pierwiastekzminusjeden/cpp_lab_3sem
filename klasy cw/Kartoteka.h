#pragma once

class Karta;

class Kartoteka{
    friend class Karta;

  public:
    Kartoteka();
    ~Kartoteka();

    void set_karts(Karta *karta);

    void printAll();

  private:
    Karta **_karts;
    int _size;
};
