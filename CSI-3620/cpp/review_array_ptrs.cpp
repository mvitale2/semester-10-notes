// Description: review array of pointers

#include <iostream>
using namespace std;

int main() {
    string food[] = {"Monte cristo", "Eggs", "Waffles", "Pancakes"};

    cout << "RBH has the best " << food[0] << endl;

    // All of the items printed should be the same
    // start messing with pointers
    // This is because the array name itself is a pointer to the 0th element
    cout << &food[0] << endl;
    cout << food << endl;

    // create a pointer that points to the 0th element of the array
    // identical to cout << food << endl;
    string* ptr0 = food;
    cout << ptr0 << endl;

    // shenanigans
    string* ptr1 = &food[1];
    cout << ptr1 << endl; // Should be a different memory location than above
    cout << *ptr1 << endl;

    /*Summary:
    * -- The array name itself is a pointer
    * -- The contents of the array are standard variables
    * -- This is different than an array of pointers, which holds memory locations
    * -- When you create a pointer to an element in an array, you can use [] like you would with an array
    */
}