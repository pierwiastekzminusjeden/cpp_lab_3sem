#include <iostream>
#include "Matrix.h"
#include "Vector.h"

Matrix::Matrix(Vector &vec, int rows, int columns){
    _rows = rows;
    _columns = columns;
    _size = rows * columns;
    _tab = new int[_size];

    for (int i = 0; i < _size; i++)
        _tab[i] = vec.get_element(i);

}
Matrix::~Matrix(){
    delete [] _tab;
}

void Matrix::print() const{
    for (int i = 0; i < _size; i++){
        std::cout << _tab[i] << " ";
        if((i+1) % _columns == 0)
            std::cout << std::endl;
    }
}

int Matrix::get_size() const{
    return _size;
}

int Matrix::get_columns() const {
    return _columns;
}

int Matrix::get_rows() const {
    return _rows;
}

int Matrix::get_element(int index) const {
    return _tab[index];
}
