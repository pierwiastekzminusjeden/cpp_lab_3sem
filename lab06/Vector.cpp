#include <iostream>
#include "Vector.h"
#include "Matrix.h"

int MAX_VEC;

Vector *make_vec(int size){
    Vector *vec = new Vector;
    if(size > MAX_VEC){
        vec->tab = NULL;
        vec->size = 0;
    }
    else{     
    vec->size = size;
    vec->tab = new int [vec->size];
    for(int i = 0; i < size; i++)
        vec->tab[i] = 0;
    }

    return vec;
}

void value_set_vec(Vector *vec, int index, int value){
    if(index >= vec->size)
        return;
    vec->tab[index] = value;
}

void print_vec(Vector *vec){
    if(vec->tab == NULL){
        std::cout << "empty"<<std::endl;
        return;
    }
    for(int i = 0; i < vec->size; i++)
        std::cout << vec->tab[i]<<" ";
    std::cout << std::endl;
}

int size_vec(Vector *vec){
    return vec->size;
}

Vector* from_matrix_row(Matrix* mat, unsigned row){
     Vector *vec = new Vector;
     vec->size = mat->columns * (row);
     vec->tab = new int [vec->size];
 
     for(int i = 0; i < vec->size; i++)
         vec->tab[i] = mat->tab[row * mat->columns + i];
    
    return vec;
}

void del_vec(Vector *vec){
    delete [] vec->tab;
    delete vec;
}
