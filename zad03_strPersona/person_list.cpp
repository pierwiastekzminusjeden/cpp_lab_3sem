#include <iostream>
#include <cstring>
#include <cstdlib>
#include "person_list.h"

void init_person_list(person_list *list){
    list->data = NULL;
}

void add_person(person_list *list, char *name, char *family){
   
    Person *node = (Person*)malloc(sizeof(Person));

    node->name = (char*)malloc(sizeof(name));
    strcpy(node->name, name);

    node->family = (char*)malloc(sizeof(family));
    strcpy(node->family, family);

    node->next = NULL ;

    if(list->data == NULL)
        list->data=node;
    else{
        Person *tmp = list->data;
        while(tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = node;
    }
}

person_list_iter get_iterator(person_list *list){
//    person_list_iter str = list->dane;
}


bool is_valid(person_list_iter str){
 //   if(str==NULL)
//        return false;
//    else
 //       return true;
}

void move_to_next(person_list_iter *str){
 //   str = str->next;
}

void clean(person_list *list){

    Person *toDelete = NULL;
    Person *newHead = list->data;

    while(newHead != NULL){
        toDelete = newHead;
        newHead = newHead->next;
        free(toDelete->name);
        free(toDelete->family);
        free(toDelete);
    }
}
