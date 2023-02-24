#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "Prints and integer: " << x << endl;
}

void printNumber(float x) {
    cout << "Prints a float: " << x << endl;
}

// Now, the same printNumber() function name will work for both integers and floats.

int main() {
    int a = 16;
    float b = 54.541;
    printNumber(a);
    printNumber(b);
}

/*
You can not overload function declarations that differ only by return type.
The following declaration results in an error.

int printName(int a) { }
float printName(int b) { }
double printName(int c) { }
*/