#include "student.h"
#include <iostream>
using namespace std;

Student::Student(const string& tempName, const string& tempId, const string& tempMajor, const int& tempYear) : Person(tempName, tempId) {
    major = tempMajor;
    gradYear = tempYear;
}

void Student::print() {
    Person::print();
    cout << "Major: " << major << endl;
    cout << "Graduation Year: " << gradYear << endl;
}

void Student::changeMajor(const string& newMajor) {
    major = newMajor;
}