#include <iostream>

int main(){
    std::string len = "yes";
    std::string name;
    std::cout << "enter your name"<<"\n";
    while(len == "yes" or len == "y"){
    std::getline(std::cin,name);
    if(name.length() > 25){
        std::cout << "Name is too long please re enter your name";
    }
    else if(name.length() <3){
        std::cout << "name is too stort please re enter your name"<< "\n";
        
    }
    else{
        std::cout << "your name is:" << name;
        break;
    }
    
}
    return 0;
}