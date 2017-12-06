#pragma once

class Fraction{
public:
    Fraction(int numerator, int denominator);

    void Print() const;

    void Add(const Fraction &toAdd);

    void SetValue(int numerator,int denominator);

private:
    int _numerator;
    int _denominator;
    int _number;
    Fraction();
 };
