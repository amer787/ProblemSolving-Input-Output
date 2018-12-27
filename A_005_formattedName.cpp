#include <iostream> // هذا السطر لازم يكون موجود عشان نستخدم الدوال الموجودة في المكتبة
#include <string> // هذي السطر لازم تكون موجودة عشان نستخدم الدالة getline

/**
 Problem 5: Formatted Name
Write a program that asks the user to enter their full name in the format "First Last",
 and then prints their last name followed by a comma and the first name.
 */ 

int main() {
    std::string fullName; // هنا نعرف متغير من نوع string
    std::cout << "Enter your full name (First Last): ";
    std::getline(std::cin, fullName); // هنا نستخدم الدالة getline لأخذ الاسم من المستخدم
    int spaceIndex = fullName.find(' '); //  هنا نستخدم الدالة find للبحث عن المسافة بين الاسم الأول والثاني
    std::string firstName = fullName.substr(0, spaceIndex); // هنا نستخدم الدالة substr لأخذ الاسم الأول
    std::string lastName = fullName.substr(spaceIndex + 1); // هنا نستخدم الدالة substr لأخذ الاسم الثاني

    std::cout << lastName << ", " << firstName << std::endl;
    return 0;
}