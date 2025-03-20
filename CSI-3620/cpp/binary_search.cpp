/* Filename: binary_ssearch.cpp
 * Description: Demonstrate how binary search works in c++
 */

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;
bool linearSearch(int list[], int size, int element);
bool binarySearch(int list[], int size, int element);

int main() {
	int grades[] = {62, 65, 74, 77, 80, 83, 88, 91, 93, 98};
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
    int lower = 0;
    int upper = size - 1;

    // initialize mid as 0 temporarily
    int mid = 0;

    int comparisons = 1;

    cout << "Number of comparisons: " << comparisons << endl;
    while (lower <= upper) {
        cout << "Number of comparisons: " << ++comparisons << endl;
        mid = (upper + lower) / 2;

        if (element == list[mid]) {
            return true;
        } else if (element < list[mid]) {
            upper = mid - 1;
        } else {
            lower = mid + 1;
        }
    }

    return false;
}