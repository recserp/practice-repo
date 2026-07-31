#include <iostream>


void sort(int a[],int size);


int main(){
    int a[] = {2,1,6,7,4,10,5,3,9,8};
    int size = sizeof(a)/sizeof(a[0]);

    sort(a,size);
    for(int i:a){
        std::cout << i << " ";
    }
    return 0;
}

void sort(int a[],int size){
    int temp;
    for(int i = 0;i < size - 1;i++){
        for(int j = 0 ; j < size - i - 1;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

}