/*
Filename: linear_search.cpp
Description: Demonstrate how linear search works with arrays
*/

#include <stdio.h>
using namespace std;

int main () {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int search;
    while (true) {
        printf("Enter a number 1-5\n> ");
        int input;
        scanf("%d", &input);
        if (input > 5 || input < 1)
            continue;
        else
            search = input-1;
            break;
    }

    for (int i = 0; i < size; i++) {
        if (i == arr[search]) {
            printf("The array found %d", i);
            break;
        };
        printf("Num comparisons: %d\n", i+1);
    };

    return 0;
}
