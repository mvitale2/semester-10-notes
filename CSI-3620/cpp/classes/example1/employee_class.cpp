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