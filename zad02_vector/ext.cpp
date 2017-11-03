#include "ext.h"
#include <cstdlib>


void init(Ext *vec){ 
    vec->startSize = 5;
    vec->size = 0;          //brak zmiennej na poczatkowy rozmiar, vec->size rozmiar
    vec->funPolicy = NULL;
    vec->policy=vec->size + vec->startSize; //dopracowac, o 5 wiecej, vec->policy pojemnosc
    vec->tab=(int *)malloc(vec->startSize * sizeof(int));
}

void init_with_size_and_policy(Ext *vec, int start , int (*fun)(int) ){
    vec->startSize = start;
    vec->size = 0;
    vec->funPolicy = fun;
    vec->policy = 2; ;         //tu jebnie
    vec->tab=(int *)malloc(vec->startSize * sizeof(int));
}

void insert(Ext *vec, int value){  
    if(vec->size < vec->policy){
        vec->tab[vec->size] = value;
        vec->size++;
    }
    else{
        if(vec->funPolicy != NULL)
            vec->policy = vec->funPolicy(vec->size);
        else
            vec->policy = vec->size + vec->startSize;

        vec->tab = (int *)realloc(vec->tab, vec->policy * sizeof(int));
        
        vec->tab[vec->size] = value;
        vec->size++;
    }
}

int size(Ext *vec){
    return vec->size;
}

int capacity(Ext *vec){

    return vec->policy;
}

int at(Ext *vec, int value){

    return vec->tab[value];
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
