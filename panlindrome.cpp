#include <iostream>
#include <bits/stdc++.h>
bool revcheck(std::string input,std::string temp);

int main(){

    std::string input ;
    std::cout << "Enter the name or number you want to check";
    std::getline(std::cin,input);

    bool check = revcheck(input,temp);

    if(check == true){
        std::cout << "This is a panlindrome "<<input ;
    }
    else{
        std::cout << "this is not a panlindrome"<< input;
    }

    return 0;
}

bool revcheck(std::string input,std::string temp){

    std::string reverse;
    int n = (input.length())/2;


    for(int i = 0 ; i< n/2;i++ ){
        std::swap(input[i] , input[n-i-1]);
    }
    if(temp == input){
        return true;
    }
    else{
        return false;
    }
}