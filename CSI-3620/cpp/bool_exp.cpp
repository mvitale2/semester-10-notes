#include <iostream>
using namespace std;

int main() {
    // Declare empty float variable
    float gpa;

    // Get the user's gpa
    cout << "Enter your gpa\n> ";
    cin >> gpa;

    // Return a string based on gpa condition
    string output = (gpa >= 2.0) ? ("Congrats, you passed!") : ("See you next semester :(");

    // Print the output
    cout << output << endl;
}