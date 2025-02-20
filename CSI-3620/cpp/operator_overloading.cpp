/* Filename: operator_overloading.cpp
 * Description: Demonstrate how operator overloading works. 
 */

#include <iostream>
using namespace std;

struct Student {
    string fname;
    string lname;
    int gID;
    bool ITmajor;
    float GPA;
};

// Define operator overloading for the == operator. This doesn't replace == logic, but adds an additional way to compare objects.
// Including the ampersands forces the parameters to be passed by reference, which is more efficient than passing by value.
// The const keyword ensures that the parameters are not modified within the function.
bool operator==(const Student& x, const Student& y) {
    // only compare gID (only gID must be the same in order for a Student to be identical)
    // return x.gID == y.gID;

    // compare all fields of the Student struct (all fields must be the same in order for a Student to be identical)
    return x.fname == y.fname && 
           x.lname == y.lname && 
           x.gID == y.gID && 
           x.ITmajor == y.ITmajor && 
           x.GPA == y.GPA;

    // if (x.fname != y.fname) {
    //     cout << "First names are different." << endl;
    //     return false;
    // }
    // else if (x.lname != y.lname) {
    //     cout << "Last names are different." << endl;
    //     return false;
    // }
}

int main() {
    Student student1 = {"John", "Doe", 12345, true, 3.5};
    Student student2 = {"Bob", "Doe", 98765, true, 3.6};
    Student student3 = {"Jane", "Doe", 14597, true, 3.2};
    Student student4 = {"John", "Doe", 12345, true, 3.5};

    // non-identical students
    if (student1 == student2) {
        cout << "student1 and student2 are the same person." << endl;
    } else {
        cout << "student1 and student2 are not the same person." << endl;
    }

    // non-identical students
    if (student2 == student3) {
        cout << "student2 and student3 are the same person." << endl;
    } else {
        cout << "student2 and student3 are not the same person." << endl;
    }

    // identical students
    if (student1 == student4) {
        cout << "student1 and student4 are the same person." << endl;
    } else {
        cout << "student1 and student4 are not the same person." << endl;
    }
}