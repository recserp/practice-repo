#include <iostream>

int main(){

    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(a)/sizeof(a[0]);
    int temp = 0;
    int c = 9;

    for(int i = 0 ; i < size/2;i++){
        temp = a[c];
        a[c] = a[i];
        a[i] = temp;
        c = c - 1;
    

    }
    for(int j = 0;j < size;j++){
        std::cout << a[j] <<" ";
    }
    return 0;
}