// Template for working with any C++ file

/* Filename:
 * Description:
 */

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size);

int main() {
    int silly[] = {9, 4, 3, 1, 2, 5, 6, 8, 7, 10};
	// print initial list
    cout << "Initial list:" << endl;
    for (int i=0;i<10;i++) {
        cout << silly[i] << endl;
    }

    insertionSort(silly, 10);

    // print new list
    cout << "New list:" << endl;
    for (int i=0;i<10;i++) {
        cout << silly[i] << endl;
    }
}

void insertionSort(int arr[], int size) {
    int tempVal, position;

    for (int i=1; i<size; i++) {
        // unsorted value to insert
        tempVal = arr[i];
        // where sorted portion ends
        position = i-1;

        while (position >= 0) {
            if (arr[position] > tempVal) {
                arr[position + 1] = arr[position];
                position--;
            }
            else
                break;
        }

        // Complete the swap
        arr[position + 1] = tempVal;
    }
}