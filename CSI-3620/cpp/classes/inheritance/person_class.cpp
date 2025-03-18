#include "person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() {
    name = "";
    idNum = "";
    bankAcct = 0;
}

Person::Person(const string& newName, const string& id) {
    name = newName;
    idNum = id;
    bankAcct = 0;
}

void Person::print() {
    cout << "Name: " << name << endl;
    cout << "---" << endl;
    cout << "IDNum: " << idNum << endl;
    cout << "Bank Account: " << bankAcct << endl;
}

string Person::getName() {
    return name;
}

void Person::setBank(const int& bankNum) {
    bankAcct = bankNum;
}

Person::~Person() {
    cout << "The person " << name << " has been deleted." << endl;
}