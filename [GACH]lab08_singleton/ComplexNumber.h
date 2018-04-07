#pragma once

class Register;

class ComplexNumber
{

public:
    ComplexNumber(int re = 0, int im = 0);
    
    ~ComplexNumber();
    
    void Print() const;

    void Save(Register &reg) const; //todo

    ComplexNumber &SetReal(int re);

    int GetReal() const;

    ComplexNumber &SetImaginary(int im);

    int GetImaginary() const;

    ComplexNumber Add(const ComplexNumber &toAdd) const;

private:
    int _im;

    int _re;
};


