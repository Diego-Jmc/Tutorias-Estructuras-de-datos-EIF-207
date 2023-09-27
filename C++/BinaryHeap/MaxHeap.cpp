//
// Created by diego on 27/9/2023.
//

#include "MaxHeap.h"


MaxHeap::MaxHeap(int _size) {
    this->size = _size;
    this->length = 0;
    this->array = new int[_size];

}

void MaxHeap::swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void MaxHeap::insert(int n) {

    if(length >= size){
        std::cout<<"Heap lleno!"<<std::endl;
        return;
    }

    length++;
    int i = length-1;
    array[i] = n;

    while(i !=0 && array[parent(i)] < array[i]){
        swap(&array[i],&array[parent(i)]);
        i= parent(i);
    }


}

int MaxHeap::right(int i) {
    return (2*i + 2);
}

int MaxHeap::left(int i) {
    return 2*i+1;
}

int MaxHeap::parent(int i) {
    return (i-1)/2;
}

int MaxHeap::extractMax() {

    if(length <= 0){
        throw new std::runtime_error("No elements to extract");
    }

    if(length == 1){
        length--;
        return array[0];
    }

    int max = array[0];
    array[0] = array[length-1];
    length--;
    maxHeapify(0);

    return max;

}

void MaxHeap::maxHeapify(int i) {

    int l = left(i);
    int r = right(i);
    int greater = i;

    if (l < length && array[l] > array[i])
        greater = l;
    if (r < length && array[r] > array[greater])
        greater = r;
    if (greater != i)
    {
        swap(&array[i], &array[greater]);
        maxHeapify(greater);
    }
}

MaxHeap::~MaxHeap() {
    delete []array;
}