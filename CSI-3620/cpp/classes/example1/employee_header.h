#include <string>
using namespace std;

class Employee {
    // Define functions and variables that can be accessed directly through the class object
    public:
        string fname;
        string lname;
        // Makes the constructor public
        Employee();

        // Functions that can be accessed through the class object
        float getSalary() {
            return salary;
        }
        void increaseBy(float rate) {
            salary += rate;
        }
        void setSalary(float salary) {
            salary = salary;
        }

    // Define functions and variables that can't be access through the class object
    private:
        float salary;
};