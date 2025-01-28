// Description: Demonstrating how an array of pointers work

#include <iostream>
using namespace std;

int main() {
    // Create an array of string pointers with 4 elements (indices 0-3)
    string* movies[4];

    // Create 4 movie variables
    string movie1 = "Interstellar";
    string movie2 = "Inception";
    string movie3 = "The Dark Knight";
    string movie4 = "Dunkirk";

    // Assign the movie variables to the array of pointers
    movies[0] = &movie1;
    movies[1] = &movie2;
    movies[2] = &movie3;
    movies[3] = &movie4;

    // Print some stuff to the terminal
    cout << "First movie: " << *movies[0] << "\n";
    cout << "Second movie: " << *movies[1] << "\n";
    cout << "Third movie: " << *movies[2] << "\n";
    cout << "Fourth movie: " << *movies[3] << "\n";

    // Print the memory locations of the pointers
    cout << "Memory location of first movie: " << movies[0] << "\n";
    cout << "Memory location of second movie: " << movies[1] << "\n";
    cout << "Memory location of third movie: " << movies[2] << "\n";
    cout << "Memory location of fourth movie: " << movies[3] << "\n";
}