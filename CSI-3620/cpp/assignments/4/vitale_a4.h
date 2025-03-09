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
        string getFname() const {
            return this->fname;
        }
        string getLname() const {
            return this->lname;
        }
        string getRole() const {
            return this->role;
        }
        int getAge() const {
            return this->age;
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