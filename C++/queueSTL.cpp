#include <iostream>

#include <queue>




using namespace std;

int main(int argc, char *argv[]) {
	
	
	queue<int> q;
	
	q.push(13);
	q.push(12);
	q.push(15);
	q.push(14);
	
	cout<<q.size()<<endl;
	
	cout<<q.front()<<endl;
	
	q.pop();
	
	cout<<q.front()<<endl;
	
	q.pop();
	
	cout<<q.front()<<endl;
	
	
	
	return 0;
}

