//
// Created by diego on 23/8/2023.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H
#include <iostream>

using namespace  std;


struct Node{
    int data;
    Node *next;
};



class Queue {
private:
    Node *root; // or head
    Node * tail;
    bool isEmpty();
public:

    Queue();

    void enqueue(int data);
    int dequeue();
    int next();

};


#endif //QUEUE_QUEUE_H
