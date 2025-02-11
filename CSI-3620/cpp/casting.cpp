#include <iostream>
using namespace std;

int main() {
    int i = 3;
    double d = 4.8;

    double d3 = double(i) / d;

    // Exepcted output: 0.625
    // Without implicit casting, other compilers might output 0
    cout << d3 << endl;
}