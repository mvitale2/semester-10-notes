#include <iostream>
using namespace std;

/*
Homework:
1. Change evenSum() to only accept array, and define a constant integer for array size.
2. Replace lines 19-24 with the ternary operator. 
*/

// Declare function
bool evenSum(int a[], int n);

int main() {
    // Define the list to use in the functions
    int list[] = {4, 2, 7, 8, 5, 1};

    bool result = evenSum(list, 6);

    if (result)
        cout << "The sum is even!" << endl;
    else
        cout << "The sum is odd!" << endl;
}

// Define function. It's industry standard to describe the parameters of the function and what it returns in a comment. 
/*
Parameters: integer array of numbers to add; integer size of array
Returns: true if sum of array is even; false if sum of array is odd
*/
bool evenSum(int a[], int n) {
    int sum = 0;

    for (int i=0; i<n; i++)
        sum += a[i];
    
    return (sum % 2) == 0;
}