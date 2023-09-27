//
// Created by diego on 27/9/2023.
//

#ifndef BINARYHEAP_MAXHEAP_H
#define BINARYHEAP_MAXHEAP_H
#include <iostream>

class MaxHeap {
    private:
    int *array;
    int size;
    int length;
    void swap(int *x,int *y);
public:
    MaxHeap(int);
    int parent(int i);
    int right(int i);
    int left(int i);
    int extractMax();
    void insert(int n);
    void maxHeapify(int i);
    ~MaxHeap();

};


#endif //BINARYHEAP_MAXHEAP_H
