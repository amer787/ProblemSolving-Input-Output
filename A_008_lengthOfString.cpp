#include <iostream>
#include <string>

/** 
 * Problem 8: Length of String
 * Write a program that asks the user
 *  to enter a word and then prints the number of characters in the word.
*/
 

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::getline(std::cin, word); // هنا نستخدم الدالة getline لأخذ الكلمة من المستخدم
   
    std::cout << "The length of the word is: " << word.length() << std::endl; // هنا نستخدم الدالة length لأخذ عدد الحروف في الكلمة
    // length()- دالة ترجع عدد الحروف في الكلمة
    return 0;
}