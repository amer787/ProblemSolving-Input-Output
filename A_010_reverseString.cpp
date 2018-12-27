#include <iostream>
#include <string>
#include <algorithm> // هذي السطر لازم تكون موجودة عشان نستخدم الدالة reverse


/**
 * Problem 10: Reverse a String
Write a program that asks the user to input a word and prints it out in reverse.
 For example, if the user enters "hello", the program should print "olleh".
*/
int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::getline(std::cin, word);

    std::reverse(word.begin(), word.end()); // هنا نستخدم الدالة reverse لعكس الكلمة
    // word.begin() - هذي الدالة ترجع الحرف الأول في الكلمة
    // word.end() - هذي الدالة ترجع الحرف الأخير في الكلمة
    std::cout << "Reversed word: " << word << std::endl;
    return 0;
}