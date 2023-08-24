//
// Created by diego on 23/8/2023.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H
#include <iostream>

struct Node{
    int data;
    Node *next;
};

class Stack {


private:
    Node *root;
    Node *tail;
public:
    Stack();

    void push(int data);
    int pop();
    int peek();

};


#endif //STACK_STACK_H
