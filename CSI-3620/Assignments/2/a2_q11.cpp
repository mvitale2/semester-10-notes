/* Filename: a2_q11.cpp
* Author: Michael Vitale
* Description: Demonstrate how pointers work. 
*/

#include <iostream>
using namespace std;

int main() {
    // Declare float variable
    float a = 2.1;
    // Declare a float pointer variable
    float* a_ptr;
    // Assign the a variable to the pointer to point to a's memory location
    a_ptr = &a;

    // Print the stored memory size of a and a_ptr
    cout << sizeof(a) << endl; 
    cout << sizeof(a_ptr) << endl;
}