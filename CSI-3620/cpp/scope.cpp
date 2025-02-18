/* Filename: scope.cpp
 * Description: function scopes
*/

#include <iostream>
using namespace std;

// Define a constant global variable
// Global means any funcion can access it
const string message = "silly bumbo";

// Defining custom function before main
void innerScope() {
    cout << "Inside Scope Function: " << message << endl;
    const string message2 = "You're a wizard, Harry.";
    cout << "Inside Scope Function: " << message2 << endl;
}

int main() {
	cout << "Inside main function: " << message << endl;
    innerScope();
    string message2 = "wombo";
    cout << "Inside Scope Function: " << message2 << endl;
}