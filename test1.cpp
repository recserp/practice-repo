#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    string fileName;

public:
    Person(const string& file) {
        fileName = file;

        // Sample data
        firstName = "John";
        lastName = "Doe";
    }

    string getFirstName() const {
        return firstName;
    }

    string getLastName() const {
        return lastName;
    }

    string getFile() const {
        return fileName;
    }
};

int main(int argc, char* argv[]) {

    string file_name;

    // Check command-line argument
    if (argc == 2) {
        file_name = argv[1];
    } 
    else {
        cout << "Invalid command line arguments." << endl;
        cout << "Please provide the JSON file name." << endl;
        return 1;
    }

    // Create Person object
    Person person(file_name);

    cout << "First Name: " << person.getFirstName() << endl;
    cout << "Last Name: " << person.getLastName() << endl;
    cout << "File: " << person.getFile() << endl;

    return 0;
}