#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char *argv[]) {
	
	stack<int *> my_stack;
	
	my_stack.push(new int(6));
	my_stack.push(new int(4));
	my_stack.push(new int(7));
	
	my_stack.pop();
	
	cout<<*my_stack.top()<<endl;

	
	
	return 0;
}

