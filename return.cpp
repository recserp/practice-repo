#include <iostream>

float square(float l);
float cube(float l);
int main(){
    float l;
    std::cout << "enter lenght of square:";
    std::cin >> l;
    std::cout << square(l) << "\n"<<cube(l);
    return 0;
}

float square(float l){
    return l*l;
}

float cube(float l){
    return l*l*l;
}
