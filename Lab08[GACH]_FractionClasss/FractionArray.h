#pragma once

class Fraction;

class FractionArray
{
  public:
    
    FractionArray(int size);

    void AddFration(Fraction &toAdd);

    Fraction Sum() const;

    void Print() const;


  private:
    FractionArray();

    int _arraySize;
    Fraction *_arr;
    int _index;
};
