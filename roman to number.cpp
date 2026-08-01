#include <iostream>
#include <unordered_map>


int main(){


    std::unordered_map<char, int> con = {{'I', 1}, 
                                         {'V', 5}, 
                                         {'X', 10}, 
                                         {'L', 50},
                                         {'C', 100}, 
                                         {'D', 500}, 
                                         {'M', 1000}};
    
    std::string  s;
    std::cout << "Enter the Roman number";
    std::cin >> s;
    int num = 0;

    for(int i = 0 ;i < s.length() ;i++){


        if(i+1 < s.length() && con[s[i]] < con[s[i+1]]){
            num = num + con[s[i+1]] - con[s[i]];
            i++;
        }
        else{
            num = num  + con[s[i]];
        }

    }

    std::cout << num;
    return 0;
}

