Arrays must have a type declared based on what will be stored within them:
```c++
string bumbo = {"hi", "bye"};
```
If you want to declare an empty array, the size of the array must be specified.
```c++
int gumbo[3];
```
You can then modify elements of the array as normal, as long as the specified index is within bounds. 
```c++
gumbo[0] = 4;
```
# Example
```c++
// Description: example of how arrays work in C++

#include <iostream>
using namespace std;

int main() {
    // Declare a non-empty array
    string video_games[] = {"Helldivers II", "Half-Life", "Portal", "Doom", "Quake"};
    // Declare an empty array
    int ratings[sizeof(video_games)];
    // Change a value in the array
    video_games[3] = "Doom (2016)";
    // Get user input for ratings
    cout << "Provide a rating for: " << video_games[0] << "\n";
    cin >> ratings[0];
    cout << "Provide a rating for: " << video_games[1] << "\n";
    cin >> ratings[1];
    cout << "Provide a rating for: " << video_games[2] << "\n";
    cin >> ratings[2];
    cout << "Provide a rating for: " << video_games[3] << "\n";
    cin >> ratings[3];
    cout << "Provide a rating for: " << video_games[4] << "\n";
    cin >> ratings[4];
    // Trigger an out of bounds error
    cout << "Provide a rating for: " << video_games[5] << "\n";
}
```
# Nested Arrays
You can use the elements of arrays to refer to the elements of separate arrays.
## Example
```c++
// Description: Example of how nested arrays work.

#include <iostream>
using namespace std;

int main() {
    // Declare an empty array of 5 doubles
    double a[5];
    // Declare an empty array 10 integers
    int b[10];
    // Defines one element in the double array
    a[0] = 1.0;
    // Defines one element in the integer array
    b[0] = 1;
    // Nested reference example:
    cout << a[b[0]] << "\n";
    // Expected output: 1.0
    // Note: index positions cannot be floats, only integers
}
```
## Two-Dimensional Arrays
It's possible to create arrays with multiple "rows" and "columns."
### Example
```c++
// Description: Example of a 2-D array in C++.

#include <iostream>
using namespace std;

int main() {
    // Declare an empty array
    string video_games[2][5];
    // Add games
    video_games[0][0] = "Super Mario Bros.";
    video_games[0][1] = "The Legend of Zelda";
    video_games[0][2] = "Minecraft";
    video_games[0][3] = "Fortnite";
    video_games[0][4] = "Among Us";
    // Add ratings
    video_games[1][0] = "9.1";
    video_games[1][1] = "9.0";
    video_games[1][2] = "9.2";
    video_games[1][3] = "8.8";
    video_games[1][4] = "8.7";
    // Print the array
    cout << video_games[0][0] << " has a rating of " << video_games[1][0] << "\n";
}
```
# Array of Pointers
## Example 1
```c++
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
```

Three ways to access the first element of an array of pointers:
1. The array name is a pointer to the 0th element
2. Can create a pointer to point to the array (as a whole)
3. Can create a pointer to point to the 0th element in the array

Pointers in arrays don't need to be dereferenced. 
## Example 2
```c++
// Description: review array of pointers

#include <iostream>
using namespace std;

int main() {
    string food[] = {"Monte cristo", "Eggs", "Waffles", "Pancakes"};

    cout << "RBH has the best " << food[0] << endl;

    // All of the items printed should be the same
    // start messing with pointers
    // This is because the array name itself is a pointer to the 0th element
    cout << &food[0] << endl;
    cout << food << endl;

    // create a pointer that points to the 0th element of the array
    // identical to cout << food << endl;
    string* ptr0 = food;
    cout << ptr0 << endl;

    // shenanigans
    string* ptr1 = &food[1];
    cout << ptr1 << endl; // Should be a different memory location than above
    cout << *ptr1 << endl;

    /*Summary:
    * -- The array name itself is a pointer
    * -- The contents of the array are standard variables
    * -- This is different than an array of pointers, which holds memory locations
    * -- When you create a pointer to an element in an array, you can use [] like you would with an array
    */
}
```

## Example 3
```c++
// Description: Demonstrate that the array name is a pointer to the 0th element

#include <iostream>
using namespace std;

int main() {
    // Declare ana rray of video games
    string video_games[] = {"The Legend of Zelda", "Super Mario Bros.", "Metroid"};
    // Create a pointer equal to the video_games array
    // Needs to be a string type pointer, because it's pointing to a string array
    string* video_games_ptr = video_games;
    // Triple check that the pointer is pointing to the 0th element
    string* first_video_game = &video_games[0];
    // Print out the memory locations of the pointer and the 0th element
    cout << "Memory location of the pointer: " << video_games << "\n";
    cout << "Print video games pointer: " << video_games_ptr << "\n";
    cout << "Printing first_video_game pointer: " << first_video_game << "\n";
    
    // Print zelda to the terminal using each of the pointers
    cout << "Printing video_games[0] using video_games: " << video_games[0] << "\n";
    cout << "Printing video_games[0] using video_games_ptr: " << video_games_ptr[0] << "\n";
    cout << "Printing video_games[0] using first_video_game: " << first_video_game[0] << "\n";
}
```
# Strings
Strings in C++ are treated as fixed-length arrays that end with the null character. Due to this, not many string operations are available by default. 
## Example 1
```c++
// Description: Basic string operations

#include <iostream>
using namespace std;

int main() {
    // Create a normal string variable
    string str = "Hello, World!";
    cout << str << endl;
    cout << "First letter of the string is: " << str[0] << endl;
    // Using sizeof will return whitespace since the actual last character is the null value indicating the end of the string
    // cout << "Last letter of the string is: " << str[sizeof(str) - 1] << endl;
    // Using length() will return the actual last character of the string
    cout << "Last letter of the string is: " << str[str.length() - 1] << endl;

    // Add some pointers
    // Create a pointer to the string
    string* str_pointer = &str;

    // Print the string using the pointer by dereferencing it
    cout << "String using pointer: " << *str_pointer << endl;
    // Print the memory location of the string
    cout << "Memory location of the string: " << str_pointer << endl;
}
```
## Example 2
```c++
// Description: String operations with stl

#include <iostream>
using namespace std;

#include <string>
using std::string;

int main() {
    // Create a normal string
    string str = "Hello, World!";

    // Create other strings that add to the original string
    string str2 = "foo";
    string str3 = "bar";
    string death = "bye world!";

    // Concatenate strings, the string library is required to do this
    string str4 = str2 + str3;
    string str5 = str + " " + death;

    // Compare strings based on ASCII table
    if (str > str2)
        cout << "str is greater than str2" << endl;
    else
        cout << "str is less than str2" << endl;

    // Print the strings
    cout << str << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;
}
```