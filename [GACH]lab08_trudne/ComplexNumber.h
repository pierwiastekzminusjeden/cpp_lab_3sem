#pragma once

class Register;

class ComplexNumber
{

  public:
    ComplexNumber(int re = 0, int im = 0);
    
    ~ComplexNumber();
    

    void Print() const;

    void Save(Register &reg); //todo

    ComplexNumber &SetReal(int re);

    int GetReal() const;

    ComplexNumber &SetImaginary(int im);

    int GetImaginary() const;

    ComplexNumber &Add(ComplexNumber &toAdd) const;

    void Clear();

private:
    int _im;

    int _re;
};


