#include <string>
auto speedup = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}();


class Solution {
public:
    bool isPalindrome(int x) {
    std::string num = std::to_string(x);
    std::string reversed(num.rbegin(), num.rend());
    if(reversed == num){
        return true;
    }
    else{
        return false;
    }
    }
};
