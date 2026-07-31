#include <iostream>

int main(){


    std::string name = "idk";
    int age = 1;
    bool student = true;


    std::cout << &(name) <<"\n" << &(age) <<"\n"<<&(student);
    return 0;
}