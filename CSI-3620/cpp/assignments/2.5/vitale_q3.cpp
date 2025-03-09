/*
Filename: vitale_q3.cpp
Author: Michael Vitale
Description: Demonstrate how function overloading works, as well as inline functions.
*/

#include <stdio.h>
#include <string>
using namespace std;

// Declare functions
double sum(double a, double b);
inline double sum(double a, double b, double c);
double sum(double a[], int size);

int main() {
    // Declare variables
    double a = 1.0;
    double b = 2.0;
    double c = 3.0;
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    
    // Call functions
    printf("sum(a, b) = %f\n", sum(a, b));
    printf("sum(a, b, c) = %f\n", sum(a, b, c));
    printf("sum(arr, 5) = %f\n", sum(arr, 5));

    return 0;
}

// Define functions
double sum(double a, double b) {
    return a + b;
}

inline double sum(double a, double b, double c) {
    return a + b + c;
}

double sum(double a[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += a[i];
    }
    return total;
}