#include <iostream>
int main(){
    int a,b;
    std::cout << "Enter the lenght of side of rectangle:";
    std::cin >> a;
    std::cout << "\n"<< "enter the breath of rectangle:";
    std::cin >> b;
    for(int i = 0;i<=b;i++){
        std::cout << "|";
        for(int j = 0; j <= a;j++){
            std::cout << "--";
        }
        std::cout<< "|";
        std::cout << "\n";
    }
    
        
    
    return 0;
}