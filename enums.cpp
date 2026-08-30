#include <iostream>

enum day {sun = 1,mon = 2,tues = 3,wed = 4,thrus = 5,fri = 6,sat =7};

enum names {palak,ozuss,deepa};
int main(){
    day today = sun;

    switch(today){
        case sun: std::cout << "it is sunday";
        break;
        case mon: std::cout << "it is monday";
        break;
        case wed: std::cout << "it is sud=ay";
        break;
        case thrus: std::cout << "it is sudwadday";
        break;
        case fri: std::cout << "it is suadsnday";
        break;
        case sat: std::cout << "it is suasdsanday";
        break;
    }

    
    return 0;
}