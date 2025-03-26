#include "course.h"

// Main constructor
Course::Course(const string& tempName, const string& tempInstructor) {
    name = tempName;
    instructor = tempInstructor;
}

// Destructor
Course::~Course() {
    printf("Deleting %s from Course.\n", name.c_str());
}

// Define methods
void Course::getDescription() {
    printf("%s is taught by Professor %s.\n", name.c_str(), instructor.c_str());
}

string Course::getName() {
    return name;
}

string Course::getInstructor() {
    return instructor;
}
