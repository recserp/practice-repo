#include <ctime>
#include <iostream>
int main(){
    srand(time(NULL));
    int a = (rand()% 10)+1;
    int b;
    int c;
    do{
        std::cout << "guess a num b/w 1 and 10:";
        std::cin >> b;
        c++;
        if(a == b){
            std::cout << "you guessed it right" << "\n";
        }
        else{
            std::cout << "retry" << "\n" ;
        }
    } while(a!=b);
    std::cout << "total no of guess:" << c;
        return 0;
}
