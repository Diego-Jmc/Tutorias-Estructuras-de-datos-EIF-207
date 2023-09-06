//
// Created by diego on 6/9/2023.
//

#ifndef ALGORITMOS_DE_ORDEAMIENTO_VECTORINT_H
#define ALGORITMOS_DE_ORDEAMIENTO_VECTORINT_H
#include <iostream>
#include <sstream>
using namespace std;


class VectorINT {

private:
    int *vector;
    int size;
    int length;
public:


    explicit VectorINT(int size);

    int get(int);

    void set(int index,int val);

    int getSize() const;

    void setSize(int size);

    int getLength() const;

    void setLength(int length);

    string toString();

    void push(int);

    void swap(int i , int j);

};


#endif //ALGORITMOS_DE_ORDEAMIENTO_VECTORINT_H
