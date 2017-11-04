#include "ext.h"
#include <cstdlib>
#include <iostream>
#include <cstring>


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

void for_each_element(Ext *vec, void (*fun)(int *)){
    for(int i=0; i < vec->size; i++)
       fun(&(vec->tab[i]));
}

Ext *clone(Ext *vec){
    Ext *vecClone = new Ext;  //lol
    vecClone->startSize = vec->startSize;        //tak tez nie
    vecClone->size = vec->size;
    vecClone->funPolicy = vec->funPolicy;
    vecClone->policy = vec->policy;
    vecClone->tab = (int *)malloc(vecClone->policy * sizeof(int) );
    memcpy(vecClone->tab, vec->tab, vecClone->size);
    
    return vecClone;
}

void clear(Ext *vec){
    free(vec->tab);
}

void print(int *x){
    std::cout << *x << " ";
}

void zero(int *x){
    *x=0;
}
