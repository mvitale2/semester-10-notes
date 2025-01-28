// Description: Demonstrate how references work

#include <iostream>
using namespace std;

int main() {
    // A regular string variable
    string real_name = "Tony Stark";
    // Create a reference to our string variable
    string& iron_man = real_name;

    // Demonstrate that they are the same
    cout << "Real name: " << real_name << endl;
    cout << "Alias: " << iron_man << endl;

    // Modify one of the variables
    iron_man = "Iron Man";
    cout << "Alias: " << iron_man << endl;
}