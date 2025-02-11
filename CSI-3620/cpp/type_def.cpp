#include <iostream>
using namespace std;

int main () {
    string video_games[] = {"Silly", "Billy"};

    typedef int Rating;

    Rating rating0 = 9;
    Rating rating1 = 10;

    cout << "The rating for " << video_games[0] << " is " << rating0 << "/10" << endl;
    cout << "The rating for " << video_games[1] << " is " << rating1 << "/10" << endl;
}