#include <iostream>
#include "Node.h"

Node::Node(int value): _next(NULL){
    _data = value;
}

Node::~Node(){
    delete this;
}

Node::Node(const Node *value){
    this->_data = value->_data();
    this->_next = value->_next();
}

int Node::data() const{
    return _data;
}

Node *Node::next() {
    return _next;
}

void Node::setNext(Node *newNext){
    _next = new Node(newNext);
}