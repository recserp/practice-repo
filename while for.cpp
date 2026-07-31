#include <iostream>
int main(){
    std::string name;
    do{
        std::cout << "hello what is your name? ";
        std::getline(std::cin,name);
        for(int i = 0 ; i <11 ;i++ ){
            if(i%2 != 0){
                std::cout << "i was kiddding " << name << "\n";
            }
            else{
                std::cout << "fuck you " << name << "\n";
            }
        }
    }while(name.empty());
    return 0;
}