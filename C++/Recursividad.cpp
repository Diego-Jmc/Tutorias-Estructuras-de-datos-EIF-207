#include <iostream>
using namespace std;

int factIterativo(int n){
	
	int bolsa = 1;
	int indice = 1;
	
	while(indice <= n){
		bolsa*=indice;
		indice++;
	}

	return bolsa;
	
	
}

int fact(int n){
	
	if(n == 0){
		return 1;
	}
	
	return n * fact(n-1);
	
}

int factCola(int n,int acc =1){
	
	if(n == 0){
		return acc;
	}
	
	return factCola(n-1,n*acc);
}

string reverse(string word){
	
	if(word == ""){
		return "";
	}
	

	return word.at(word.length()-1) + reverse(word.substr(0,word.length()-1));
	
}
	
int nat(int n){
	if(n == 1){
		return 1;
	}
	
	return n+nat(n-1);
}

void printNat(int n){
	if(n == 0){
		return ;
	}
	
	printNat(n-1);
	
	cout<<n<<endl;
}
	


int main(int argc, char *argv[]) {
	
	
	printNat(10);
	cout<<factIterativo(5)<<endl;	
	
	return 0;
}

