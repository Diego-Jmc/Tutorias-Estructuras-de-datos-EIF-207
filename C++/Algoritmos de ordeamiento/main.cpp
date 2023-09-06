
#include "Sorting.h"


int main() {
    std::cout << "Hello, World!" << std::endl;

    VectorINT *v = new VectorINT(100);
    Sorting *sorter = new Sorting();

    v->push(12);
    v->push(84);
    v->push(3);
    v->push(43);
    v->push(1);
    v->push(64);

    cout<<v->toString()<<endl;

    sorter->quickSort(v,0,v->getLength()-1);

    cout<<v->toString()<<endl;

    return 0;
}
