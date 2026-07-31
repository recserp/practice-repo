#include <iostream>

int main(){
    int t = 0;
    std::cout << "enter the number of element in series you want";
    std::cin >> t;
    int array[t] = {1,1};
    for(int i =0; i < t ;i++){
        array[i+2] = array[i] + array[i+1];
    }

    int size = sizeof(array)/sizeof(array[0]);
    for(int j = 0;j<size;j++){
        std::cout << array[j] << " ";
    }
    return 0;
}