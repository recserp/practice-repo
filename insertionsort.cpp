#include <iostream>

void sorts(int a[] , int size);

int main(){
    int t;
    int input;
    int a[t];
    std::cout << "enter no off elements:";
    std::cin >> t;
    for(int i = 0;i<t;i++){
        std::cout <<"\nElement:";
        std::cin >> input;
        a[i] = input
    }
    
    int size = sizeof(a)/sizeof(a[0]);
    sorts(a,size);
    for(int i = 0 ; i <size;i++){
        std::cout << a[i] <<" ";
    }
    return 0;
}


void sorts(int a[] , int size){
    for(int i=1 ; i <size;i++){
        int temp = a[i];
        int j = i-1;

        while(j>=0 && a[j] > temp){
            a[j+1] = a[j];
            j = j -1 ;

        }
        a[j+1] = temp;

    }

}
