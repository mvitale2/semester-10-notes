#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int temp = 0;

    printf("Initial integer value: %d\n", temp);
    printf("Preincrement value: %d\n", ++temp);
    printf("Postincrement value: %d\n", temp++);
    printf("Final integer value: %d\n", temp);

    temp = 0;

    for (temp; temp < 6; temp++) {
        cout << temp << endl;
    }

    printf("\n");

    temp = 0;

    while(temp < 6) {
        cout << temp << endl;
        ++temp;
        cout << ((temp == 6) ? "Done!" : "Nope!") << endl;
    }
}