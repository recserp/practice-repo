#include <ctime>
#include <iostream>
int main(){
    srand(time(NULL));
    int a = (rand() % 6) + 1;
    int b = (rand() %6)+1;
    int c = (rand() %6)+1;
    std::cout << a << "\n"<<b<<"\n" << c ;
    return 0;
}