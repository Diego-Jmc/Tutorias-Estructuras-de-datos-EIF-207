
#include "Stack.h"
using namespace  std;
int main() {
   Stack *s = new Stack();

   s->push(2);
    s->push(32);
    s->push(24);
    s->push(1);

    cout<<s->peek()<<endl;

    s->pop();

    cout<<s->peek()<<endl;

    s->pop();

    cout<<s->peek()<<endl;

    return 0;
}
