#include <iostream>

class builting{
    int rooms;
    int floor;
    int area;
    public:
    int set_rooms(int num);
    int set_floor(int num);
    int set_area(int num);
};
class house:public builting{
    int bedrooms;
    int baths;
    public:
    int set_bedrooms(int num);
    int set_baths(int num);
};

class school:public builting{
    int classroom;
    int offices;
    public:
    int set_classroom(int num);
    int set_offices(int num);
};


int builting::set_rooms(int num){
    rooms = num;
    return rooms;
}

int builting::set_floor(int num){
    floor = num;
    return floor;
}

int builting::set_area(int num){
    area = num;
    return area;
}

int house::set_bedrooms(int num){
    bedrooms = num;
    return bedrooms;
}

int house::set_baths(int num){
    baths = num;
    return baths;
}

int school::set_offices(int num){
    return offices = num;
}

int school::set_classroom(int num){
    return classroom = num;
}

int main(){
    house abc;
    std::cout << abc.set_rooms(5)<<" "<<abc.set_floor(10)<< " "<<abc.set_area(100);
    return 0;
}