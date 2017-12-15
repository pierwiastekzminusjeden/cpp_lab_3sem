#pragma once

class ComplexNumber;

class Register{

public:

    ~Register();

    static Register &Retrieve();

    static void Clear();

    void Print() const;

    void Write(const ComplexNumber &num);

    ComplexNumber &Read() const; //zwraca kopie

private:
    Register();

    static Register *_instance;

    static ComplexNumber *_complexNumber;

};
