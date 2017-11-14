#include <iostream>
#include "rope.h"

Rope *make_rope(int size){
    Rope *list = new Rope;
    list->arrIter = 0;
    list->arrSize = size;
    list->arr = new int [list->arrSize];

    return list;
}

void insert(Rope *list, int value){
    Rope *head = list;
    while(head->next != NULL)
        head = head->next;
    if(head->arrIter < head->arrSize)
        head->arr[(head->arrIter)++] = value;
    
    else{
        Rope *node = new Rope;
        node->arrIter = 0;
        node->arrSize = list->arrSize;
        node->arr = new int [node->arrSize];

        node->arr[(node->arrIter)++] = value;
        head->next = node;
    }
}

int size(Rope *list){
    Rope *head = list;
    int numberOfElements = 0;
    while(head != NULL){
        numberOfElements += head->arrIter;
        head = head->next;
    }
    return numberOfElements;
}

int capacity(Rope *list){
    Rope *head = list;
    int numberOfElements = 0;
    while(head != NULL){
        numberOfElements += head->arrSize;
         head = head->next;
    }
    return numberOfElements;
}

void iterate_over_elements(Rope *list, int (*fun)(unsigned, int )){
    Rope *head = list;
    int numberOfNodes=0;
    while(head != NULL){
        for(int i = 0; i < head->arrSize; i++){
            head->arr[i] = fun(numberOfNodes * head->arrSize + i, head->arr[i]) ;  
        }
        head = head->next;
        numberOfNodes++;
    }
}

void clear(Rope *list){
    Rope *toDel = NULL;
    while(list != NULL){
        toDel = list;
        list = list->next;
        delete [] toDel->arr;
        delete toDel;
    }
}

int print(unsigned index, int x){
    std::cout << index << "[" << x << "] ";
    return x;
}
