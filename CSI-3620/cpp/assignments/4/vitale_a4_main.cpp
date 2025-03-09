/* Filename: vitale_a4.h
 * Author: Michael Vitale
 * Description: Main file for CrewMember class.
 */

#include <iostream>
#include <string>
#include <./vitale_a4.h>
using namespace std;

int main() {
    // Create CrewMember objects
    CrewMember crew1("James", "Holden", "Captain", 35);
    CrewMember crew2("Naomi", "Nagata", "Engineer", 30);
    CrewMember crew3("Amos", "Burton", "Mechanic", 32);
    CrewMember crew4("Alex", "Kamal", "Pilot", 40);
    CrewMember crew5("Bobbie", "Draper", "Marine", 28);
    CrewMember crew6("Clarissa", "Mao", "Technician", 25);
    CrewMember crew7(crew6);
    CrewMember crew8;

    crew8.setFname("Fred");
    crew8.setLname("Johnson");
    crew8.setRole("OPA Leader");
    crew8.setAge(45);

    // Print CrewMember details
}