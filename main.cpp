#include <iostream>

int main()
{
    // Variable declarations (integer whole numbers)
    int age = 35;
    int year = 2023;
    int days = 7;

    // Variable declarations (integer whole numbers including decimal
    double frice = 150.99;
    double gpa = 2.5;
    double temperatire = 25.1;

    // single character variable declaration
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    // boolean variable declaration (true or false)
    bool student = true;
    bool programting = true;
    bool tired = false;

    // string variable declaration
    std::string name = "Pat";
    std::string location = "WSL";
    std::string hobby = "coding";
    std::string address = "Handen Stockholm, SWEDEN";

    std::cout << "Hello from C in WSL!" << '\n';                                  // This line prints a greeting message // \n is a newline character
    std::cout << "My name is " << name << '\n';                                   // call the variable 'name'
    std::cout << "I live in " << location << '\n';                                // call the variable 'location'
    std::cout << "I love " << hobby << " and I'm learning Java " << year << '\n'; // call the variable 'hobby'
    std::cout << "Now I'm learning C++" << '\n';

    return 0;
}
