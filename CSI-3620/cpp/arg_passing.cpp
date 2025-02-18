#include <iostream>
using namespace std;

// Declare function. Bool indicates that the function will return a boolean value. 
bool evenSum(int a[4]);

int main() {
    // Define the list to use in the functions
    int list[] = {4, 2, 7, 8, 5, 1};
    int size = 6;

    printf("List initial size: %d\n", size);
    printf("List initial values: ");
    for (int i = 0; i<size; i++) {
        printf("list[%d] = %d\n", i, list[i]);
    }
    bool result = evenSum(list, 6);
}

// Define function. It's industry standard to describe the parameters of the function and what it returns in a comment. 
/*
Parameters: integer array of numbers to add; integer size of array
Returns: true if sum of array is even; false if sum of array is odd
*/
bool evenSum(int a[], int n) {
    a[0] = 10;
    n = 8;
    return true;
}