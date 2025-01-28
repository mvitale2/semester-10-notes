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