#include <iostream>

#define size 100

class stack{
    int stck[size];
    int tos;
    public:
    void init();
    void push(int i);
    int pop();
};

void stack::init(){
    tos = 0;
}

void stack::push(int i){
    if(tos ==size){
        std::cout<<"stack is full";
        return;
    }
    stck[tos] = i;
    tos++;
}
int stack::pop(){
    if(tos==0){
        std::cout << "stack underflow";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    stack stack1,stack2;
    stack1.init();
    stack1.push(5);
    stack1.push(4);
    stack2.init();
    stack2.push(3);
    stack2.push(2);

    std::cout<< stack1.pop()<<" "<<stack1.pop()<<" ";
    std::cout<< stack2.pop()<<" "<<stack2.pop()<<" ";
}