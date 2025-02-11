#include <iostream>
using namespace std;

// Declare function. Bool indicates that the function will return a boolean value. 
bool evenSum(int a[4]);

int main() {
    // Define the list to use in the functions
    int list[] = {4, 2, 7, 8, 5, 1};

    bool result = evenSum(list);

    string output = (result) ? ("The sum is even!") : ("The sum is odd!");

    cout << output << endl;
}

// Define function. It's industry standard to describe the parameters of the function and what it returns in a comment. 
/*
Parameters: integer array of numbers to add; integer size of array
Returns: true if sum of array is even; false if sum of array is odd
*/
bool evenSum(int a[4]) {
    int sum = 0;

    for (int i=0; i<4; i++) {
        cout << a[i] << endl;
        sum += a[i];
    }
    
    return (sum % 2) == 0;
}