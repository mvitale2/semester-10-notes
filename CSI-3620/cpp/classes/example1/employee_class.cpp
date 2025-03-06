/* Filename: employee_class.cpp
 * Description: Define the Employee class and its functions.
 */

#include "./employee_header.h"
#include <iostream>
using namespace std;

// Define the constructor
Employee::Employee() {
    // Could use null, but it is safer to define the default values
    salary = 0;
    fname = "";
    lname = "";
}

Employee::Employee(const string& tempFName, const string& tempLName, const float& rate) {
    fname = tempFName;
    lname = tempLName;
    salary = rate;
}

// Define copy constructor
Employee::Employee(const Employee& emp) {
    // Left side of = is THIS class object, right side is the received class object
    fname = emp.fname;
    lname = emp.lname;
    salary = emp.salary;
}

Employee& Employee::operator=(const Employee& emp) {
    // Avoid self-assignment
    if (this != &emp) {
        salary = emp.salary;
        fname = emp.fname;
        lname = emp.lname;
    }

    return *this;
}

Employee::~Employee() {
    // this is always called when using stack memory
    // only called when the object is deleted in heap memory
    cout << fname << " " << lname << " has been deleted" << endl;
}