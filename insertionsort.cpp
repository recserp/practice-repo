#include <iostream>

void sorts(int a[] , int size);

int main(){
    int a[10] = {10,4,2,7,5,6,3,1,9,8};
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