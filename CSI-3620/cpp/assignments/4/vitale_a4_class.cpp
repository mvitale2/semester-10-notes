/* Filename: vitale_a4_class.cpp
 * Author: Michael Vitale
 * Description: Class file for CrewMember class.
*/

#include "./vitale_a4.h"
#include <string>
#include <iostream>
using namespace std;

CrewMember::CrewMember() {
   age = 30;
   fname = "James";
   lname = "Holden";
   role = "Captain";
}

CrewMember::CrewMember(const string& tempFname, const string& tempLname, const string& tempRole,const int& tempAge) {
   fname = tempFname;
   lname = tempLname;
   role = tempRole;
   age = tempAge;
}

CrewMember::CrewMember(const CrewMember& crewMember) {
   fname = crewMember.fname;
   lname = crewMember.lname;
   role = crewMember.role;
   age = crewMember.age;
}

CrewMember::~CrewMember() {
   cout << fname << " " << lname << " has been deleted" << endl;
}