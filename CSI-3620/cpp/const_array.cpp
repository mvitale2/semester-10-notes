// #include <iostream>
#include <stdio.h>
#include <string>
using std::string;

int main () {
    // Define our constant array size
    const int NUM_VIDEO_GAMES = 5;

    // Declare an empty array
    string video_games[NUM_VIDEO_GAMES];
    char charArray[50];

    for (int i=0; i<NUM_VIDEO_GAMES; i++) {
        printf("Enter the game to save: ");
        // The 49 specifies the maximum number of characters. The last character has to be \0.
        scanf("%49s", charArray);

        video_games[i] = string(charArray);
    }

    for (int i=0; i<NUM_VIDEO_GAMES; i++) {
        printf("%s\n", video_games[i].c_str());
    }
}