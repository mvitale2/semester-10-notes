#include <stdio.h>
using namespace std;

void bubbleSort(int unordered[], int size);

int main() {
    int grades[] = {94, 96, 90, 87, 85, 83, 80, 78, 73, 60};

    bubbleSort(grades, 10);
}

void bubbleSort(int unordered[], int size) {
    int unsorted_until_index = size - 1;
    bool isSorted = false;
    int temp = unordered[0];

    while (isSorted == false) {
        isSorted = true;
        for (int i=0; i<unsorted_until_index; i++) {
            if (unordered[i] > unordered[i++]) {
                printf("%d", i);
                // then do a swap
                temp = unordered[i];
                unordered[i] = unordered[i+1];
                unordered[i+1] = temp;
                isSorted = false;
            }
        }
        unsorted_until_index -= 1;
    }
}