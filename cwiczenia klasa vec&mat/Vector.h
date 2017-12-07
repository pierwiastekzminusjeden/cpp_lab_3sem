#pragma once

class Vector{
public:
    
    Vector(double value1 = 0, double value2 = 0, double value3 = 0);

    double at(int index) const;

    ~Vector();
private:
    double *_vec;
    int _size;

 };
