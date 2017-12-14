#pragma once

class ComplexNumber;

class Register
{

  public:

    Register(int re =0, int im = 0);

    ~Register();

    static Register &Retrieve();

    static void Clear();

    void Print() const;

    void Write(ComplexNumber &num);

    ComplexNumber &Read() const;

private:
    int _im;
    int _re;
};
