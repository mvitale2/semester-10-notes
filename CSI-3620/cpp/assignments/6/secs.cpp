#include "secs.h"
#include <stdio.h>
using namespace std;

// Main constructor
SECS::SECS(const string& tempName, const string& tempInstructor, const string& tempFormat) : Course(tempName, tempInstructor) {
    format = tempFormat;
}

// Define methods
string SECS::getFormat() {
    return format;
}

void SECS::setFormat(const string& tempFormat) {
    format = tempFormat;
}

void SECS::getDescription() {
    // Call the parent class's getDescription method
    Course::getDescription();
    // Add additional functionality
    printf("%s is offered in %s format.\n", name.c_str(), format.c_str());
}

// Destructor
SECS::~SECS() {
    printf("Deleting %s from SECS.\n", name.c_str());
}