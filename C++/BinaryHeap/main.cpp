#include <iostream>
#include "MaxHeap.h"


int main() {


    MaxHeap *mh = new MaxHeap(15);

    mh->insert(10);
    mh->insert(30);
    mh->insert(3);
    mh->insert(50);
    mh->insert(15);

    std::cout<<mh->extractMax()<<std::endl;
    std::cout<<mh->extractMax()<<std::endl;
    std::cout<<mh->extractMax()<<std::endl;
    std::cout<<mh->extractMax()<<std::endl;

    delete mh;

    return 0;
}
