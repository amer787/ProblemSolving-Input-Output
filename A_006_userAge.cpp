#include <iostream>


// seconde lesson Problem-Solving in c++ *CPIT-1L0 Syllabus*
/**
 * Problem 6: User Age
 * This program asks the user for their age and then prints out a message saying,
 * "You are [age] years old."
 */

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old." << std::endl;
    return 0;
}