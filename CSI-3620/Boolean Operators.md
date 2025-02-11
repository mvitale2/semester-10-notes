C++ has all of the operators you would expect a programming language to have.

Additionally, it has ternary operators!

```embed-cpp
PATH: "vault://CSI-3620/cpp/bool_exp.cpp"
```
# Casting
Convert variables into different data types. 
```c++
int cat = 14;
double dog = (double) cat; // Traditional C-Style casting
double pig = double(cat); // C++ style casting
```
Casting can cause data loss. For example, if a float is cast as an int, C simply drops the decimal. 
```embed-cpp
PATH: "vault://CSI-3620/cpp/data_loss.cpp"
```
## Implicit Casting
```embed-cpp
PATH: "vault://CSI-3620/cpp/casting.cpp"
```
