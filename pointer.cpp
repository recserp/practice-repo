#include <iostream> 

int main(){
    int a[10];
    int * ab= &a[6];
    int * cd = &a[0];

    for(int i = 0; i<10;i++ ){
        std::cout << &a[i] <<" = "<<a[i] <<"\n";
    }

    std::cout << "6th " << ab << "\n";
    std::cout << "0th " << cd << "\n";
    std::cout << ab - cd;

    return 0;
}