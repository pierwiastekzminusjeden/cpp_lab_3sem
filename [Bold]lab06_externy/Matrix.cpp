#include <iostream>
#include "Matrix.h"
#include "Vector.h"


Matrix *make_matrix(Vector *vec, int rows, int columns){
    Matrix *mat = new Matrix;
    mat->rows = rows;
    mat->columns = columns;
    mat->size = vec->size;
    mat->tab = new int [mat->size];

    for(int i = 0; i < mat->size; i++)
        mat->tab[i] = vec->tab[i];
    
    return mat;
}

void print_matrix(Matrix *mat){
    for(int i = 0; i < mat->size; i++){   
        std::cout << mat->tab[i] << " ";
        if((i+1) % mat->columns == 0)
            std::cout << std::endl;
    }
}

void del_matrix(Matrix *mat){
    delete [] mat->tab;
    delete mat;
}
