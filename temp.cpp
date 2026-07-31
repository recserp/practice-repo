#include<iostream>
int main(){
    int weather;
    std::cout << "tell about the weather";
    std::cin >> weather;
    if(weather > 10 and weather <30){
        std::cout << "it's great";
    }
    else if(weather >0 and weather < 9){   
        std::cout << "it's really cold";
    }
    else if(weather > -10 and weather < 0 or weather>31 and weather <40 ){
        std::cout << "it's unpleasent out here";  
    }
    else if(weather > 41) {
        std::cout << "were in hell";
    }
    else{
        std::cout << "hell has forzen";
    }
    return 0;
}