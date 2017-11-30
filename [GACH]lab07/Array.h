#pragma once

struct Array{
    int *colSize;
    int rowSize;
    int **tab;

};

void CreateArray(Array *& arr, const int *columns, const int rows);  //łaj referencja do wsk

void FillWith(Array * arr,const int value);

void Print(const Array & arr);

void SetElement(const int row, const int col, Array **arr, int value);

void PrintMax(const Array * arr);

void Clear(Array **arr);
