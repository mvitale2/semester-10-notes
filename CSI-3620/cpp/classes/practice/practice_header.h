#include <string>
using namespace std;

class Printer {
    public:
        int id;
        Printer();

        void setPaper(int value) {
            paper = value;
        }
        int getPaperStatus() {
            return paper;
        }
        void setToner(int value, string color) {
            if (color == "black") {
                tonerLevels.black = value;
            } else if (color == "yellow") {
                tonerLevels.yellow = value;
            } else if (color == "magenta") {
                tonerLevels.magenta = value;
            } else if (color == "cyan") {
                tonerLevels.cyan = value;
            } else {
                printf("%s does not exist!", color);
            }
        }
        void getTonerStatus() {
            printf("Black: %s\nYellow: %s\nMagenta: %s\nCyan: %s\n", tonerLevels.black, tonerLevels.yellow, tonerLevels.magenta, tonerLevels.cyan);
        }
    private:
        int paper;
        string colors[4] = {"black", "yellow", "magenta", "cyan"};
        struct toner {
            int black;
            int yellow;
            int magenta;
            int cyan;
        } tonerLevels;
};