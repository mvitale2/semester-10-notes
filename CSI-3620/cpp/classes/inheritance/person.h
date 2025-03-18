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
    public:
        string getName();
        // dynamic binding
        virtual void print();
        Person();
        ~Person();
        Person(const string& newName, const string& id);
        void setBank(const int& bankNum);
};

#endif