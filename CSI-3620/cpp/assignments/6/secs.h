// Prevent multiple expansions
#ifndef SECS_H
#define SECS_H

#include "course.h"
#include <string>
using namespace std;

class SECS : public Course {
    private:
        // Declare private variable, can only be modified inside this class
        string format;
    public:
        // Declare constructor & destructor
        SECS(const string& tempName, const string& tempInstructor, const string& tempFormat);
        ~SECS();

        // Declare methods
        string getFormat();
        void setFormat(const string& tempFormat);
        virtual void getDescription();
};

#endif