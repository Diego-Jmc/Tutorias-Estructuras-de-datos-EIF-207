#include <iostream>


// O(N)
int powRecursive(int base,int exp){
    if(exp == 1)
        return base; // caso base

    return base * powRecursive(base,exp-1); // hacemos la llamada recursiva
}

// O(log(N)) partimos el problema a la mitad hasta llegar al caso base
long long PotenciacionRapida(long long base, long long exponente){
    if(exponente == 0){
        return 1;
    }

    std::cout<<"LLAMADO A "<<exponente/2<<std::endl;

    long long mitad = PotenciacionRapida(base,exponente/2);

    if(exponente % 2==0){
        return mitad * mitad;
    }else{
        return mitad * mitad * base;
    }


}

class Stack{

private:
    int *array;
    int lenght;
    int size;
public:

    Stack(int size){
        this->size = size;
        this->lenght = 0;
        array = new int[size];
    }

    bool empty(){
        return lenght == 0;
    }



    // complejidad de tiempo O(N)

    void sorted_push(int n){

        if(empty()){
            array[lenght++] = n;
        }else{

            int track_index = lenght-1;
            array[lenght++] = n;
            int current = lenght-1;

            while(array[current] < array[track_index] && track_index >=0){
                int lower = array[current]; // variable aux para no perder el valor
                array[current] = array[track_index];
                array[track_index] = lower;
                track_index--;
                current--;

            }

        }

    }

    int pop(){
        int val = array[lenght-1]; // tomar el valor que esta en el top
        lenght--;
        return val;
    }

    void print(){
        for(size_t i = 0;i<lenght;i++){
            std::cout<<array[i]<<std::endl;
        }
    }


    // O(N)
   static void printRecursive(Stack p){
        if(p.empty())
            return;


        Stack newStack = p; // stack aux

        newStack.pop();

       printRecursive(newStack);

       std::cout<<p.pop()<<std::endl;

    }


};

int main() {

        std::cout<<PotenciacionRapida(2,4)<<std::endl;

    return 0;
}
