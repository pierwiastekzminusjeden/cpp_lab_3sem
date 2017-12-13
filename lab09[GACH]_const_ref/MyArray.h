#pragma once

class MyArray{

public:
    const int &size;

    MyArray(int size);

    ~MyArray();
    
    int & at(int index) const;

    void print() const;

    void resize(int newSize);

private:
    int _privSize;
    
    int *tab;
};

