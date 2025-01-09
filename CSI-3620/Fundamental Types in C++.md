- bool
- char
- short
- int
- long
- float
- double
- enum: set of discrete values
- void: explicitly indicates the absence of information

```c++
// Description: Find how much space each data type takes up in memory.

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    bool a;
    char b;
    short c;
    int d;
    long e;
    float f;
    double g;
    
    // Print the size
    cout << "bool: " << sizeof(a) << "\n";
    cout << "char: " << sizeof(b) << "\n";
    cout << "short: " << sizeof(c) << "\n";
    cout << "int: " << sizeof(d) << "\n";
    cout << "long: " << sizeof(e) << "\n";
    cout << "float: " << sizeof(f) << "\n";
    cout << "double: " << sizeof(g) << "\n";
}
```

# Enumerations
A user-defined type that can hold any set of discrete values. 

```c++
enum Day { SUN, MON, TUE, WED, THU, FRI, SAT };
enum Mood { HAPPY = 3, SAD = 1, ANXIOUS = 4, SLEEPY = 2 };

Day today = THU; // today may be any of MON ... SAT
Mood myMood = SLEEPY; // myMood may be HAPPY ... SLEEPY
```
## Example
```c++
// Description: Uses enumerated types.

#include <iostream>
using namespace std;

int main() {
        // Declare enums. Each value in the enum is in caps in order to declare it as a constant.
        enum LOTR { FELLOWSHIP, TOWERS, KING };
        enum DDCLASSES { RANGER, BARBARIAN, WIZARD, SORCERER, CLERIC, FIGHTER, PALADIN, MONK };

        // Create a variable that is enum data type 1
        LOTR movie = TOWERS;
        cout << "Silly movie: " << movie << ".\n";
        DDCLASSES character = WIZARD;
        cout << "My favorite class: " << character << ".\n";
}
```