#include <iostream>

void pizza();
void pizza(std::string topping);
void pizza(std::string topping,std::string topping2);

int main(){
    std::string a,c;
    char b;
    std::cout << "what topping do you want" << "\n";
    std::cin >> a;
    std::cout << "do you want another topping"  << "\n";
    std::cin >> b;
    if(b = 'y'){
        std::cout << "enter your second topping" << '\n';
        std::cin >> c;
        pizza(a,c);
    }
    else{
        pizza(a);
    }
    return 0;
}


void pizza(){
    std::cout << "pizza";
}

void pizza(std::string topping){
    std::cout << "pizza with " << topping;
}

void pizza(std::string topping,std::string topping2){
    std::cout << "pizza with " << topping << " and " << topping2 ;
}