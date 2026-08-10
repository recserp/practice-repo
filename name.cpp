#include <iostream>

std::string joint(std::string s1 , std::string s2);
int main(){
    std::string fname = "ozuss";
    std::string lname = "sajwan";
    std::cout << joint(fname,lname) ;
    return 0;
}

std::string joint(std::string s1, std::string s2){
    return s1 + " " + s2;
}