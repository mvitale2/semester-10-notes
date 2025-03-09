/* Filename: vitale_a4_class.cpp
 * Author: Michael Vitale
 * Description: Class file for CrewMember class.
*/

#include <./vitale_a4.h>
#include <string>
#include <iostream>
using namespace std;

CrewMember::CrewMember() {
   age = 0;
   fname = "";
   lname = "";
   role = "";
}

CrewMember::CrewMember(const string& tempFname, const string& tempLname, const string& tempRole,const int& tempAge) {
   fname = tempFname;
   lname = tempLname;
   age = tempAge;
   role = tempRole;
}

CrewMember::CrewMember(const CrewMember& crewMember) {
   fname = crewMember.fname;
   lname = crewMember.lname;
   age = crewMember.age;
   role = crewMember.role;
}

CrewMember::~CrewMember() {
   cout << fname << " " << lname << " has been deleted" << endl;
}