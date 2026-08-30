#include <iostream>
#include <vector>

int main(){
    std::vector<int> num = {1,2,3};
    num.push_back(9);
    num
    num.shrink_to_fit();
    std::cout << num.capacity()<<"\n"<< num.size();
    return 0;
}