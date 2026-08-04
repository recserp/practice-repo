#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {3, 0, 1, 4}; 
    int n = nums.size();

    int x = 0;
    x = (n*(n+1)/2);

    int y = 0;
    for(int i=0;i<n;i++){
        y = y + nums[i];
    }
    if(x == y){
        std::cout << "NO missing Number";
    }
    else{
        std::cout << "The missing number is "<< x-y ;
    }
    return 0;
}
