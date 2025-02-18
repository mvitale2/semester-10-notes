/* Filename: function_overloading.cpp
 * Description: Demonstrate usefulness of function overloading
*/

#include <iostream>
using namespace std;

// declare our averaging function
// Function overloading defining multiple functions with the same name, but different parameters
double average(double arr[], int size);
double average(int num1, int num2);

int main() {
	double grades[] = {90.5, 85.3, 72.1, 83.6};
    // Call the function
    double avg1 = average(grades, 4);
    cout << "Average of the array: " << avg1 << endl;

    double avg2 = average(80, 90);
    cout << "Average of the two ints: " << avg2 << endl;
}

double average(int arr[], int size) {
    double sum = 0;

    for (int i = 0; i<size; i++) {
        sum += arr[i];
    }

    // Casting size as a double
    return (sum / (double) size);
}

double average(int num1, int num2) {
    return ((num1 + num2) / 2.0);
}