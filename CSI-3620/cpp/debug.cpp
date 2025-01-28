#include <iostream> 
using namespace std; 
int main() { 
	// Declares an array of video games 
	string video_games[] = {"Skyrim", "RDR2", "Mass Effect", "Witcher 3", "Age of Innocence"}; 
	// Create a pointer equal to the video_games array
	string* video_games_ptr = video_games; 
	// Create a pointer equal to the address of the first element of the video_games array 
	string* first_game_ptr = &video_games[0]; 
	// Prints out each variable, demonstrating that they all point to the same memory location 
	cout << "Printing video_games array: " << video_games << "\n"; 
	cout << "Printing video_games_ptr: " << video_games_ptr << "\n"; 
	cout << "Printing first_game_ptr: " << first_game_ptr << "\n\n"; 
	// Prints various values from array 
	cout << "Print RDR2 with video_games array: " << video_games[1] << "\n"; 
	cout << "Print Skyrim with video_games_ptr: " << *video_games_ptr << "\n"; 
	cout << "Print Age of Innocence with first_game_ptr: " << first_game_ptr[4] << "\n";
}