/* Filename: a2_q12.cpp
* Author: Michael Vitale
* Description: String variable and pointer shenanigans
*/

#include <iostream>
using namespace std;

int main() {
    // Declare string variable & pointer
    string book = "The Crystal Shard";
    string* book_ptr;
    book_ptr = &book;
    
    // Print the variables
    cout << book << endl;
    cout << book_ptr << endl;
    cout << "Dereferenced pointer: " << *book_ptr << endl;

    // Modify the book string
    book = "House of Leaves";

    // Reprint the variables
    cout << book << endl;
    cout << book_ptr << endl;
    cout << "Dereferenced pointer: " << *book_ptr << endl;
}