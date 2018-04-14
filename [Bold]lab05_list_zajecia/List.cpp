#include <iostream>
#include "List.h"

void prepare(List *list){
    list->head = NULL;
}

void add(List *list, char *buffor){
    Element *node = new Element;
    node->data = new char [strlen(buffor)+1];
    strcpy(node->data, buffor); 
    node->next = NULL;

    if(list->head == NULL)
        list->head = node; 
        
    else{
        Element *newHead = list->head;
        while(newHead->next != NULL)
            newHead= newHead->next;
        newHead->next = node;
    }
}

bool empty(const List *list){
    if(list->head == NULL)
        return true;
    else
        return false;
}

void dump(const List *list){
    Element *newHead = list->head;
    while(newHead != NULL){
        std::cout << newHead->data << " ";
        newHead = newHead->next;
    }
}

void clear(List *list){
    Element *toDel = NULL;
    while(list->head != NULL){
        toDel = list->head;
        list->head = list->head->next;
        delete [] toDel->data;
        delete toDel;
    }
    prepare(list);
}
