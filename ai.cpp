#include <iostream>
#include <string>

int main() {
    std::string len = "y"; // Initialize so loop starts
    std::string name;

    while (len == "yes" || len == "y") {
        std::cout << "enter your name: ";
        
        // Use getline instead of cin >> to allow spaces in names safely
        std::getline(std::cin >> std::ws, name); 

        if (name.length() > 25) {
            std::cout << "Name is too long!\n";
        }
        else if (name.length() < 3) {
            std::cout << "Name is too short!\n";
        }
        else {
            std::cout << "Name \"" << name << "\" is valid and saved.\n";
        }

        // Ask EVERY time at the end of the loop round
        std::cout << "Do you want to enter another name? (y/n): ";
        std::cin >> len;
    }

    std::cout << "Program finished.\n";
    return 0;
}
