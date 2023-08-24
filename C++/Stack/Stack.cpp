//
// Created by diego on 23/8/2023.
//

#include "Stack.h"

Stack::Stack() {
    this->root = nullptr;
    this->tail = nullptr;
}

void Stack::push(int data) {

    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if(!root){
        root = newNode;
        tail = root;
        return;
    }else{
        Node *temp = root;
        while(temp->next){
            temp=temp->next;
        }

        temp->next = newNode;
        tail = temp->next;
    }




}

int Stack::peek() {
    return tail->data;
}

int Stack::pop() {

    int data;
    if (root == tail) {
        data = root->data;
        delete root;
        root = nullptr;
        tail = nullptr;
    } else {
        Node *temp = root;
        while (temp->next != tail) {
            temp = temp->next;
        }
        data = tail->data;
        delete tail;
        tail = temp;
        tail->next = nullptr;
    }

    return data;
}