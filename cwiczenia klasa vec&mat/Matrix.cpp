#include <iostream>
#include "Matrix.h"

 Matrix::Matrix(Vector row1, Vector row2, Vector row3){
    _rows = 3;
    _cols = 3;
    _totalSize = _rows *_cols;
 }

Matrix &Matrix::set(int row, int col, double value){

}

Vector &Matrix::extractRow(int row) const{

}

Vector &Matrix::extractColumn(int column) const{

}
