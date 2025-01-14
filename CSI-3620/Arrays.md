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
