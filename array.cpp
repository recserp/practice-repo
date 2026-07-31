#include <iostream>

int search(int a[],int b,int d);

int main(){
    int b;
    int d;
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    b = sizeof(a)/sizeof(a[0]);
    std::cout << "no to serach:";
    std::cin >> d;
    int c = search(a,b,d);
    if( c == -1){
        std::cout << "not in array";
    }
    else{
        std::cout << c;
    }
    return 0;
}

int search(int a[],int b,int d){
    for(int i = 0;i < b;i++){
        if(a[i]==d){
            return i;
        }
    }
    return -1;
}