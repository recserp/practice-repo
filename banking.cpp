#include <iostream>


void balance(float balance);


int main(){
    int a;
    float b,c,e;
    float d = 20000;
    do{ std::cout << "press 1 to check balance " <<"\n" << "press 2 to deposite money" << "\n" << "press 3 to withdraw money" << "Press 4 to exit: ";
    std::cin >> a;
    switch(a){
        case 1:
            balance(d);
            break;
        case 2:
            std::cout << "enter the amount to deposite:";
            std::cin >> c;
            d = d + c;
            balance(d);
            break;
        case 3:
            std::cout << "enter the amount to withdraw:";
            std::cin >> e;  
            d = d - e;
            balance(d);
            break;
        case 4:
            std::cout << "thankyou for your time";
            break; 
        default:
            std::cout << "enter a valid option" << "\n";
            break;       
    }
    }while(a > 5);
    return 0;
}


void balance(float balance){
    std::cout << balance;
}