// Prevent multiple expansions
#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course {
    protected:
        // Declare protected variables that can only be accessed by children
        string name;
        string instructor;
    public:
        // Constructor
        Course(const string& tempName, const string& tempInstructor);
        // Destructor
        ~Course();

        // Methods
        string getName();
        string getInstructor();
        virtual void getDescription();
};

#endif