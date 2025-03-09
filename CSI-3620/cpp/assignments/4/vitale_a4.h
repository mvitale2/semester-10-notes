/* Filename: vitale_a4.h
 * Author: Michael Vitale
 * Description: Header file for CrewMember class.
 */

 #ifndef VITALE_A4_H
 #define VITALE_A4_H

#include <string>
using std::string;

class CrewMember {
    public:
        // Constructors
        CrewMember();
        CrewMember(const string& tempFname, const string& tempLname, const string& tempRole, const int& tempAge);
        CrewMember(const CrewMember& crewMember);
        ~CrewMember();

        // Getter methods
        

        // Setter methods
        void setFname(const string& tempFname) {
            this->fname = tempFname;
        }
        void setLname(const string& tempLname) {
            this->lname = tempLname;
        }
        void setAge(const int& tempAge) {
            this->age = tempAge;
        }

        // Modifier methods
        void incrementAge() {
            this->age++;
        }
        void changeRole(const string& tempRole) {
            this->role = tempRole;
        }
    private:
        // Atttributes
        string fname;
        string lname;
        string role;
        int age;
};

#endif // VITALE_A4_H