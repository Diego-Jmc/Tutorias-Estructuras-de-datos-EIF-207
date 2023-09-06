//
// Created by diego on 6/9/2023.
//

#include "Sorting.h"


void Sorting::insertionSort(VectorINT *vector) {

    int length = vector->getLength();

    for (int i = 1; i < length; i++) {
        int current_element = vector->get(i);
        int j = i - 1;

        while (j >= 0 && vector->get(j) > current_element) {
            vector->set(j + 1, vector->get(j));
            j--;
        }

        vector->set(j + 1, current_element);
    }
}


int partition(VectorINT *vector, int left, int right) {
    int pivot = vector->get(right);
    int i = left - 1;

    for (int j = left; j <= right - 1; j++) {
        if (vector->get(j) < pivot) {
            i++;
            vector->swap(i, j);
        }
    }

    vector->swap(i + 1, right);
    return i + 1;
}


void Sorting::quickSort(VectorINT *vector, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(vector, left, right);

        quickSort(vector, left, pivotIndex - 1);
        quickSort(vector, pivotIndex + 1, right);
    }
}



void Sorting::merge(VectorINT *vector, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays to hold the subarrays
    int* leftArray = new int[n1];
    int* rightArray = new int[n2];

    for (int i = 0; i < n1; i++) {
        leftArray[i] = vector->get(left + i);
    }
    for (int j = 0; j < n2; j++) {
        rightArray[j] = vector->get(middle + 1 + j);
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            vector->set(k, leftArray[i]);
            i++;
        } else {
            vector->set(k, rightArray[j]);
            j++;
        }
        k++;
    }

    while (i < n1) {
        vector->set(k, leftArray[i]);
        i++;
        k++;
    }

    while (j < n2) {
        vector->set(k, rightArray[j]);
        j++;
        k++;
    }

    delete[] leftArray;
    delete[] rightArray;
}


void Sorting::mergeSort(VectorINT *vector, int left, int right) {
    if (left < right) {
        // Find the middle point of the array
        int middle = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(vector, left, middle);
        mergeSort(vector, middle + 1, right);

        // Merge the sorted halves
        merge(vector, left, middle, right);
    }
}