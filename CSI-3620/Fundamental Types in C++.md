- bool
- char
- short
- int
- long
- float
- double
- enum: set of discrete values
- void: explicitly indicates the absence of information

```embed-cpp
PATH: "vault://CSI-3620/cpp/sizeoftypes.cpp"
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
```embed-cpp
PATH: "vault://CSI-3620/cpp/enum_example.cpp"
TITLE: "Enumerations Example"
```
