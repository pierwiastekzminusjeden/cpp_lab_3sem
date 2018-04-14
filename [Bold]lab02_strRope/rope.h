#ifndef ROPE_H
#define ROPE_H

struct Rope{
    int arrIter;
    int arrSize;
    int *arr;
    Rope *next;
};

Rope *make_rope(int size);

void insert(Rope *node, int value);

int size(Rope *list);

int capacity(Rope *list);

void iterate_over_elements(Rope *list, int (*fun)(unsigned, int));

void clear(Rope *list);

int print(unsigned index, int x);

#endif
