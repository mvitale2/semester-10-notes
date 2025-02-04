// Description: Learn how to use scanf with integers

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    // Define 2 normal integers
    int integer1, integer2;

    // Define 2 unsigned integers
    unsigned uint1, uint2;

    printf("Enter the first integer (+/-)");
    scanf("%d\n> ", &integer1);

    printf("Enter the first + integer: ");
    scanf("%d\n> ", &uint1);

    cout << integer1 << endl;
    cout << uint1 << endl;
}