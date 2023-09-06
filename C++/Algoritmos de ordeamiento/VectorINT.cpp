//
// Created by diego on 6/9/2023.
//

#include "VectorINT.h"

VectorINT::VectorINT(int size) : size(size) {

    this->length = 0;

    this->vector = new int[size];

}


void VectorINT::push(int n){
    if(length < size){
        vector[length++] = n;
        return;
    }
    cout<<"FULL"<<endl;
}

int VectorINT::getSize() const {
    return size;
}

void VectorINT::setSize(int size) {
    VectorINT::size = size;
}

int VectorINT::getLength() const {
    return length;
}

void VectorINT::setLength(int length) {
    VectorINT::length = length;
}

void VectorINT::set(int index, int val) {
    vector[index] = val;
}

string VectorINT::toString() {

    stringstream s;

    s<<"| ";

    for(size_t i = 0;i< length;i++){
        s<<vector[i]<<" | ";
    }

    return s.str();
}

int VectorINT::get(int i) {
    return vector[i];
}

void VectorINT::swap(int i, int j) {
    int temp = vector[i];
    vector[i] = vector[j];
    vector[j] = temp;

}