#include <iostream> // هذا السطر لازم يكون موجود عشان نستخدم الدوال الموجودة في المكتبة
#include <string> // هذي السطر لازم تكون موجودة عشان نستخدم الدالة getline
/**
 Problem 3: Favorite Color
This program asks the user for their favorite color and then prints out a message saying,
 "Your favorite color is [color]."
 */ 

int main() {
    std::string color; // هذي السطر يعرف متغير من نوع string
    std::cout << "What is your favorite color? ";
    std::getline(std::cin, color); // هنا نستخدم الدالة getline لأخذ اللون من المستخدم
    std::cout << "Your favorite color is " << color << "." << std::endl;
    return 0;
}