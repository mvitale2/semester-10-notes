#include <stdio.h>
using namespace std;

int main() {
    int temp = 0;

    printf("Initial integer value: %d\n", temp);
    printf("Preincrement value: %d\n", ++temp);
    printf("Postincrement value: %d\n", temp++);
    printf("Final integer value: %d\n", temp);
}