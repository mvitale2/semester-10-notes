#include <iostream>
#include "person.h"
#include "student.h"
using namespace std;

int main() {
    Person Jimmy("Jimmy McGill", "12345");
    Person* Chuck = new Person("Chuck McGill", "44444");
    Student Kim("Kim Wexler", "8900", "Law", 2000);

    Chuck->setBank(5555);

    Jimmy.print();
    Chuck->print();
    Kim.print();

    Kim.changeMajor("Political Science");
    Kim.print();

    // polymorphism

    Person* people[5];

    people[0] = new Person("Mike Ermintrout", "1111");
    people[1] = new Student("Bucky Barnes", "666", "Killing", 1954);

    people[0]->print();
    people[1]->print();

    cout << endl;
    delete Chuck;
    delete people[0];
    delete people[1];
}