#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "person.h"
using namespace std;

class Student : public Person {
    private:
        string major;
        int gradYear;
    public:
        Student(const string& tempName, const string& tempId, const string& tempMajor, const int& tempYear);
        void print();
        void changeMajor(const string& newMajor);
};

#endif