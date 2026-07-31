#include <iostream>
int main(){
    int a;
        do{
        std::cout << "enter a positive no.:";
        std::cin >> a;
        }while(a<0);
    return 0;
}