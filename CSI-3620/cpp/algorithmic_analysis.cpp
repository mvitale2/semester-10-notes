/* Filename: binary_ssearch.cpp
 * Description: Demonstrate how binary search works in c++
 */

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 50;
bool linearSearch(int list[], int size, int element);
bool binarySearch(int list[], int size, int element);

int main() {
    int grades[] = {62, 65, 74, 77, 80, 83, 88, 91, 93, 98, 
        100, 105, 110, 115, 120, 125, 130, 135, 
        140, 145, 150, 155, 160, 165, 170, 175, 
        180, 185, 190, 195, 200, 205, 210, 215, 
        220, 225, 230, 235, 240, 245, 250, 255, 
        260, 265, 270, 275, 280, 285, 290, 295, 300};
    int userInput = 0;

    cout << "Enter an item to search for: ";
    cin >> userInput;

    cout << "Binary search:\n";
    if (binarySearch(grades, ARRAY_SIZE, userInput)) {
        cout << userInput << " was found in the grades list!\n";
    } else {
        cout << userInput << " was not found in the grades list.\n";
    }
    cout << "Linear search:\n";
    if (linearSearch(grades, ARRAY_SIZE, userInput)) {
        cout << userInput << " was found in the grades list!\n";
    } else {
        cout << userInput << " was not found in the grades list.\n";
    }
}

bool linearSearch(int list[], int size, int element) {
    for (int i=0; i < size; i++) {
        cout << "Number of comparisons: " << i+1 << endl;
        if (element == list[i])
            return true;
    }
    return false;
}

bool binarySearch(int list[], int size, int element) {
    // save the indices of our search space
    int lower = 0; // first index
    int upper = size - 1; // last index

    // initialize mid as 0 temporarily
    int mid = 0;

    int comparisons = 1;

    cout << "Number of comparisons: " << comparisons << endl;
    // loop continues as long as the search space is valid
    // i.e. lower index is less than or equal to upper index
    while (lower <= upper) {
        // in case the loop goes hog wild, end it
        // if (comparisons > 99) {
        //     cout << "Too many comparisons, exiting search." << endl;
        //     break;
        // }

        cout << "Number of comparisons: " << ++comparisons << endl;
        // find the middle index
        mid = (upper + lower) / 2;

        // check if the element is at the middle index
        if (element == list[mid]) {
            return true;
        // check if the element is less than the middle index
        // if so, search the lower half of the list
        } else if (element < list[mid]) {
            upper = mid - 1;
        // check if the element is greater than the middle index
        // if so, search the upper half of the list
        } else {
            lower = mid + 1;
        }
    }

    return false;
}