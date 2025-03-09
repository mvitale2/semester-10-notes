/* Filename: vitale_a4_class.cpp
 * Author: Michael Vitale
 * Description: Class file for CrewMember class.
*/

#include "./vitale_a4.h"
#include <string>
#include <iostream>
using namespace std;

CrewMember::CrewMember() {
   setAge(0);
   setFname("");
   setLname("");
   changeRole("");
}

CrewMember::CrewMember(const string& tempFname, const string& tempLname, const string& tempRole,const int& tempAge) {
   setFname(tempFname);
   setLname(tempLname);
   changeRole(tempRole);
   setAge(tempAge);
}

CrewMember::CrewMember(const CrewMember& crewMember) {
   setFname(crewMember.fname);
   setLname(crewMember.lname);
   changeRole(crewMember.role);
   setAge(crewMember.age);
}

CrewMember::~CrewMember() {
   cout << fname << " " << lname << " has been deleted" << endl;
}