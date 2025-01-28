// Description: String operations with stl

#include <iostream>
using namespace std;

#include <string>
using std::string;

int main() {
    // Create a normal string
    string str = "Hello, World!";

    // Create other strings that add to the original string
    string str2 = "foo";
    string str3 = "bar";
    string death = "bye world!";

    // Concatenate strings, the string library is required to do this
    string str4 = str2 + str3;
    string str5 = str + " " + death;

    // Compare strings based on ASCII table
    if (str > str2)
        cout << "str is greater than str2" << endl;
    else
        cout << "str is less than str2" << endl;

    // Print the strings
    cout << str << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;
}