#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string user_input;
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::cout << "$ ";
  std::getline(std::cin,user_input);
}



void string_to_char(std::string user_input){
    int size = user_input.length(); 
    std::vector<char> char_user_input;
    for(int i = 0;i<size;i++){
        char a = user_input[i];
        char_user_input.push_back(a);
    }
}