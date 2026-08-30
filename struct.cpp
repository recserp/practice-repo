#include <iostream>

struct student{
    std::string sname;
    float marks;
};

void print(student s);

int main(){
    student s1;
    s1.sname = "stupid";
    s1.marks = 1;

    student s2;
    s2.sname = "idiot";
    s2.marks = 1;

    print(s1);
    print(s2);
    return 0;
}

void print(student s){
    std::cout << s.sname << "\n";
    std::cout << s.marks<<"\n";
}