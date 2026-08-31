#include <iostream>

void walk(int steps);
int factorial(int l);

int main(){
    walk(100);
    std::cout << factorial(10);
    return 0;
}

void walk(int steps){
    if(steps > 0){
        std::cout<<"take a step\n";
        walk(steps -1);
    }
}

int factorial(int l){
    if(l>1){
    return l*factorial(l-1);
    }
    else{
        return 1;
    }

}