#include <iostream>
int main(){
    float x;
    char a;
    std::cout << "do you want to convert temp in C or F";
    std::cin >> a;
    std::cout << "enter temp";
    std::cin >>x;
    if(a=='f' or 'F'){
        std::cout <<"Converted temp to F:"<< ((x*9)/5) + 32 <<"Fahrenheit";
    }
    else if(a=='c' or 'C'){
        std::cout <<"converted temp to C:" << ((x*5)/9) - 32;
    }
    else{
        std::cout <<"plzz write something you would say to your mother";
    }
    return 0;
}