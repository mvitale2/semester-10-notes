#include <iostream>
using namespace std;

void selectionSort(int arr[], int size);

int main() {
	int silly[] = {4, 9, 2, 1, 4};

    selectionSort(silly, 5);
}

void selectionSort(int arr[], int size) {
    int lowestNumberIndex = 0;

    for (int i=0; i<size-1; i++) {
        lowestNumberIndex = i;

        for (int j=i+1; j<size; j++) {
            if (arr[j] < arr[lowestNumberIndex]) {
                lowestNumberIndex = j;
            }
        }

        if (lowestNumberIndex != i) {
            int temp = arr[i];
            arr[i] = arr[lowestNumberIndex];
            arr[lowestNumberIndex] = temp;
        }
    }
}