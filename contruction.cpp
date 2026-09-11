#include <iostream>

#define size 100

class stack{
    int stck[size];
    int tos;
    public:
    stack();
    ~stack();
    void push(int i);
    int pop();
};

stack::stack(){
    tos =0;
    std::cout <<"stack intialized\n";
}

stack::~stack()
{
    std::cout << "stack Destoryed\n";
}

void stack::push(int i){
    if(tos == size){
        std::cout << "stack overflow";
        return;
    }
    stck[tos] = i;
    tos++;
}

int stack::pop(){
    if(tos ==0){
        std::cout << "stack underflow";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    stack a,b;
    a.push(4);
    b.push(5);

    std::cout << a.pop();

}
