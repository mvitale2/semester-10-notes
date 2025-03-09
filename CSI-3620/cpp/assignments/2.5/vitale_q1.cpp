/*
Filename: vitale_q1.cpp
Author: Michael Vitale
Description: Demonstrate how structs work in both heap and stack memory.
*/

#include <stdio.h>
#include <string>
using namespace std;

int main() {
    // Declare struct
    struct Spaceship {
        int numThrusters;
        string transponderCode;
        float hullIntegrity;
    };

    // Stack memory
    Spaceship struct_stack;
    struct_stack.numThrusters = 4;
    struct_stack.transponderCode = "Millenium Falcon";
    struct_stack.hullIntegrity = 0.67;

    // Print stack memory stuff
    printf("Ship name: %s\n---\nNumber of thrusters: %d\nHull integrity: %.2f\n\n", struct_stack.transponderCode.c_str(), struct_stack.numThrusters, struct_stack.hullIntegrity);

    // Heap memory
    Spaceship* struct_heap = new Spaceship;
    struct_heap->numThrusters = 10;
    struct_heap->transponderCode = "Rocinante";
    struct_heap->hullIntegrity = 0.98;

    // Print heap memory stuff
    printf("Ship name: %s\n---\nNumber of thrusters: %d\nHull integrity: %.2f\n\n", struct_heap->transponderCode.c_str(), struct_heap->numThrusters, struct_heap->hullIntegrity);

    // To properly use heap memory, need to free up space when done
    delete struct_heap;
    return 0;
}

 