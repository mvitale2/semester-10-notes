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