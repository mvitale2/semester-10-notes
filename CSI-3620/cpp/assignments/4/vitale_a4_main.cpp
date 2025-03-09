/* Filename: vitale_a4.h
 * Author: Michael Vitale
 * Description: Main file for CrewMember class.
 */

#include <iostream>
#include <string>
#include "./vitale_a4.h"
using namespace std;

int main() {
    // Create CrewMember objects
    CrewMember crew1;
    CrewMember* crew2 = new CrewMember("Amos", "Burton", "Mechanic", 32);
    CrewMember crew3(crew1);

    // Make some changes to crew3
    crew3.changeRole("Prisoner");
    // Incremement age of James Holden (who is the James Holden 30 years later)
    for (int i = 0; i < 30; i++) {
        crew3.incrementAge();
    }

    // Print results
    cout << "Crew Member 1: " << crew1.getFname() << ", Age: " << crew1.getAge() << ", Role: " << crew1.getRole() << endl;
    cout << "Crew Member 2: " << crew2->getFname() << " " << crew2->getLname() << ", Age: " << crew2->getAge() << ", Role: " << crew2->getRole() << endl;
    cout << "Crew Member 3: " << crew3.getFname() << " " << crew3.getLname() << ", Age: " << crew3.getAge() << ", Role: " << crew3.getRole() << endl;

    delete crew2;
}