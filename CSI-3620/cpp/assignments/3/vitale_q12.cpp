/* Filename: vitale_q12.cpp
 * Description: 
 */

#include <stdio.h>
using namespace std;

// declare the functions
inline double sum(double x, double y);
double sum(double x, double y, double z);
double sum(double w[], double size);

int main() {
    // variables for maths
	double a= 1, b=6, c=3;
    double d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // variables for storing the sum
    double num1 = sum(a, b, c);
    double num2 = sum(d, 5);

    // basic sum with two numbers is inline, so it doesn't need to be declared in a variable
    printf("The sum of %lf and %lf is %lf\n", a, b, sum(a, b));
    printf("The sum of %lf, %lf, and %lf is %lf\n", a, b, c, num1);
    printf("The sum of the array is %lf\n", num2);
    return 0;
}

// define the functions
inline double sum(double x, double y) {
    return x + y;
}

double sum(double x, double y, double z) {
    return x + y + z;
}

double sum(double w[], double size) {
    double sum = 0;
    // loop through the array and add each element to the sum
    for (int i = 0; i < size; i++) {
        sum += w[i];
    }
    return sum;
}