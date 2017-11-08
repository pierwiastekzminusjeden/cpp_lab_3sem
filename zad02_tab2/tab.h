#ifndef TAB_H
#define TAB_H

struct Tab{
    int *arr;
    int sep;
    int numberOfCollumns;
    int numberOfRows;
};

struct TabRange{
int w1;
int k1;
int w2;
int k2;


};


void init(Tab *tab, int collumns, int rows,  int value);

void diag(Tab *tab, int value);

void set(Tab *tab, int Ox, int Oy, int value);

void set_part(Tab *tab, TabRange tabRange, int value);

void print(Tab *tab);

Tab *extract(Tab *tab, TabRange tabRange);

void clean(Tab *tab);


#endif
