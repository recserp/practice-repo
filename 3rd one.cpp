#include <iostream>
#include <cmath>
int main(){
    float x ;
    float y ;
    std::cout << "Enter the perpendicular" << "\n" ;
    std:: cin >> x ;
    std::cout << "Enter the base" << "\n" ;
    std::cin >> y ;
    x = pow(x,2);
    y = pow(y,2);

    std::cout <<"the hypo lenght is" << sqrt(x+y) ;
    return 0;
}






