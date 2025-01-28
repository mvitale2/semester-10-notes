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
    string* first_video_game = &video_games[1];
    // Print out the memory locations of the pointer and the 0th element
    cout << "Memory location of the pointer: " << video_games << "\n";
    cout << "Print video games pointer: " << video_games_ptr << "\n";
    cout << "Printing first_video_game pointer: " << first_video_game << "\n";

    // Print zelda to the terminal using each of the pointers
    cout << "Printing video_games[0] using video_games: " << video_games[0] << "\n";
    cout << "Printing video_games[0] using video_games_ptr: " << video_games_ptr[0] << "\n";
    cout << "Printing video_games[0] using first_video_game: " << first_video_game[0] << "\n";
}