#include "Queue.h"

int main() {

    Queue *q = new Queue();

    q->enqueue(43);
    q->enqueue(23);
    q->enqueue(54);
    q->enqueue(7);
    q->enqueue(-71);
    q->enqueue(9);

    cout<<q->dequeue()<<endl;
    cout<<q->dequeue()<<endl;
    cout<<q->dequeue()<<endl;
    cout<<q->dequeue()<<endl;


    return 0;
}
