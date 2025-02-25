#include <string>
#include <map>
#include <iostream>
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
        void printPaperStatus() {
            printf("Printer ID: %d\nPaper: %d\n", id, paper);
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
        void setAllToner(int value) {
            tonerLevels.black = value;
            tonerLevels.yellow = value;
            tonerLevels.magenta = value;
            tonerLevels.cyan = value;
        }
        int getTonerStatus(string color) {
            if (color == "black") {
                return tonerLevels.black;
            } else if (color == "yellow") {
                return tonerLevels.yellow;
            } else if (color == "magenta") {
                return tonerLevels.magenta;
            } else if (color == "cyan") {
                return tonerLevels.cyan;
            } else {
                printf("%s does not exist!", color);
                return 0;
            }
        }
        void printTonerStatus() {
            printf("--Printer %d toner levels--\nBlack: %d\nYellow: %d\nMagenta: %d\nCyan: %d\n", id, tonerLevels.black, tonerLevels.yellow, tonerLevels.magenta, tonerLevels.cyan);
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