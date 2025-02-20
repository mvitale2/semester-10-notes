/* Filename: example1.cpp
 * Description: Demonstrate how to define a class and call class functions.
 */

#include <iostream>
#include "./employee_header.h"
using namespace std;

int main() {
    // Create an employee object
    Employee emp1;

    // Set employee details
    emp1.fname = "Michael";
    emp1.lname = "Scott";
    emp1.setSalary(1000000);
    // emp1.increaseBy(0.5);

    // Print employee details
    cout << "Employee name:" << emp1.fname << " " << emp1.lname << endl;

    cout << "Employee salary rate per hour:" << emp1.getSalary() << endl;
}