#ifndef ext_h
#define ext_h

struct Ext{


};

void init(Ext *vec);

void init_with_size_and_policy(Ext *vec, int sz , int (*fun)(int) );

void insert(Ext *vec, int value);

int size(Ext *vec);

int capacity(Ext *vec);

int at(Ext *vec, int value);

void for_each_element(Ext *vec, void (*fun)(Ext *)); //nie jestem pewien drugiego argumentu

Ext *clone(Ext *vec);

void clear(Ext *vec);

void print(Ext *vec);

void zero(Ext *vec);

#endif
