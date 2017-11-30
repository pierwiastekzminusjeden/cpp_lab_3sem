#include <iostream>
#include "Array.h"


void CreateArray(Array *& arr, const int *columns, const int rows){
    arr = new Array;
    arr->rowSize = rows;

    arr->colSize = new int [rows];
    for(int i = 0; i < rows; i++)
        arr->colSize[i] = columns[i];

    arr->tab = new int *[rows];
    for(int i = 0; i < rows ; i++)
        arr->tab[i] = new int [columns[i]];
}

void FillWith(Array * arr, int value){
    for(int i = 0; i < arr->rowSize ; i++){
        for(int j = 0; j < arr->colSize[i]; j++)
            arr->tab[i][j] = value;
    }   
}

void Print(const Array & arr){
    for(int i = 0; i < arr.rowSize ; i++){
        if(i != 0)
            std::cout << std::endl;
        for(int j = 0; j < arr.colSize[i]; j++)
            std::cout << arr.tab[i][j] << " " ;
    }
    
}

void SetElement(const int row, const int col, Array **arr, int value){
    if(row > (*arr)->rowSize || col > (*arr)->colSize[row] ){
        std::cout << std::endl << "Index out of bounds" ;
        return;
    }
    
    (*arr)->tab[row][col] = value;
}

void PrintMax(const Array * arr){
    
    std::cout << std::endl << "maximum " <<std::endl;
    
    int rowMax ;
    int globalMax = 0;

    for(int i = 0; i < arr->rowSize ; i++){
        rowMax = 0;
        for(int j = 0; j < arr->colSize[i]; j++){
            if(arr->tab[i][j] > rowMax)
                rowMax = arr->tab[i][j];
        }
        std::cout << "max " << i << ": " << rowMax << std::endl;
        if(globalMax < rowMax)
            globalMax = rowMax;
    }   

    std::cout <<"global max: " << globalMax;
}

void Clear(Array **arr){
    for(int i = 0; i < (*arr)->rowSize; i++){
        delete [] (*arr)->tab[i];
    }
    delete [] (*arr)->tab;
    delete [] (*arr)->colSize;
    delete *arr;
}
