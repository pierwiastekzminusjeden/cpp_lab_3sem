#include "ext.h"
#include <cstdlib>


void init(Ext *vec){ 
    vec->policy=5;
    vec->startSize=5;
    vec->tab=(int *)malloc(vec->startSize * sizeof(int));
}

void init_with_size_and_policy(Ext *vec, int size , int (*fun)(int) ){
    vec->startSize=size;
    vec->policy=fun(1);
    vec->tab=(int *)malloc(vec->startSize * sizeof(int));
}

void insert(Ext *vec, int value){

}

int size(Ext *vec){

    return 0;
}

int capacity(Ext *vec){

    return 0;
}

int at(Ext *vec, int value){

    return 0;
}

void for_each_element(Ext *vec, void (*fun)(Ext *)){

} //nie jestem pewien drugiego argumentu

Ext *clone(Ext *vec){

    return 0;
}

void clear(Ext *vec){

}

void print(Ext *vec){

}

void zero(Ext *vec){

}
