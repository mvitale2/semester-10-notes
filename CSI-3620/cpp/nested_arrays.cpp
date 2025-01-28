// Description: Example of how nested arrays work.

#include <iostream>
using namespace std;

int main() {
    // Declare an empty array of 5 doubles
    double a[5];
    // Declare an empty array 10 integers
    int b[10];
    // Defines one element in the double array
    a[0] = 1.0;
    // Defines one element in the integer array
    b[0] = 1;
    // Nested reference example:
    cout << a[b[0]] << "\n";
    // Expected output: 1.0
    // Note: index positions cannot be floats, only integers
}