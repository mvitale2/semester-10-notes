#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    // Define our constant array size
    const int NUM_VIDEO_GAMES = 5;
    // Using const instead of
    // int NUM_VIDEO_GAMES = 5
    // so that this variable can be used to declare the array size

    // Declare an empty array
    string video_games[NUM_VIDEO_GAMES];

    for (int i=0; i < NUM_VIDEO_GAMES; i++) {
        // Instruct the user
        printf("Enter the video game to save:\n");
        // Get user input and save it to the array
        cin >> video_games[i];
    }

    cout << endl;

    // Print each new element of the array
    for (int i=0; i < NUM_VIDEO_GAMES; i++) {
        cout << video_games[i] << endl;
    }
}