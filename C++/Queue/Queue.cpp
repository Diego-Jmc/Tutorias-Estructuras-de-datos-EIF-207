//
// Created by diego on 23/8/2023.
//

#include "Queue.h"

Queue::Queue() {
    this->root = nullptr;
    this->tail = nullptr;
}


bool Queue::isEmpty() {
    return root == nullptr && tail == nullptr;
}



void Queue:: enqueue(int data) {

    Node *newNode = new Node;
    newNode->next = nullptr;
    newNode->data = data;

    if(isEmpty()){
        tail= newNode;
        root = newNode;
    }else{


        tail->next = newNode;
        tail = tail->next;

    }

}


int Queue::next() {
    return root->data;
}


int Queue::dequeue() {


    if(root){
        Node *temp = root;
        root = root->next;
        return temp->data;
    }

    throw std::runtime_error("LA COLA ESTA VACIA");

}