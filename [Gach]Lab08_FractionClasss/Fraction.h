#pragma once
//brak skracania ułamków TODO;
class Fraction
{
  public:
    Fraction(int numerator = 0, int denominator = 1);

    void Print() const;

    void Add(const Fraction &toAdd);

    void SetValue(int numerator,int denominator);

private:
    int _numerator;
    int _denominator;
    int _number;
    //Fraction();
 };
