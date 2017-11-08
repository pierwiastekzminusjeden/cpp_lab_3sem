#ifndef TAB_H
#define TAB_H

struct Tab{
    int fullSize;
    int *arr;
    int skip;
    int numberOfCollumns;
    int numberOfRows;
};

struct TabRange{
int collumn1;
int row1;

int collumn2;
int row2;
};


void init(Tab *tab, int collumns, int rows,  int value);

void diag(Tab *tab, int value);

void set(Tab *tab, int Ox, int Oy, int value);

void set_part(Tab *tab, TabRange range, int value);

void print(Tab *tab);

Tab *extract(Tab *tab, TabRange range);

void clean(Tab *tab);


#endif
