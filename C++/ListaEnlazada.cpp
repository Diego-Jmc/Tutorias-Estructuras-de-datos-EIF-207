#include <iostream>
using namespace std;


struct Node{
	int data;
	Node *next;
};

void Insert(Node **root,int data){
	
	Node *newNode = new Node;
	(*newNode).data = data;
	(*newNode).next = nullptr;
	
	

	if(!*root){
		*root = newNode;	
		return;
	}else{		
		Node *temp = *root;
		
		while(temp->next){
			
			temp = temp->next;
		}
		
		temp->next = newNode;
		
	}
	
}
	
	
	void Delete(Node **root, int data) {
		
		
		if (!*root) {
			return;
		}
		
		Node *temp = *root;
		
		if (temp->data == data) {
			*root = (*root)->next;
			delete temp;
			return;
		} else {
			Node *temp2 = temp;
			
			while (temp) {
				if (temp->data == data) {
					temp2->next = temp->next;
					delete temp;
					return;
				}
				
				temp2 = temp;
				temp = temp->next;
			}
		}
	}
	

void PrintRecursive(Node **root){
	
	if(*root){
		cout<<(*root)->data<<endl;
		PrintRecursive(&(*root)->next);
	}

}

void PrintReverse(Node *root) {
	
		if (!root) {
			return; 
		}
		
		if (root->next) {
			PrintReverse(root->next);
		}
		
		cout << root->data << endl;
}
	

Node * EnesimoFromFinal(Node* root,int n){
	
	Node *temp = root;
	Node *temp2 = temp;
	int cont = 1;
	
	while(temp->next){
		
		if(cont >= n && temp->next){
			temp2 = temp2->next;

		}
		
		cont ++ ;
		temp = temp->next;
		
	}
	
	return temp2;
}

void ShowList(Node **root){
	
	Node *temp = *root;
	
	cout<<"List:"<<endl;
	while(temp){
		
		cout<<"| "<<temp->data<<"";
		
		temp = temp->next;
	}
	
	cout<<"|";
}

	
// reverse list	

int main(int argc, char *argv[]) {
	
	Node *root = nullptr;
	
	Insert(&root,10);
	Insert(&root,2);
	Insert(&root,-5);
	Insert(&root,4);

	
	Node *n = EnesimoFromFinal(root,1);
	
	if(n!=nullptr)
		cout<<n->data<<endl;
	else
		cout<<"No se encontro n-esimo"<<endl;
	
	

	
	return 0;
}

