// Description: Basic string operations

#include <iostream>
using namespace std;

int main() {
    // Create a normal string variable
    string str = "Hello, World!";
    cout << str << endl;
    cout << "First letter of the string is: " << str[0] << endl;
    // Using sizeof will return whitespace since the actual last character is the null value indicating the end of the string
    // cout << "Last letter of the string is: " << str[sizeof(str) - 1] << endl;
    // Using length() will return the actual last character of the string
    cout << "Last letter of the string is: " << str[str.length() - 1] << endl;

    // Add some pointers
    // Create a pointer to the string
    string* str_pointer = &str;
    // Create a pointer to the first letter of the string
    char* str_first_letter = &str[0];

    // Print the string using the pointer by dereferencing it
    cout << "String using pointer: " << *str_pointer << endl;
    // Print the memory location of the string
    cout << "Memory location of the string: " << str_pointer << endl;
    // Print the first letter of the string using the pointer
    cout << "First letter of the string using pointer: " << *str_first_letter << endl;
    // Print the memory location of the first letter of the string
    cout << "Memory location of the first letter of the string: " << str_first_letter << endl;
}
