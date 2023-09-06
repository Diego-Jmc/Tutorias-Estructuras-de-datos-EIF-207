//
// Created by diego on 6/9/2023.
//

#ifndef ALGORITMOS_DE_ORDEAMIENTO_SORTING_H
#define ALGORITMOS_DE_ORDEAMIENTO_SORTING_H
#include "VectorINT.h"

class Sorting {

public:

    void bubbleSort(VectorINT *);

    void insertionSort(VectorINT*);

    void quickSort(VectorINT *vector, int left, int right);


    void mergeSort(VectorINT *vector, int left, int right);

    void merge(VectorINT *vector, int left, int middle, int right);
};


#endif //ALGORITMOS_DE_ORDEAMIENTO_SORTING_H
