// Description: example of how arrays work in C++

#include <iostream>
using namespace std;

int main() {
    // Declare a non-empty array
    string video_games[] = {"Helldivers II", "Half-Life", "Portal", "Doom", "Quake"};
    int al = sizeof(video_games)/sizeof(video_games[0]);
    // Declare an empty array
    int ratings[4];
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
    // cout << "Provide a rating for: " << video_games[5] << "\n";
    
    // Print the array (prints the memory location of the array, which is the location of the 0th element)
    // not so great way to do it
    // cout << ratings[0] << ratings[1] << ratings[2] << ratings[3] << ratings[4] << endl;
    // the way to do it that makes me :)
    for (int i = 0; i < al; i = i + 1) {
        cout << "You rated " << video_games[i] << " as " << ratings[i] << endl;
    }
}