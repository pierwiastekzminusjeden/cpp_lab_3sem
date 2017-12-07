#pragma once

#include "Vector.h"


class Vector;

class Matrix{

friend class Vector;

public:
    Matrix(Vector row1, Vector row2, Vector row3);

    Vector &extractRow(int row) const;

    Vector &extractColumn(int column) const;

    Matrix &set(int row, int col, double value);
private:
    int _rows;
    int _cols;
    int _totalSize;
 };
