#ifndef PERSON_H
#define PERSON_H

struct Person{
    char *name;
    char *family;
    Person *next;
};

struct person_list{
    Person *person;
    Person *start;
    int numberOfElements;
};

struct person_list_iter{
     char *name;
     char *family;


};

void init_person_list(person_list *list);

void add_person(person_list *list, char *name, char *family);

person_list_iter get_iterator(person_list *list);

bool is_valid(person_list_iter iterator);

void move_to_next(person_list_iter *iterator);

void clean(person_list *list);

#endif
