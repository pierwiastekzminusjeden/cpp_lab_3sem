#include <iostream>
#include "List.h"
#include "Node.h"

List::List(): _head(NULL){ }

List::List(List &toCopy):_head(toCopy.getHead()){ 
    Node * tmpToCopy = toCopy.getHead();
    Node *tmpToPaste = _head;
    
    while (tmpToCopy->next() != NULL){

        tmpToPaste->setNext(tmpToCopy->next());
        tmpToPaste = tmpToPaste->next();
        tmpToCopy = tmpToCopy->next();
    }
}
    
List::~List(){
    Node *toDel;
    Node *tmp = getHead();
    while(tmp->next() != NULL){
        toDel = tmp;
        tmp = tmp->next();
        delete toDel;
    }
}

const Node *List::find(int value) const{
    Node *tmp = _head;
    while(tmp != NULL || tmp->data() != value){
        tmp = tmp->next();
    }
    if(tmp->data() == value)
        return tmp;
    else
        return NULL;
}

void List::insert(int value, start position){
    if(position == Begin){
        Node *newHead = new Node(value);
        newHead->setNext(this->getHead());
    }
    else if(position == End){
        Node *tmp = getHead();
        while(tmp->next() != NULL)
            tmp = tmp->next();
        
        Node *newNode = new Node(value);
        newNode->setNext(NULL);
        tmp->setNext(newNode);
    }
}

List List::insert(int value){
    return * this;
}

List::operator Node() const{
    return _head;
}

void List::print() const{
    Node *tmp = getHead();
    while(tmp->next() != NULL){
        std::cout<< tmp->data();
        tmp = tmp->next();
    }
}
Node *List::getHead() const{
    return _head;
}