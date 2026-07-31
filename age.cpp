#include <iostream>

int main(){
    bool redo = true;
    char a;
    float num1;
    float num2;
    std::cout << "enter your number";
    std::cin >> num1;
    std:: cout << "enter 2nd num";
    std::cin >> num2;
    while (redo)
    {
    std::cout << "enter char from +,-,*,/";
    std::cin >> a;
    switch(a){
        case '+':
            std::cout << num1+num2 << "addition of 2 number";
            redo = false;
            break;
        case '-':
            std::cout <<num1-num2;
            redo = false;
            break;

        case '*':
            std::cout <<num1*num2;
            redo = false;
            break;
        case '/':
            std::cout << num1/num2;
            break;
        default:
            std::cout << "enter a valid op";
            std::cout << "do you want to redo with valid operator press 1 or 0 to stop";
    std::cin >> redo ;
    }
}
    return 0;
}
