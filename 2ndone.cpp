#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string ,int>> pairlist ;
typedef std::string text;


namespace first{
    float radius = 12;
}




int main(){
    using namespace first;
    const float pi = 3.1415;
    const int pixel = 1920 * 1080;
    float radius = 10;
    float circumfrence = 2*pi*radius;
    std::cout << "the circumfrence is" << "\n" << circumfrence << "\n";
    std::cout << pixel<< "\n"<<"total no. of pixels"<<"\n";
    std::cout << first::radius<<"\n";
    text name ="ozuss";
    std::cout << name;
    return 0;
}

