// Import classes
#include "course.h"
#include "secs.h"

#include <string>
using namespace std;

int main() {
    // Declare formats
    string formats[3] = {"hy-flex", "in-person", "virtual"};
    
    // Declare Course objects
    Course hc1000("HC-1000", "Susan Beckwith");
    Course* sta2221 = new Course("STA-2221", "John Smith");
    
    // Declare SECS objects
    SECS csi2999("CSI-2999", "Hany Othman", formats[2]);
    SECS* csi3620 = new SECS("CSI-3620", "Kate Bowers", formats[0]);

    // Get descriptions
    hc1000.getDescription();
    sta2221->getDescription();
    csi2999.getDescription();
    csi3620->getDescription();

    // Set formats for SECS objects
    csi2999.setFormat(formats[0]);
    csi3620->setFormat(formats[1]);

    // Delete heap memory objects
    delete sta2221;
    delete csi3620;

    return 0;
}