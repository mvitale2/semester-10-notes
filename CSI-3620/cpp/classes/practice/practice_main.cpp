#include <iostream>
#include "./practice_header.h"
using namespace std;

int main () {
    Printer printer1;
    Printer printer2;

    printer1.id = 0;
    printer2.id = 1;
    printer2.setPaper(400);

    printer1.printPaperStatus();
    printer2.printPaperStatus();

    printer1.printTonerStatus();
    printer2.printTonerStatus();

    int printer1black = printer1.getTonerStatus("black");
    cout << printer1black << endl;

    int green = printer2.getTonerStatus("green");
    cout << green << endl;

    return 0;
}