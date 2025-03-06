#include <string>
using namespace std;

class Employee {
    // Define functions and variables that can be accessed directly through the class object
    public:
        string fname;
        string lname;
        // Makes the constructor public
        Employee();
        // Define public detailed/standard constructor
        Employee(const string& tempFName, const string& tempLName, const float& rate);
        // Define destructure
        ~Employee();
        // Define how to make a copy
        Employee(const Employee& emp);

        Employee& operator=(const Employee& emp);

        // Functions that can be accessed through the class object
        float getSalary() {
            return this->salary;
        }
        void increaseBy(float rate) {
            this->salary += rate;
        }
        void setSalary(float salary) {
            this->salary = salary;
        }

    // Define functions and variables that can't be access through the class object
    private:
        float salary;
};