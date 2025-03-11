#include <iostream>
#include "person.h"
#include "student.h"
using namespace std;

int main() {
    Person Jimmy("Jimmy McGill", "12345");
    Student Kim("Kim Wexler", "8900", "Law", 2000);

    Jimmy.print();
    Kim.print();
}