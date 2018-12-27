#include <iostream>

/**
 * Problem 7: Simple Calculator
 * This program asks the user for two numbers and then prints out the sum of the numbers.
 */

int main() {
    double num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    double sum = num1 + num2;
    std::cout << "The sum of the numbers is: " << sum << std::endl;
    return 0;
}