#include <iostream>

int search(std::string name[],int a,std::string b);

int main(){
    std::string b;
    std::cout << "enter name to search";
    std::cin >>b;
    std::string names[] = {"ozuss","prince","sanjay","prince_bharti","Sahid"};
    int a = sizeof(names)/sizeof(names[0]);
    int d = search(names,a,b);
    if(d != -1){
        std::cout << d;
    }
    else{
        std::cout << "name is not in database";
    }
    return 0;
}

int search(std::string names[],int a,std::string b){
    for(int i = 0;i < a;i++){
        if(names[i]==b){
        return i;
        }

    }
    return -1;
}