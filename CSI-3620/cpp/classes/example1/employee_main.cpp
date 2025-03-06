/* Filename: example1.cpp
 * Description: Demonstrate how to define a class and call class functions.
 */

#include <iostream>
#include <stdio.h>
#include "./employee_header.h"
using namespace std;

int main() {
    // Create an employee object
    Employee emp1;
    // Create an employee object using a detailed/standard constructor
    Employee emp2("Wombo", "Combo", 20.0);
    // Create employee with heap memory
    // Three rules for heap: 1. use pointers, 2. use new keyword, 3. delete when done
    Employee* emp3 = new Employee("Jamie", "Jones", 319234.5);
    Employee emp6(emp2);
    Employee emp7 = emp2;

    // Set employee 1 details
    emp1.fname = "Michael";
    emp1.lname = "Scott";
    emp1.setSalary(9999);
    emp1.increaseBy(0.5);

    // Print employee 1 details
    cout << "Employee name: " << emp1.fname << " " << emp1.lname << endl;
    cout << "Employee salary rate per hour: " << emp1.getSalary() << endl;

    // Print employee 2 details
    cout << "Employee name: " << emp2.fname << " " << emp2.lname << endl;
    cout << "Employee salary rate per hour: " << emp2.getSalary() << endl;

    // Print employee 3 details
    cout << "Employee name: " << emp3->fname << " " << emp3->lname << endl;
    cout << "Employee salary rate per hour: " << emp3->getSalary() << endl;

    // Print employee 6 details (should repeat employee 2 details)
    cout << "Employee name: " << emp6.fname << " " << emp6.lname << endl;
    cout << "Employee salary: " << emp6.getSalary() << endl;

    // Print employee 7 details (should repeat employee 2 details)
    cout << "Employee name: " << emp7.fname << " " << emp7.lname << endl;
    cout << "Employee salary: " << emp7.getSalary() << endl;
    
    delete emp3;
}