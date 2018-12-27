#include <iostream>
#include <string> // هذي السطر لازم تكون موجودة عشان نستخدم الدالة getline
/**
 * Problem 2: User Input Name
This program asks the user for their name and then greets them with their name.
*/
int main() {
    std::string name; // هنا نعرف متغير من نوع string
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name); // هنا نستخدم الدالة getline لأخذ الاسم من المستخدم
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}