#include<iostream>

void showbalance(float balance);
void deposite();
void withdraw(float balance);

int main(){
    float balance = 0;
    int a;
    std::cout << "press 1 to check balance " <<"\n" << "press 2 to deposite money" << "\n" << "press 3 to withdraw money" << "Press 4 to exit: ";
    std::cin >> a;
    switch(a){
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance = balance + deposite();
            break:
        case 3:
            
    }
    return 0;
}

