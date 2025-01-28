/* Filename: special_pointers.cpp
* Description: Provide an overview of how to use void and null pointers.
*/

#include <iostream>
using namespace std;

int main() {
	int* nullpointer = NULL;
	
	cout << "Value of null_pointer: " << nullpointer << "\n";
    // C will give a segmentation fault when attempting to print a dereferenced null pointer
    // cout << "Dereferenced value of null_pointer: " << *nullpointer << "\n";

    int value = 5;
    void* void_ptr = &value;
    cout << "Value of void_ptr: " << void_ptr << "\n";
    // C will not like this line because the void pointer has no bytes to dereference
    // cout << "dereferenced value of void_ptr: " << *void_ptr << "\n";
}