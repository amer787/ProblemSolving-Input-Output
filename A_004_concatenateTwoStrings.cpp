#include <iostream> // هذا السطر لازم يكون موجود عشان نستخدم الدوال الموجودة في المكتبة
#include <string> // هذي السطر لازم تكون موجودة عشان نستخدم الدالة getline

/** 
 * Problem 4: Concatenate Two Strings
 * This program asks the user for two strings and then concatenates them together.
 * like "Hello, " + "World!" = "Hello, World!"
 * like "firstName" + "lastName" = "firstName lastName
*/

int main() {
    std::string string1, string2; // هنا نعرف متغيرين من نوع string
    std::cout << "Enter the first string: ";
    std::getline(std::cin, string1); // هنا نستخدم الدالة getline لأخذ النص الأول من المستخدم
    std::cout << "Enter the second string: ";
    std::getline(std::cin, string2); // هنا نستخدم الدالة getline لأخذ النص الثاني من المستخدم

    std::string concatenatedString = string1 + string2; // هنا نستخدم العملية الرياضية لدمج النصوص
    std::cout << "Result: " << concatenatedString << std::endl; 
    return 0;
}