#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
    private:
        string name;
        string idNum;
    protected:
        int bankAcct;
        void setBank(const int& bankNum);
    public:
        string getName();
        void print();
        Person();
        Person(const string& newName, const string& id);
};

#endif