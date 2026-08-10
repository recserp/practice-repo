#include <iostream>

struct student{
    std::string sname;
    float marks;
    bool is_shit_at_studing ;
};


int main(){
    student s1;
    s1.sname = "stupid";
    s1.marks = 1;

    student s2;
    s2.sname = "idiot";
    s2.marks = 1;

    std::cout << s1.sname << "\n" << s2.sname;
    return 0;
}