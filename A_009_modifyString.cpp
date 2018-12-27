#include <iostream> 
#include <string>


/** 
 Problem 9: Modify a String
Write a program that asks the user to enter a sentence.
 Then replace every instance of the letter "a" with the "@" symbol and print the modified sentence.
Problem 10: Reverse a String
*/
int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
   // for هنا نستخدم الدالة for للتكرار على كل حرف في الجملة
    // char &c : sentence هنا نستخدم الدالة for للتكرار على كل حرف في الجملة
    //******************************************************
    // for (char &c : sentence) {
    //     if (c == 'a') {
    //         c = '@';
    //     }
    // }
    //******************************************************

     // for هنا نستخدم الدالة for للتكرار على كل حرف في الجملة
     // int i = 0; i < sentence.length(); i++ هنا نستخدم الدالة for للتكرار على كل حرف في الجملة
   // هنا نستخدم الدالة replace لتغيير الحرف a بالرمز @
   
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'a') {
            sentence.replace(i, 1, "@");
        }
    }

    std::cout << "Modified sentence: " << sentence << std::endl;
    return 0;
}